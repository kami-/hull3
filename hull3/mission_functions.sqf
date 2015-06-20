#include "hull3_macros.h"

#include "\userconfig\hull3\log\mission.h"
#include "logbook.h"


hull3_mission_fnc_preInit = {
    hull3_mission_isJip = false;
    [] call hull3_mission_fnc_addEventHandlers;
    DEBUG("hull3.mission","Mission functions preInit finished.");
};

hull3_mission_fnc_addEventHandlers = {
    ["player.initialized", hull3_mission_fnc_clientInit] call hull3_event_fnc_addEventHandler;
};

hull3_mission_fnc_init = {
    [] call hull3_mission_fnc_evaluateParams;
    hull3_mission_safetyTimerAbort = false;
};

hull3_mission_fnc_serverInit = {
    [] call hull3_mission_fnc_addServerEHs;
    [] call hull3_mission_fnc_readMissionParamValues;
    [] call hull3_mission_fnc_setEnviroment;
    [] spawn hull3_mission_fnc_serverSafetyTimerLoop;
    DEBUG("hull3.mission","Server init finished.");
};

hull3_mission_fnc_clientInit = {
    hull3_mission_safetyTimerActionIds = [-1, -1, -1];
    hull3_mission_isJip = SLX_XEH_MACHINE select 1;
    if (hull3_mission_isJip) then {
        [] call hull3_mission_fnc_getJipSync;
    };
    DEBUG("hull3.mission","Client init finished.");
};

hull3_mission_fnc_evaluateParams = {
    if (!isNil {paramsArray}) then {
        {
            private ["_name", "_code"];
            _name = configName ((missionConfigFile >> "Params") select _forEachIndex);
            _code = getText (missionConfigFile >> "Params" >> _name >> "code");
            call compile format [_code, _x];
        } foreach paramsArray;
        TRACE("hull3.mission.params",FMT_1("ParamsArray '%1' have been evaluated.",paramsArray));
    };
};

hull3_mission_fnc_readMissionParamValues = {
    if (!isNil {hull3_mission_date}) then {
        hull3_mission_date = (["MissionParams", "date"] call hull3_config_fnc_getArray) select hull3_mission_date;
        TRACE("hull3.mission.params",FMT_1("Mission param 'hull3_mission_date' was set to '%1'.",hull3_mission_date));
    };
    if (!isNil {hull3_mission_timeOfDay}) then {
        hull3_mission_timeOfDay = (["MissionParams", "time"] call hull3_config_fnc_getArray) select hull3_mission_timeOfDay;
        TRACE("hull3.mission.params",FMT_1("Mission param 'hull3_mission_timeOfDay' was set to '%1'.",hull3_mission_timeOfDay));
    };
    if (!isNil {hull3_mission_fog}) then {
        hull3_mission_fog = (["MissionParams", "fog"] call hull3_config_fnc_getArray) select hull3_mission_fog;
        TRACE("hull3.mission.params",FMT_1("Mission param 'hull3_mission_fog' was set to '%1'.",hull3_mission_fog));
    };
    if (!isNil {hull3_mission_weather}) then {
        hull3_mission_weather = (["MissionParams", "weather"] call hull3_config_fnc_getArray) select hull3_mission_weather;
        TRACE("hull3.mission.params",FMT_1("Mission param 'hull3_mission_weather' was set to '%1'.",hull3_mission_weather));
    };
};

hull3_mission_fnc_getDateTime = {
    if (isNil {hull3_mission_date}) then {
        hull3_mission_date = [2014, 1, 31];
        TRACE("hull3.mission.datetime",FMT_1("Mission param 'hull3_mission_date' was not set, using default '%1'.",hull3_mission_date));
    };
    if (isNil {hull3_mission_timeOfDay}) then {
        hull3_mission_timeOfDay = [12, 0];
        TRACE("hull3.mission.datetime",FMT_1("Mission param 'hull3_mission_timeOfDay' was not set, using default '%1'.",hull3_mission_timeOfDay));
    };

    [hull3_mission_date select 0, hull3_mission_date select 1, hull3_mission_date select 2, hull3_mission_timeOfDay select 0, hull3_mission_timeOfDay select 1];
};

hull3_mission_fnc_getFog = {
    if (isNil {hull3_mission_fog}) then {
        hull3_mission_fog = [0, 0, 0];
        TRACE("hull3.mission.fog",FMT_1("Mission param 'hull3_mission_fog' was not set, using default '%1'.",hull3_mission_fog));
    };

    hull3_mission_fog;
};

