private "_action";
_action = _this select 3 select 0;
call {
    if (_action == "activated") exitWith {
        [] call hull3_mission_fnc_removeSafetyTimerActions;
        [] call hull3_mission_fnc_addSafetyTimerConfirmActions;
    };
    if (_action == "confirm") exitWith {
        [] call hull3_mission_fnc_removeSafetyTimerActions;
        hull3_mission_safetyTimerAbort = true;
        if (isServer) then {
            [true] spawn hull3_mission_fnc_serverSafetyTimerCountDown;
        } else {
            publicVariable "hull3_mission_safetyTimerAbort";
        };
    };
    if (_action == "cancel") exitWith {
        [] call hull3_mission_fnc_removeSafetyTimerActions;
        [] call hull3_mission_fnc_addHostSafetyTimerStopAction;
    };
};