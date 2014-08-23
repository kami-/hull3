#include "hull3_macros.h"

#include "\userconfig\hull3\log\mission.h"
#include "logbook.h"


hull3_mission_fnc_preInit = {
    hull3_mission_isJip = false;
    [] call hull3_mission_fnc_addEventHandlers;
    DEBUG("hull.mission","Mission functions preInit finished.");
};

hull3_mission_fnc_addEventHandlers = {
    ["player.initialized", hull3_mission_fnc_clientInit] call hull3_event_fnc_addEventHandler;
};

hull3_mission_fnc_init = {
    [] call hull3_mission_fnc_evaluateParams;
    [] call hull3_mission_fnc_readMissionParamValues;
    [] call hull3_mission_fnc_setEnviroment;
    hull3_mission_safetyTimerAbort = false;
};

hull3_mission_fnc_serverInit = {
    [] call hull3_mission_fnc_init;
    [] call hull3_mission_fnc_addServerEHs;
    [] spawn hull3_mission_fnc_serverSafetyTimerLoop;
    [] spawn hull3_mission_fnc_broadcastEnviromentLoop;
    DEBUG("hull.mission","Server init finished.");
};

hull3_mission_fnc_clientInit = {
    [] call hull3_mission_fnc_init;
    hull3_mission_isJip = SLX_XEH_MACHINE select 1;
    if (hull3_mission_isJip) then {
        [] call hull3_mission_fnc_getJipSync;
    };
    DEBUG("hull.mission","Client init finished.");
};

hull3_mission_fnc_evaluateParams = {
    if (!isNil {paramsArray}) then {
        {
            private ["_name", "_code"];
            _name = configName ((missionConfigFile >> "Params") select _forEachIndex);
            _code = getText (missionConfigFile >> "Params" >> _name >> "code");
            call compile format [_code, _x];
        } foreach paramsArray;
        TRACE("hull.mission.params",FMT_1("ParamsArray '%1' have been evaluated.",paramsArray));
    };
};

hull3_mission_fnc_readMissionParamValues = {
    if (!isNil {hull3_mission_date}) then {
        hull3_mission_date = (["MissionParams", "date"] call hull3_config_fnc_getArray) select hull3_mission_date;
        TRACE("hull.mission.params",FMT_1("Mission param 'hull3_mission_date' was set to '%1'.",hull3_mission_date));
    };
    if (!isNil {hull3_mission_timeOfDay}) then {
        hull3_mission_timeOfDay = (["MissionParams", "time"] call hull3_config_fnc_getArray) select hull3_mission_timeOfDay;
        TRACE("hull.mission.params",FMT_1("Mission param 'hull3_mission_timeOfDay' was set to '%1'.",hull3_mission_timeOfDay));
    };
    if (!isNil {hull3_mission_fog}) then {
        hull3_mission_fog = (["MissionParams", "fog"] call hull3_config_fnc_getArray) select hull3_mission_fog;
        TRACE("hull.mission.params",FMT_1("Mission param 'hull3_mission_fog' was set to '%1'.",hull3_mission_fog));
    };
    if (!isNil {hull3_mission_weather}) then {
        hull3_mission_weather = (["MissionParams", "weather"] call hull3_config_fnc_getArray) select hull3_mission_weather;
        TRACE("hull.mission.params",FMT_1("Mission param 'hull3_mission_weather' was set to '%1'.",hull3_mission_weather));
    };
};

hull3_mission_fnc_getDateTime = {
    if (isNil {hull3_mission_date}) then {
        hull3_mission_date = [2014, 1, 31];
        TRACE("hull.mission.datetime",FMT_1("Mission param 'hull3_mission_date' was not set, using default '%1'.",hull3_mission_date));
    };
    if (isNil {hull3_mission_timeOfDay}) then {
        hull3_mission_timeOfDay = [12, 0];
        TRACE("hull.mission.datetime",FMT_1("Mission param 'hull3_mission_timeOfDay' was not set, using default '%1'.",hull3_mission_timeOfDay));
    };

    [hull3_mission_date select 0, hull3_mission_date select 1, hull3_mission_date select 2, hull3_mission_timeOfDay select 0, hull3_mission_timeOfDay select 1];
};

hull3_mission_fnc_getFog = {
    if (isNil {hull3_mission_fog}) then {
        hull3_mission_fog = [0, 0, 0];
        TRACE("hull.mission.fog",FMT_1("Mission param 'hull3_mission_fog' was not set, using default '%1'.",hull3_mission_fog));
    };

    hull3_mission_fog;
};

