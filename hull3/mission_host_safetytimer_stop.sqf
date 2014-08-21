hull_mission_safetyTimerAbort = true;
if (isServer) then {
    [true] spawn hull_mission_fnc_serverSafetyTimerCountDown;
} else {
    publicVariable "hull_mission_safetyTimerAbort";
};
(_this select 0) removeAction (_this select 2);