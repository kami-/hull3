#include "hull_macros.h"

hull_mission_fnc_init = {
    [] call hull_mission_fnc_evaluateParams;
    [] call hull_mission_fnc_readMissionParamValues;
    [] call hull_mission_fnc_setEnviroment;
    hull_mission_safetyTimerAbort = false;
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
        hull_mission_date = (getArray (HULL_CONFIGFILE >> "MissionParams" >> "date")) select hull_mission_date;
    };
    if (!isNil {hull_mission_timeOfDay}) then {
        hull_mission_timeOfDay = (getArray (HULL_CONFIGFILE >> "MissionParams" >> "time")) select hull_mission_timeOfDay;
    };
    if (!isNil {hull_mission_fog}) then {
        hull_mission_fog = (getArray (HULL_CONFIGFILE >> "MissionParams" >> "fog")) select hull_mission_fog;
    };
    if (!isNil {hull_mission_weather}) then {
        hull_mission_weather = (getArray (HULL_CONFIGFILE >> "MissionParams" >> "weather")) select hull_mission_weather;
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
        hull_mission_weather = [0, 0, 0];
    };

    [hull_mission_fog select 0, hull_mission_fog select 1, hull_mission_fog select 2];
};

hull_mission_fnc_getWeather = {
    if (isNil {hull_mission_weather}) then {
        hull_mission_weather = [0, 0, 0, 0, 0, 0, 0, 0];
    };
    if (hull_mission_weather select 0 == -1) then {
        DECLARE(_weathers) = getArray (HULL_CONFIGFILE >> "MissionParams" >> "weather");
        hull_mission_weather = _weathers select ((floor random ((count _weathers) - 1)) + 1);
    };

    [
        hull_mission_weather select 0, hull_mission_weather select 1, hull_mission_weather select 2,
        hull_mission_weather select 3, hull_mission_weather select 4, hull_mission_weather select 5,
        hull_mission_weather select 6, hull_mission_weather select 7
    ];
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
};

hull_mission_fnc_setEnviroment = {
    setDate ([] call hull_mission_fnc_getDateTime);
    10 setFog ([] call hull_mission_fnc_getFog);
    [10, [] call hull_mission_fnc_getWeather] call hull_mission_fnc_setWeather;
};

hull_mission_fnc_broadcastEnviroment = {
    sleep 1;
    forceWeatherChange;
    waitUntil {
        hull_mission_syncEnviroment = [date];
        publicVariable "hull_mission_syncEnviroment";
        sleep 300;
        false;
    };
};

hull_mission_fnc_addPlayerEHs = {
    "hull_mission_syncEnviroment" addPublicVariableEventHandler {
        setDate (_this select 1 select 0);
    };
};

hull_mission_fnc_serverSafetyTimerLoop = {
    if (!isNil {hull_mission_safetyTimer} && {hull_mission_safetyTimer > 0}) then {
        waitUntil {
            sleep 60;
            hull_mission_safetyTimer = hull_mission_safetyTimer - 1;
            publicVariable "hull_mission_safetyTimer";
            hull_mission_safetyTimer <= 0 || {hull_mission_safetyTimerAbort};
        };
    };
};

hull_mission_fnc_clientSafetyTimerLoop = {
    if (!isNil {hull_mission_safetyTimer} && {hull_mission_safetyTimer > 0}) then {
        [] call hull_mission_fnc_addHostSafetyTimerStopAction;
        [player] call hull_unit_fnc_addFiredEHs;
        waitUntil {
            hintSilent format ["%1 minutes until weapon safety disabled.", hull_mission_safetyTimer];
            hull_mission_safetyTimer <= 0 || {hull_mission_safetyTimerAbort};
        };
        player removeEventHandler ["Fired", player getVariable "hull_eh_fired"];
        hintSilent "Weapon safety disabled!";
    };
};

hull_mission_fnc_addHostSafetyTimerStopAction = {
    if (serverCommandAvailable "#kick") then {
        player addAction ["Disable weapon safety", "hull\mission_host_safetytimer_stop.sqf", [], 3, false, false, "", "driver _target == _this && {hull_mission_safetyTimer > 0}"];
    };
};