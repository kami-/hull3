#include "hull3_macros.h"

#include "\userconfig\hull3\log\unit.h"
#include "logbook.h"

hull3_unit_fnc_init = {
    FUN_ARGS_3(_unit,_gearConfig,_markerConfig);

    if (local _unit) then {
        [_unit, _gearConfig select 0, _gearConfig select 1] call hull3_gear_fnc_assign;
        [_unit] call hull3_unit_fnc_addEHs;
    };
    if (!isNil {_markerConfig} && {!isDedicated}) then {
        [_unit, _markerConfig select 0, _markerConfig select 1] call hull3_marker_fnc_initMarker;
    };
};

hull3_unit_fnc_waitForPlayer = {
    waitUntil {
        !isNull player;
    };
    ["player.initialized", [player]] call hull3_event_fnc_emitEvent;
    DEBUG("hull3.unit.player","Player is initialized.");
};

hull3_unit_fnc_onPlayerRespawn = {
    DEBUG("hull3.player.respawned",FMT_1("Player has respawned with '%1'",_this));
    ["player.respawned", _this] call hull3_event_fnc_emitEvent;
};

hull3_unit_fnc_playerInit = {
    [] call hull3_unit_fnc_waitForPlayer;

    [] spawn hull3_acre_fnc_setPlayerFrequencies;
    [] call hull3_marker_fnc_addMarkers;
    [] spawn hull3_marker_fnc_updateAllMarkers;
    [] spawn hull3_marker_fnc_updateCustomMarkers;
    [] call hull3_mission_fnc_addPlayerEHs;
    [] spawn hull3_mission_fnc_clientSafetyTimerLoop;
    [] call hull3_unit_fnc_setFireTeamColors;
};

hull3_unit_fnc_foreachNonPlayerUnits = {
    FUN_ARGS_1(_func);

    {
        if (!isPlayer _x) then {
            [_x] call _func;
        };
    } foreach allUnits;
};

hull3_unit_fnc_addEHs = {
    FUN_ARGS_1(_unit);

    if (_unit isKindOf "CAManBase") then {
        private "_ehId";
        _ehId = _unit addEventHandler ["HandleDamage", {_this call hull3_unit_fnc_friendlyFireEH;}];
        _unit setVariable ["hull3_eh_friendlyFire", _ehId];
        _ehId = _unit addEventHandler ["Killed", {_this call hull3_unit_fnc_killedEH;}];
        _unit setVariable ["hull3_eh_killed", _ehId];
    };
};

hull3_unit_fnc_addFiredEHs = {
    FUN_ARGS_1(_unit);

    private "_ehId";
    _ehId = player addEventHandler ["Fired", {deleteVehicle (_this select 6);}];
    _unit setVariable ["hull3_eh_fired", _ehId];
};

hull3_unit_fnc_friendlyFireEH = {
    FUN_ARGS_5(_unit,_selectionName,_damage,_source,_projectile);

    if (_selectionName == "" && {_unit != _source} && {side _unit == side _source}) then {
        DECLARE(_message) = LOGGING_FORMAT("hull.unit.friendlyFire","WARN",FMT_4("'%1' dealt '%2' damage with '%3' to '%4'!",_source,_damage,_projectile,_unit));
        [_message] call hull3_common_fnc_logOnServer;
    };

    _damage;
};

hull3_unit_fnc_killedEH = {
    FUN_ARGS_2(_unit,_killer);

    if (_unit != _killer && {side _unit == side _killer}) then {
        DECLARE(_message) = LOGGING_FORMAT("hull.unit.friendlyFire","WARN",FMT_2("'%1' killed '%2'!",_killer,_unit));
        [_message] call hull3_common_fnc_logOnServer;
    };

    _unit removeEventHandler ["HandleDamage", _unit getVariable "hull3_eh_friendlyFire"];
    _unit removeEventHandler ["Killed", _unit getVariable "hull3_eh_killed"];
    _unit setVariable ["hull3_eh_friendlyFire", nil];
    _unit setVariable ["hull3_eh_killed", nil];
};

hull3_unit_fnc_getAssignedTeam = {
    FUN_ARGS_1(_gearClass);

    DECLARE(_team) = "";
    {
        if (_gearClass == _x select 0) exitWith {_team = _x select 1};
    } foreach (["Group", "assignedTeams"] call hull3_config_fnc_getArray);

    _team;
};

hull3_unit_fnc_setFireTeamColors = {
    {
        DECLARE(_assignedTeam) = [_x getVariable "hull3_gear_class"] call hull3_unit_fnc_getAssignedTeam;
        if (_assignedTeam != "") then {
            _x assignTeam _assignedTeam;
        };
    } foreach units group player;
};