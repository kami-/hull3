#include "hull_macros.h"

#include "\userconfig\hull3\log\mission.h"
#include "logbook.h"


hull_mission_fnc_preInit = {
    hull_mission_isJip = false;
    [] call hull_mission_fnc_addEventHandlers;
};

hull_mission_fnc_addEventHandlers = {
    ["player.initialized", hull_mission_fnc_clientInit] call hull_event_fnc_addEventHandler;
};

hull_mission_fnc_init = {
    [] call hull_mission_fnc_evaluateParams;
    [] call hull_mission_fnc_readMissionParamValues;
    [] call hull_mission_fnc_setEnviroment;
    hull_mission_safetyTimerAbort = false;
};

hull_mission_fnc_serverInit = {
    [] call hull_mission_fnc_init;
    [] call hull_mission_fnc_addServerEHs;
    [] spawn hull_mission_fnc_serverSafetyTimerLoop;
    [] spawn hull_mission_fnc_broadcastEnviromentLoop;
};

hull_mission_fnc_clientInit = {
    [] call hull_mission_fnc_init;
    DEBUG("hull.mission.jip",FMT_1("CBA SLX_XEH_MACHINE='%1'",SLX_XEH_MACHINE));
    hull_mission_isJip = SLX_XEH_MACHINE select 1;
    if (hull_mission_isJip) then {
        [] call hull_mission_fnc_getJipSync;
    };
};

hull_mission_fnc_evaluateParams = {
    if (!isNil {paramsArray}) then {
        {
            private ["_name", "_code"];
            _name = configName ((missionConfigFile >> "Params") select _forEachIndex);
            _code = getText (missionConfigFile >> "Params" >> _name >> "code");
            call compile format [_code, _x];
        } foreach paramsArray;
    };
};

hull_mission_fnc_readMissionParamValues = {
    if (!isNil {hull_mission_date}) then {
        hull_mission_date = (["MissionParams", "date"] call hull_config_fnc_getArray) select hull_mission_date;
    };
    if (!isNil {hull_mission_timeOfDay}) then {
        hull_mission_timeOfDay = (["MissionParams", "time"] call hull_config_fnc_getArray) select hull_mission_timeOfDay;
    };
    if (!isNil {hull_mission_fog}) then {
        hull_mission_fog = (["MissionParams", "fog"] call hull_config_fnc_getArray) select hull_mission_fog;
    };
    if (!isNil {hull_mission_weather}) then {
        hull_mission_weather = (["MissionParams", "weather"] call hull_config_fnc_getArray) select hull_mission_weather;
    };
};

hull_mission_fnc_getDateTime = {
    if (isNil {hull_mission_date}) then {
        hull_mission_date = [2014, 1, 31];
    };
    if (isNil {hull_mission_timeOfDay}) then {
        hull_mission_timeOfDay = [12, 0];
    };

    [hull_mission_date select 0, hull_mission_date select 1, hull_mission_date select 2, hull_mission_timeOfDay select 0, hull_mission_timeOfDay select 1];
};

hull_mission_fnc_getFog = {
    if (isNil {hull_mission_fog}) then {
        hull_mission_fog = [0, 0, 0];
    };

    hull_mission_fog;
};

hull_mission_fnc_getWeather = {
    if (isNil {hull_mission_weather}) then {
        hull_mission_weather = [0, 0, 0, 0, 0, 0, 0, 0];
    };
    if (hull_mission_weather select 0 == -1 && {isServer}) then {
        DECLARE(_weathers) = ["MissionParams", "weather"] call hull_config_fnc_getArray;
        hull_mission_weather = _weathers select ((floor random ((count _weathers) - 1)) + 1);
    } else {
        if (!isDedicated && !isServer) then {
            hull_mission_weather = [0, 0, 0, 0, 0, 0, 0, 0];
        };
    };

    hull_mission_weather;
};

hull_mission_fnc_setWeather = {
    FUN_ARGS_2(_time,_weather);

    _time setOvercast (_weather select 0);
    _time setRain (_weather select 1);
    _time setRainbow (_weather select 2);
    _time setLightnings (_weather select 3);
    _time setWindStr  (_weather select 4);
    _time setWindForce (_weather select 5);
    _time setWaves (_weather select 6);
    DEBUG("hull.mission.weather",FMT_1("Weather set to '%1'.",_weather));
};

hull_mission_fnc_setEnviroment = {
    setDate ([] call hull_mission_fnc_getDateTime);
    0 setFog ([] call hull_mission_fnc_getFog);
    [0, [] call hull_mission_fnc_getWeather] call hull_mission_fnc_setWeather;
};

hull_mission_fnc_broadcastEnviromentLoop = {
    sleep 1;
    forceWeatherChange;
    while {true} do {
        hull_mission_syncEnviroment = [date];
        publicVariable "hull_mission_syncEnviroment";
        sleep 300;
    };
};

hull_mission_fnc_addPlayerEHs = {
    "hull_mission_syncEnviroment" addPublicVariableEventHandler {
        if (date isEqualTo (_this select 1 select 0)) then {
            setDate (_this select 1 select 0);
        };
    };
    if (hull_mission_isJip) then {
        "hull_mission_jipPacket" addPublicVariableEventHandler {
            (_this select 1) call hull_mission_fnc_receiveJipSync;
        };
    };
    "hull_mission_safetyTimer" addPublicVariableEventHandler {
        (_this select 1) call hull_mission_fnc_handleSafetyTimeChange;
    };
};