hull3_mission_fnc_getWeather = {
    if (isNil {hull3_mission_weather}) then {
        hull3_mission_weather = [0, 0, 0, 0, 0, 0, 0, 0];
        TRACE("hull3.mission.weather",FMT_1("Mission param 'hull3_mission_weather' was not set, using default '%1'.",hull3_mission_weather));
    };
    if (hull3_mission_weather select 0 == -1 && {isServer}) then {
        DECLARE(_weathers) = ["MissionParams", "weather"] call hull3_config_fnc_getArray;
        hull3_mission_weather = _weathers select ((floor random ((count _weathers) - 1)) + 1);
        TRACE("hull3.mission.weather",FMT_1("Random weather was selected. Generated random weather '%1' for server.",hull3_mission_weather));
    } else {
        if (!isDedicated && !isServer) then {
            hull3_mission_weather = [0, 0, 0, 0, 0, 0, 0, 0];
            TRACE("hull3.mission.weather",FMT_1("Random weather was selected. Using default weather '%1' for client.",hull3_mission_weather));
        };
    };

    hull3_mission_weather;
};

hull3_mission_fnc_setWeather = {
    FUN_ARGS_2(_time,_weather);

    [(_weather select 0)] call BIS_fnc_setOvercast;
    _time setRain (_weather select 1);
    _time setRainbow (_weather select 2);
    _time setLightnings (_weather select 3);
    _time setWindStr  (_weather select 4);
    _time setWindForce (_weather select 5);
    _time setWaves (_weather select 6);
};

hull3_mission_fnc_setEnviroment = {
    setDate ([] call hull3_mission_fnc_getDateTime);
    [0, [] call hull3_mission_fnc_getWeather] call hull3_mission_fnc_setWeather;
    0 setFog ([] call hull3_mission_fnc_getFog);
    DEBUG("hull3.mission.weather",FMT_3("Environment was set. Date to '%1', fog to '%2' and weather to '%3'.",[] call hull3_mission_fnc_getDateTime,[] call hull3_mission_fnc_getFog,[] call hull3_mission_fnc_getWeather));
};

hull3_mission_fnc_addPlayerEHs = {
    if (hull3_mission_isJip) then {
        "hull3_mission_jipPacket" addPublicVariableEventHandler {
            (_this select 1) call hull3_mission_fnc_receiveJipSync;
        };
    };
    "hull3_mission_safetyTimer" addPublicVariableEventHandler {
        (_this select 1) call hull3_mission_fnc_handleSafetyTimeChange;
    };
    DEBUG("hull3.mission.ehs","Player event handlers were added.");
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
    DEBUG("hull3.mission.ehs","Server event handlers were added.");
};

