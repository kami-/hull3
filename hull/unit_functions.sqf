#include "hull_macros.h"

#define HULL_TEAMCOLOR_RED ["FTL", "RAT"]
#define HULL_TEAMCOLOR_BLUE ["AR", "AAR"]



hull_unit_fnc_init = {
    FUN_ARGS_3(_unit,_gearConfig,_markerConfig);

    if (local _unit) then {
        [_unit, _gearConfig select 0, _gearConfig select 1] call hull_gear_fnc_assign;
        [_unit] call hull_unit_fnc_addEHs;
    };
    if (!isNil {_markerConfig} && {!isDedicated}) then {
        [_unit, _markerConfig select 0, _markerConfig select 1] call hull_marker_fnc_initMarker;
    };
};

hull_unit_fnc_waitForPlayer = {
    waitUntil {
        !isNull player;
    };
};

hull_unit_fnc_playerInit = {
    [] call hull_unit_fnc_waitForPlayer;

    [] spawn hull_acre_fnc_setPlayerFrequencies;
    [player] spawn hull_gear_fnc_tryAssignRadios;
    [] call hull_marker_fnc_addMarkers;
    [] spawn hull_marker_fnc_updateAllMarkers;
    [] call hull_briefing_fnc_addNotes;
    [] call hull_mission_fnc_addPlayerEHs;
    [] spawn hull_mission_fnc_clientSafetyTimerLoop;
    [] call hull_unit_fnc_setFireTeamColors;
};

hull_unit_fnc_foreachNonPlayerUnits = {
    FUN_ARGS_1(_func);

    {
        if (!isPlayer _x) then {
            [_x] call _func;
        };
    } foreach allUnits;
};

hull_unit_fnc_addEHs = {
    FUN_ARGS_1(_unit);

    private "_ehId";
    _ehId = _unit addEventHandler ["HandleDamage", {_this call hull_unit_fnc_friendlyFireEH;}];
    _unit setVariable ["hull_eh_friendlyFire", _ehId];
    _ehId = _unit addEventHandler ["Killed", {_this call hull_unit_fnc_killedEH;}];
    _unit setVariable ["hull_eh_killed", _ehId];
};

hull_unit_fnc_addFiredEHs = {
    FUN_ARGS_1(_unit);

    private "_ehId";
    _ehId = player addEventHandler ["Fired", {deleteVehicle (_this select 6);}];
    _unit setVariable ["hull_eh_fired", _ehId];
};

hull_unit_fnc_friendlyFireEH = {
    FUN_ARGS_5(_unit,_selectionName,_damage,_source,_projectile);

    if (_selectionName == "" && {_unit != _source} && {side _unit == side _source}) then {
        _message = LOG_MSG_4("WARN", "Friendly Fire - '%1' dealt '%2' damage with '%3' to '%4'!", _source, _damage, _projectile, _unit);
        [_message] call hull_common_fnc_logOnServer;
    };

    _damage;
};

hull_unit_fnc_killedEH = {
    FUN_ARGS_2(_unit,_killer);

    _unit removeEventHandler ["HandleDamage", _unit getVariable "hull_eh_friendlyFire"];
    _unit removeEventHandler ["Killed", _unit getVariable "hull_eh_killed"];
    _unit setVariable ["hull_eh_friendlyFire", nil];
    _unit setVariable ["hull_eh_killed", nil];
};

hull_unit_fnc_setFireTeamColors = {
    if (count units group player == 4) then {
        {
            _x assignTeam call {
                private "_gearClass";
                _gearClass = _x getVariable "hull_gear_class";
                if (_gearClass in HULL_TEAMCOLOR_RED) exitWith {"RED"};
                if (_gearClass in HULL_TEAMCOLOR_BLUE) exitWith {"BLUE"};
                "BLUE";
            };
        } foreach units group player;
    };
};