hull3_mission_fnc_getWeather = {
    if (isNil {hull3_mission_weather}) then {
        hull3_mission_weather = [0, 0, 0, 0, 0, 0, 0, 0];
        TRACE("hull.mission.weather",FMT_1("Mission param 'hull3_mission_weather' was not set, using default '%1'.",hull3_mission_weather));
    };
    if (hull3_mission_weather select 0 == -1 && {isServer}) then {
        DECLARE(_weathers) = ["MissionParams", "weather"] call hull3_config_fnc_getArray;
        hull3_mission_weather = _weathers select ((floor random ((count _weathers) - 1)) + 1);
        TRACE("hull.mission.weather",FMT_1("Random weather was selected. Generated random weather '%1' for server.",hull3_mission_weather));
    } else {
        if (!isDedicated && !isServer) then {
            hull3_mission_weather = [0, 0, 0, 0, 0, 0, 0, 0];
            TRACE("hull.mission.weather",FMT_1("Random weather was selected. Using default weather '%1' for client.",hull3_mission_weather));
        };
    };

    hull3_mission_weather;
};

hull3_mission_fnc_setWeather = {
    FUN_ARGS_2(_time,_weather);

    _time setOvercast (_weather select 0);
    _time setRain (_weather select 1);
    _time setRainbow (_weather select 2);
    _time setLightnings (_weather select 3);
    _time setWindStr  (_weather select 4);
    _time setWindForce (_weather select 5);
    _time setWaves (_weather select 6);
};

hull3_mission_fnc_setEnviroment = {
    setDate ([] call hull3_mission_fnc_getDateTime);
    0 setFog ([] call hull3_mission_fnc_getFog);
    [0, [] call hull3_mission_fnc_getWeather] call hull3_mission_fnc_setWeather;
    DEBUG("hull.mission.weather",FMT_3("Environment was set. Date to '%1', fog to '%2' and weather to '%3'.",[] call hull3_mission_fnc_getDateTime,[] call hull3_mission_fnc_getFog,[] call hull3_mission_fnc_getWeather));
};

hull3_mission_fnc_broadcastEnviromentLoop = {
    sleep 1;
    forceWeatherChange;
    DEBUG("hull.mission.weather",FMT_1("Weather '%1' was forced changed by server.",hull3_mission_weather));
    while {true} do {
        hull3_mission_syncEnviroment = [date];
        publicVariable "hull3_mission_syncEnviroment";
        TRACE("hull.mission.environment",FMT_1("Environment '%1' was synchronized by server.",hull3_mission_syncEnviroment));
        sleep 300;
    };
};

hull3_mission_fnc_addPlayerEHs = {
    "hull3_mission_syncEnviroment" addPublicVariableEventHandler {
        if (date isEqualTo (_this select 1 select 0)) then {
            setDate (_this select 1 select 0);
        };
    };
    if (hull3_mission_isJip) then {
        "hull3_mission_jipPacket" addPublicVariableEventHandler {
            (_this select 1) call hull3_mission_fnc_receiveJipSync;
        };
    };
    "hull3_mission_safetyTimer" addPublicVariableEventHandler {
        (_this select 1) call hull3_mission_fnc_handleSafetyTimeChange;
    };
    DEBUG("hull.mission.ehs","Player event handlers were added.");
};

hull3_mission_fnc_addServerEHs = {
    if (isDedicated) then {
        "hull3_mission_jipPacket" addPublicVariableEventHandler {
            (_this select 1) call hull3_mission_fnc_sendJipSync;
        };
    };
    "hull3_mission_safetyTimerAbort" addPublicVariableEventHandler {
        [_this select 1] spawn hull3_mission_fnc_serverSafetyTimerCountDown;
    };
    DEBUG("hull.mission.ehs","Server event handlers were added.");
};

hull3_mission_fnc_serverSafetyTimerLoop = {
    if (!isNil {hull3_mission_safetyTimerEnd} && {hull3_mission_safetyTimerEnd > 0}) then {
        hull3_mission_safetyTimer = [false, -1];
        DEBUG("hull.mission.safetytimer",FMT_1("Safety timer has been initialized with value '%1'.",hull3_mission_safetyTimer));
        while {(hull3_mission_safetyTimer select 1) < hull3_mission_safetyTimerEnd && {!hull3_mission_safetyTimerAbort}} do {
            hull3_mission_safetyTimer set [1, (hull3_mission_safetyTimer select 1) + 1];
            publicVariable "hull3_mission_safetyTimer";
            DEBUG("hull.mission.safetytimer",FMT_1("Safety timer has been published to clients with value '%1'.",hull3_mission_safetyTimer));
            if (!isDedicated) then {
                hull3_mission_safetyTimer call hull3_mission_fnc_handleSafetyTimeChange;
            };
            sleep 60;
        };
        if (!hull3_mission_safetyTimerAbort) then {
            [true] spawn hull3_mission_fnc_serverSafetyTimerCountDown;
        };
    };
};