hull_mission_fnc_addServerEHs = {
    if (isDedicated) then {
        "hull_mission_jipPacket" addPublicVariableEventHandler {
            (_this select 1) call hull_mission_fnc_sendJipSync;
        };
    };
    "hull_mission_safetyTimerAbort" addPublicVariableEventHandler {
        [_this select 1] spawn hull_mission_fnc_serverSafetyTimerCountDown;
    };
};

hull_mission_fnc_serverSafetyTimerLoop = {
    if (!isNil {hull_mission_safetyTimerEnd} && {hull_mission_safetyTimerEnd > 0}) then {
        hull_mission_safetyTimer = [false, -1];
        while {(hull_mission_safetyTimer select 1) < hull_mission_safetyTimerEnd && {!hull_mission_safetyTimerAbort}} do {
            hull_mission_safetyTimer set [1, (hull_mission_safetyTimer select 1) + 1];
            publicVariable "hull_mission_safetyTimer";
            if (!isDedicated) then {
                hull_mission_safetyTimer call hull_mission_fnc_handleSafetyTimeChange;
            };
            sleep 60;
        };
        if (!hull_mission_safetyTimerAbort) then {
            [true] spawn hull_mission_fnc_serverSafetyTimerCountDown;
        };
    };
};

hull_mission_fnc_serverSafetyTimerCountDown = {
    FUN_ARGS_1(_isAborted);

    if (_isAborted) then {
        hull_mission_safetyTimer = [true, 10];
        for "_i" from 10 to 0 step -1 do {
            hull_mission_safetyTimer set [1, _i];
            publicVariable "hull_mission_safetyTimer";
            if (!isDedicated) then {
                hull_mission_safetyTimer call hull_mission_fnc_handleSafetyTimeChange;
            };
            sleep 1;
        };
    };
};

hull_mission_fnc_clientSafetyTimerLoop = {
    if (!isNil {hull_mission_safetyTimerEnd} && {hull_mission_safetyTimerEnd > 0}) then {
        [] call hull_mission_fnc_addHostSafetyTimerStopAction;
        [player] call hull_unit_fnc_addFiredEHs;
        while {!([] call hull_mission_fnc_hasSafetyTimerEnded)} do {
            sleep 0.5;
        };
        player removeEventHandler ["Fired", player getVariable "hull_eh_fired"];
    };
};

hull_mission_fnc_handleSafetyTimeChange = {
    FUN_ARGS_2(_isCountDown,_timeValue);

    DECLARE(_message) = "Game is not live. Waiting for host to start it. (%1 minutes)";
    if (_isCountDown) then {
        call {
            if (_timeValue == 0) exitWith {
                _message = "Game is live!";
            };
            if (_timeValue <= 5) exitWith {_message = "Game will be live in %1 seconds!";};
            _message = "";
        };
    };
    if (_message != "") then {
        player globalChat format [_message, _timeValue];
    };
};

hull_mission_fnc_hasSafetyTimerEnded = {
    (hull_mission_safetyTimer select 0) && {(hull_mission_safetyTimer select 1) <= 0};
};

hull_mission_fnc_addHostSafetyTimerStopAction = {
    if (serverCommandAvailable "#kick" || {!isMultiplayer}) then {
        player addAction ["Disable weapon safety", ADDON_PATH(mission_host_safetytimer_stop.sqf), [], 3, false, false, "", "driver _target == _this && {!(hull_mission_safetyTimer select 0)} && {(hull_mission_safetyTimer select 1) < hull_mission_safetyTimerEnd}"];
    };
};

hull_mission_fnc_getJipSync = {
    if (hull_mission_isJip) then {
        hull_mission_jipPacket = [player];
        DEBUG("hull.mission.jip",FMT_2("Sending JIP state request for server from client '%1' with time '%2'.",player,time));
        publicVariableServer "hull_mission_jipPacket";
    };
};

hull_mission_fnc_sendJipSync = {
    FUN_ARGS_1(_client);

    hull_mission_jipPacket = [date];
    PUSH(hull_mission_jipPacket,fogParams);
    DECLARE(_weather) = [overcast, rain, rainbow, lightnings, windStr, windStr, waves];
    PUSH(hull_mission_jipPacket,_weather);
    PUSH(hull_mission_jipPacket,hull_mission_safetyTimer);
    PUSH(hull_mission_jipPacket,hull_mission_safetyTimerAbort);
    DEBUG("hull.mission.jip",FMT_2("Sending JIP sync for client '%1' with packet '%2'.",_client,hull_mission_jipPacket));
    (owner _client) publicVariableClient "hull_mission_jipPacket";
};

hull_mission_fnc_receiveJipSync = {
    FUN_ARGS_5(_date,_fog,_weather,_safetyTimer,_safetyTimerAbort);

    DEBUG("hull.mission.jip",FMT_2("Received JIP sync '%1' from server for client '%2'.",owner player,_this));
    setDate _date;
    skipTime -24;
    0 setFog _fog;
    [0, _weather] call hull_mission_fnc_setWeather;
    skipTime 24;
    hull_mission_safetyTimer = _safetyTimer;
    hull_mission_safetyTimerAbort = _safetyTimerAbort;
};