#include "hull3_macros.h"

#include "\userconfig\hull3\log\unit.h"
#include "logbook.h"

hull3_unit_fnc_init = {
    FUN_ARGS_1(_unit);

    private ["_initEntries", "_markerEntry"];
    _initEntries = [_this] call hull3_config_fnc_getInitEntries;
    if (local _unit) then {
        private ["_factionEntry", "_gearEntry", "_uniformEntry"];
        _unit setVariable ["hull3_init_entries", _initEntries, true];
        _factionEntry = [_initEntries, "faction"] call hull3_config_fnc_getEntry;
        _gearEntry = [_initEntries, "gear"] call hull3_config_fnc_getEntry;
        _uniformEntry = [_initEntries, "uniform"] call hull3_config_fnc_getEntry;
        [_unit, _factionEntry, _gearEntry, _uniformEntry] call hull3_gear_fnc_assign;
        [_unit] call hull3_unit_fnc_addEHs;
    };
    _markerEntry = [_initEntries, "marker"] call hull3_config_fnc_getEntry;
    if (count _markerEntry > 0 && {!isDedicated}) then {
        [_unit, _markerEntry select 0, _markerEntry select 1] call hull3_marker_fnc_initMarker;
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
    _ehId = player addEventHandler ["Fired", {
        [_this select 6] call ace_frag_fnc_addBlackList;
        deleteVehicle (_this select 6);
    }];
    _unit setVariable ["hull3_eh_fired", _ehId];
};

hull3_unit_fnc_friendlyFireEH = {
    FUN_ARGS_5(_unit,_selectionName,_damage,_source,_projectile);

    // Store the used projectile locally, for later use in hull3_unit_fnc_killMessage.
    if (alive _unit) then {
        _unit setVariable ["hull3_unit_lastProjectile", _projectile, false];
    };

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

    // Pass values on, for use in a message explaining how the player died.
    _this spawn hull3_unit_fnc_killMessage;

    _unit removeEventHandler ["HandleDamage", _unit getVariable "hull3_eh_friendlyFire"];
    _unit removeEventHandler ["Killed", _unit getVariable "hull3_eh_killed"];
    _unit setVariable ["hull3_eh_friendlyFire", nil];
    _unit setVariable ["hull3_eh_killed", nil];
};

hull3_unit_fnc_ammoToString = {
    FUN_ARGS_1(_projectile);

    _text = switch(true) do 
    {
        // Bullet
        case (_projectile isKindOf "BulletBase"): { "a bullet" };

        // Rocket
        case (_projectile isKindOf "RocketBase"): { "a rocket" };

        // Missile
        case (_projectile isKindOf "MissileBase"): { "a missile" };

        // Mine
        case ((_projectile isKindOf "MineBase") || (_projectile isKindOf "BoundingMineCore")): { "a mine" };

        // GP
        case (_projectile isKindOf "G_40mm_HE"): { "a rifle-propelled grenade" };

        // Grenade
        case (_projectile isKindOf "Grenade"): { "a grenade" };

        // Bomb
        case ((_projectile isKindOf "BombCore") || (_projectile isKindOf "TimeBombCore") || (_projectile isKindOf "DirectionalBombBase")): { "a bomb" };

        // Vehicle
        case (_projectile == ""): { "a vehicle" };

        // Unknown
        default {"something magical"};
    };

_projectile
};

hull3_unit_fnc_killMessage = {
    FUN_ARGS_2(_unit,_killer);

    // Fetch the name of the last projectile to hit the player.
    _projectile = _unit getVariable ["STMF_DeathReport_LastDamage", "[no projectile found]"];
    _text = [_projectile] call hull3_unit_fnc_ammoToString;

    // If death was a road kill, add the vehicle type in brackets, rather than the ammo type
    if(_text == "a vehicle") then {_projectile = typeOf (vehicle _killer)};

    // Prepare message before we start the delay
    _message = switch(true) do 
    {
        // If it's self-harm, it's probably physics or suicide.
        case (_unit == _killer): { "You committed suicide, or were ARMA'd." };

        // If the killer doesn't exist or is on sideUnknown, it's probably an explosion. Or a ghost.
        case ((isNull _killer) || (side(group(_killer)) == sideUnknown)): { "You were killed by an exploding object." };

        // If everything is normal, relay all kill details to the player.
        default { format["You were killed by %1 from %2 metres away with %3 (%4), on team %5. You are on team %6.", name _killer, (round (_unit distance _killer)), _text, _projectile, side(group(_killer)), STMF_PlayerSide]; };
    };

    // Delay for player immersion
    sleep 15;

    // Output message to player
    player globalChat _message;
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
        DECLARE(_assignedTeam) = [_x getVariable ["hull3_gear_class", ""]] call hull3_unit_fnc_getAssignedTeam;
        if (_assignedTeam != "") then {
            _x assignTeam _assignedTeam;
        };
    } foreach units group player;
};