hull3_mission_fnc_serverSafetyTimerCountDown = {
    FUN_ARGS_1(_isAborted);

    if (_isAborted) then {
        hull3_mission_safetyTimer = [true, 10];
        DEBUG("hull.mission.safetytimer",FMT_1("Safety timer has been aborted. Starting countdown from '%1' seconds.",hull3_mission_safetyTimer select 1));
        for "_i" from 10 to 0 step -1 do {
            hull3_mission_safetyTimer set [1, _i];
            publicVariable "hull3_mission_safetyTimer";
            TRACE("hull.mission.safetytimer",FMT_1("Safety timer has been published to clients with countdown time at '%1' seconds.",hull3_mission_safetyTimer select 1));
            if (!isDedicated) then {
                hull3_mission_safetyTimer call hull3_mission_fnc_handleSafetyTimeChange;
            };
            sleep 1;
        };
    };
};

hull3_mission_fnc_clientSafetyTimerLoop = {
    if (!isNil {hull3_mission_safetyTimerEnd} && {hull3_mission_safetyTimerEnd > 0}) then {
        [] call hull3_mission_fnc_addHostSafetyTimerStopAction;
        [player] call hull3_unit_fnc_addFiredEHs;
        DEBUG("hull.mission.safetytimer","Starting safety timer loop.");
        while {!([] call hull3_mission_fnc_hasSafetyTimerEnded)} do {
            sleep 0.5;
        };
        player removeEventHandler ["Fired", player getVariable "hull3_eh_fired"];
        DEBUG("hull.mission.safetytimer","Safety timer has ended. Removed fired EH.");
    };
};

hull3_mission_fnc_handleSafetyTimeChange = {
    FUN_ARGS_2(_isCountDown,_timeValue);

    DEBUG("hull.mission.safetytimer",FMT_1("Safety timer has been changed. Received value '%1'.",AS_ARRAY_2(_isCountDown,_timeValue)));
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

hull3_mission_fnc_hasSafetyTimerEnded = {
    (hull3_mission_safetyTimer select 0) && {(hull3_mission_safetyTimer select 1) <= 0};
};

hull3_mission_fnc_addHostSafetyTimerStopAction = {
    if (serverCommandAvailable "#kick" || {!isMultiplayer}) then {
        player addAction ["Disable weapon safety", ADDON_PATH(mission_host_safetytimer_stop.sqf), [], 3, false, false, "", "driver _target == _this && {!(hull3_mission_safetyTimer select 0)} && {(hull3_mission_safetyTimer select 1) < hull3_mission_safetyTimerEnd}"];
        DEBUG("hull.mission.safetytimer","Added safety timer abort action to player.");
    };
};

hull3_mission_fnc_getJipSync = {
    if (hull3_mission_isJip) then {
        hull3_mission_jipPacket = [player];
        DEBUG("hull.mission.jip",FMT_2("Sending JIP state request for server from client '%1' with time '%2'.",player,time));
        publicVariableServer "hull3_mission_jipPacket";
    };
};

hull3_mission_fnc_sendJipSync = {
    FUN_ARGS_1(_client);

    hull3_mission_jipPacket = [date];
    PUSH(hull3_mission_jipPacket,fogParams);
    DECLARE(_weather) = [overcast, rain, rainbow, lightnings, windStr, windStr, waves];
    PUSH(hull3_mission_jipPacket,_weather);
    PUSH(hull3_mission_jipPacket,hull3_mission_safetyTimer);
    PUSH(hull3_mission_jipPacket,hull3_mission_safetyTimerAbort);
    DEBUG("hull.mission.jip",FMT_2("Sending JIP sync for client '%1' with packet '%2'.",_client,hull3_mission_jipPacket));
    (owner _client) publicVariableClient "hull3_mission_jipPacket";
};

hull3_mission_fnc_receiveJipSync = {
    FUN_ARGS_5(_date,_fog,_weather,_safetyTimer,_safetyTimerAbort);

    DEBUG("hull.mission.jip",FMT_2("Received JIP sync '%1' from server for client '%2'.",owner player,_this));
    setDate _date;
    skipTime -24;
    0 setFog _fog;
    [0, _weather] call hull3_mission_fnc_setWeather;
    skipTime 24;
    hull3_mission_safetyTimer = _safetyTimer;
    hull3_mission_safetyTimerAbort = _safetyTimerAbort;
};