hull3_mission_fnc_serverSafetyTimerLoop = {
    if (!isNil {hull3_mission_safetyTimerEnd} && {hull3_mission_safetyTimerEnd > 0}) then {
        hull3_mission_safetyTimer = [false, -1];
        DEBUG("hull3.mission.safetytimer",FMT_1("Safety timer has been initialized with value '%1'.",hull3_mission_safetyTimer));
        while {(hull3_mission_safetyTimer select 1) < hull3_mission_safetyTimerEnd && {!hull3_mission_safetyTimerAbort}} do {
            hull3_mission_safetyTimer set [1, (hull3_mission_safetyTimer select 1) + 1];
            publicVariable "hull3_mission_safetyTimer";
            DEBUG("hull3.mission.safetytimer",FMT_1("Safety timer has been published to clients with value '%1'.",hull3_mission_safetyTimer));
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
        DEBUG("hull3.mission.safetytimer",FMT_1("Safety timer has been aborted. Starting countdown from '%1' seconds.",hull3_mission_safetyTimer select 1));
        for "_i" from 10 to 0 step -1 do {
            hull3_mission_safetyTimer set [1, _i];
            publicVariable "hull3_mission_safetyTimer";
            TRACE("hull3.mission.safetytimer",FMT_1("Safety timer has been published to clients with countdown time at '%1' seconds.",hull3_mission_safetyTimer select 1));
            if (!isDedicated) then {
                hull3_mission_safetyTimer call hull3_mission_fnc_handleSafetyTimeChange;
            };
            sleep 1;
        };
        ["mission.safetytimer.ended", []] call hull3_event_fnc_emitEvent;
    };
};

hull3_mission_fnc_clientSafetyTimerLoop = {
    if (!isNil {hull3_mission_safetyTimerEnd} && {hull3_mission_safetyTimerEnd > 0}) then {
        [] call hull3_mission_fnc_addHostSafetyTimerStopAction;
        [player] call hull3_unit_fnc_addFiredEHs;
        DEBUG("hull3.mission.safetytimer","Starting safety timer loop.");
        [{
            DECLARE(_weapon) = currentWeapon player;
            if (!(_weapon in (player getVariable ["ace_safemode_safedWeapons", []]))) then {
                [player, _weapon, _weapon] call ace_safemode_fnc_lockSafety;
            };
            if ([] call hull3_mission_fnc_hasSafetyTimerEnded) then {
                [_this select 1] call CBA_fnc_removePerFrameHandler;
                player removeEventHandler ["Fired", player getVariable "hull3_eh_fired"];
                DEBUG("hull3.mission.safetytimer","Safety timer has ended. Removed fired EH.");
            };
        }, 0, []] call CBA_fnc_addPerFrameHandler;
    };
};

hull3_mission_fnc_handleSafetyTimeChange = {
    FUN_ARGS_2(_isCountDown,_timeValue);

    DEBUG("hull3.mission.safetytimer",FMT_1("Safety timer has been changed. Received value '%1'.",AS_ARRAY_2(_isCountDown,_timeValue)));
    DECLARE(_message) = "Game is not live. Waiting for host to start it. (%1 minutes)";
    if (_isCountDown) then {
        call {
            if (_timeValue == 0) exitWith {
                _message = "Game is live!";
                if (!isServer) then {
                    ["mission.safetytimer.ended", []] call hull3_event_fnc_emitEvent;
                };
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
        DECLARE(_actionId) = player addAction ['<t color="#428CE0">Disable weapon safety</t>', ADDON_PATH(mission_host_safetytimer_stop.sqf), ["activated"], 3, false, false, "", "driver _target == _this && {!(hull3_mission_safetyTimer select 0)} && {(hull3_mission_safetyTimer select 1) < hull3_mission_safetyTimerEnd}"];
        hull3_mission_safetyTimerActionIds set [0, _actionId];
        DEBUG("hull.mission.safetytimer","Added safety timer abort action to player.");
    };
};

hull3_mission_fnc_addSafetyTimerConfirmActions = {
    DECLARE(_actionId) = player addAction ['<t color="#00FF00">Confirm weapon safety disabling</t>', ADDON_PATH(mission_host_safetytimer_stop.sqf), ["confirm"], 3, false, false, "", "driver _target == _this && {!(hull3_mission_safetyTimer select 0)} && {(hull3_mission_safetyTimer select 1) < hull3_mission_safetyTimerEnd}"];
    hull3_mission_safetyTimerActionIds set [1, _actionId];
    _actionId = player addAction ['<t color="#FF0000">Cancel weapon safety disabling</t>', ADDON_PATH(mission_host_safetytimer_stop.sqf), ["cancel"], 3, false, false, "", "driver _target == _this && {!(hull3_mission_safetyTimer select 0)} && {(hull3_mission_safetyTimer select 1) < hull3_mission_safetyTimerEnd}"];
    hull3_mission_safetyTimerActionIds set [2, _actionId];
};

hull3_mission_fnc_removeSafetyTimerActions = {
    {
        if (_x != -1) then {
            player removeAction _x;
            hull3_mission_safetyTimerActionIds set [_forEachIndex, -1];
        };
    } foreach hull3_mission_safetyTimerActionIds;
};

hull3_mission_fnc_getJipSync = {
    if (hull3_mission_isJip) then {
        hull3_mission_jipPacket = [player];
        DEBUG("hull3.mission.jip",FMT_2("Sending JIP state request for server from client '%1' with time '%2'.",player,time));
        publicVariableServer "hull3_mission_jipPacket";
    };
};

hull3_mission_fnc_sendJipSync = {
    FUN_ARGS_1(_client);

    hull3_mission_jipPacket = [date];
    PUSH(hull3_mission_jipPacket,hull3_mission_safetyTimer);
    PUSH(hull3_mission_jipPacket,hull3_mission_safetyTimerAbort);
    DECLARE(_customArguments) = ["mission_jip_sending", [_client]] call hull3_common_fnc_getEventFileResult;
    PUSH(hull3_mission_jipPacket,_customArguments);
    DEBUG("hull3.mission.jip",FMT_2("Sending JIP sync for client '%1' with packet '%2'.",_client,hull3_mission_jipPacket));
    (owner _client) publicVariableClient "hull3_mission_jipPacket";
};

hull3_mission_fnc_receiveJipSync = {
    FUN_ARGS_6(_date,_safetyTimer,_safetyTimerAbort,_customArguments);

    DEBUG("hull3.mission.jip",FMT_2("Received JIP sync '%1' from server for client '%2'.",owner player,_this));
    setDate _date;
    hull3_mission_date = _date;
    hull3_mission_safetyTimer = _safetyTimer;
    hull3_mission_safetyTimerAbort = _safetyTimerAbort;
    ["mission.jip.received", _customArguments] call hull3_event_fnc_emitEvent;
};