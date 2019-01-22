#include "hull3_macros.h"

#include "\userconfig\hull3\log\gc.h"
#include "logbook.h"

#define GC_CAN_REMOVE(UNIT)                 (UNIT getVariable ["hull3_gc_canRemove", true])



hull3_gc_fnc_preInit = {
    hull3_gc_isEnabled = ["GarbageCollector", "isEnabled"] call hull3_config_fnc_getBool;
    hull3_gc_canRemoveCorpses = ["GarbageCollector", "canRemoveCorpses"] call hull3_config_fnc_getBool;
    hull3_gc_canRemoveWrecks = ["GarbageCollector", "canRemoveWrecks"] call hull3_config_fnc_getBool;
    hull3_gc_canRemoveGroups = ["GarbageCollector", "canRemoveGroups"] call hull3_config_fnc_getBool;

    hull3_gc_panicCps = ["GarbageCollector", "panicCps"] call hull3_config_fnc_getNumber;

    hull3_gc_corpseLimit = ["GarbageCollector", "corpseLimit"] call hull3_config_fnc_getNumber;
    hull3_gc_panicCorpseLimit = ["GarbageCollector", "panicCorpseLimit"] call hull3_config_fnc_getNumber;
    hull3_gc_corpseMaxTime = ["GarbageCollector", "corpseMaxTime"] call hull3_config_fnc_getNumber;
    hull3_gc_panicCorpseMaxTime = ["GarbageCollector", "panicCorpseMaxTime"] call hull3_config_fnc_getNumber;

    hull3_gc_wreckLimit = ["GarbageCollector", "wreckLimit"] call hull3_config_fnc_getNumber;
    hull3_gc_panicWreckLimit = ["GarbageCollector", "panicWreckLimit"] call hull3_config_fnc_getNumber;
    hull3_gc_wreckMaxTime = ["GarbageCollector", "wreckMaxTime"] call hull3_config_fnc_getNumber;
    hull3_gc_panicWreckMaxTime = ["GarbageCollector", "panicWreckMaxTime"] call hull3_config_fnc_getNumber;

    hull3_gc_groupMaxTime = ["GarbageCollector", "groupMaxTime"] call hull3_config_fnc_getNumber;
    hull3_gc_checkDelay = ["GarbageCollector", "checkDelay"] call hull3_config_fnc_getNumber;

    hull3_gc_currentCorpseLimit = hull3_gc_corpseLimit;
    hull3_gc_currentCorpseMaxTime = hull3_gc_corpseMaxTime;
    hull3_gc_currentWreckLimit = hull3_gc_wreckLimit;
    hull3_gc_currentWreckMaxTime = hull3_gc_wreckMaxTime;
};

hull3_gc_fnc_start = {
    sleep 1;
    {
        _x setVariable ["hull3_gc_canRemove", false];
    } foreach playableUnits;
    {
        _x setVariable ["hull3_gc_canRemove", false];
    } foreach allDead;
    hull3_gc_canRemoveCorpses = true;
    hull3_gc_canRemoveWrecks = true;
    hull3_gc_canRemoveGroups = true;
    hull3_gc_isEnabled = true;
    [] spawn hull3_gc_fnc_monitor;
};

hull3_gc_fnc_stop = {
    hull3_gc_canRemoveCorpses = false;
    hull3_gc_canRemoveWrecks = false;
    hull3_gc_canRemoveGroups = false;
    hull3_gc_isEnabled = false;
};

hull3_gc_fnc_monitor = {
    while {hull3_gc_isEnabled} do {
        [] call hull3_gc_fnc_adjustConfig;
        [] call hull3_gc_fnc_monitorCorpses;
        [] call hull3_gc_fnc_monitorWrecks;
        [] call hull3_gc_fnc_monitorGroups;
        sleep hull3_gc_checkDelay;
    };
};

hull3_gc_fnc_adjustConfig = {
    if !(missionNamespace getVariable ["ark_asm_enabled", false]) exitWith {};
    private _currentCps = [] call ark_asm_fnc_getCurrentCps;
    if (_currentCps <= hull3_gc_panicCps) then {
        hull3_gc_currentCorpseLimit = hull3_gc_panicCorpseLimit;
        hull3_gc_currentCorpseMaxTime = hull3_gc_panicCorpseMaxTime;
        hull3_gc_currentWreckLimit = hull3_gc_panicWreckLimit;
        hull3_gc_currentWreckMaxTime = hull3_gc_panicWreckMaxTime;
    } else {
        hull3_gc_currentCorpseLimit = hull3_gc_corpseLimit;
        hull3_gc_currentCorpseMaxTime = hull3_gc_corpseMaxTime;
        hull3_gc_currentWreckLimit = hull3_gc_wreckLimit;
        hull3_gc_currentWreckMaxTime = hull3_gc_wreckMaxTime;
    };
};

hull3_gc_fnc_monitorCorpses = {
    if (hull3_gc_canRemoveCorpses) then {
        DEBUG("hull3.gc","Starting next corpse GC check.");
        [hull3_gc_currentCorpseLimit, hull3_gc_currentCorpseMaxTime, {_x isKindOf "Man"}] call hull3_gc_fnc_tryRemovingUnits;
    };
};

hull3_gc_fnc_monitorWrecks = {
    if (hull3_gc_canRemoveWrecks) then {
        DEBUG("hull3.gc","Starting next wreck GC check.");
        [hull3_gc_currentWreckLimit, hull3_gc_currentWreckMaxTime, {!(_x isKindOf "Man")}] call hull3_gc_fnc_tryRemovingUnits;
    };
};

hull3_gc_fnc_tryRemovingUnits = {
    params ["_limit", "_maxTime", "_isKindOfFunc"];

    private _units = allDead select { GC_CAN_REMOVE(_x) && _isKindOfFunc };
    DEBUG("hull3.gc",FMT_1("'%1' dead units.",count _units));
    private _limitReached = count _units > _limit;
    private _removedCount = 0;
    {
        if (isNil {_x getVariable "hull3_gc_firstCheck"}) then {
            _x setVariable ["hull3_gc_firstCheck", time, false];
            TRACE("hull3.gc",FMT_2("Setting 'firstCheck' of unit '%1' to '%2'.",_x,time));
        };
        if (_limitReached && { [_x, _maxTime] call hull3_gc_fnc_canRemoveUnit }) then {
            TRACE("hull3.gc",FMT_3("Limit '%1' and max time '%2' reached, removing unit '%3'.",_limit,_maxTime,_x));
            if (isNull objectParent _x) then {
                deleteVehicle _x;
            } else {
                objectParent _x deleteVehicleCrew _x;
            };
            _removedCount = _removedCount + 1;
        };
    } foreach _units;
    DEBUG("hull3.gc",FMT_2("Removed '%1' units for reaching max time '%2'.",_removedCount,_maxTime));

    private _existingUnits = _units select { !isNil {_x} && {!isNull _x} };
    if (count _existingUnits > _limit) then {
        DEBUG("hull3.gc",FMT_1("Limit '%1' reached, starting to remove '%2' units.",_limit,count _existingUnits - _limit));
        _removedCount = 0;
        for "_i" from 0 to (count _existingUnits - _limit - 1) do {
            private _selectedExistingUnit = _existingUnits select _i;
            TRACE("hull3.gc",FMT_1("Removing unit '%1'.",_selectedExistingUnit));
            if (isNull objectParent _selectedExistingUnit) then {
                deleteVehicle _selectedExistingUnit;
            } else {
                objectParent _selectedExistingUnit deleteVehicleCrew _selectedExistingUnit;
            };
            deleteVehicle (_existingUnits select _i);
            _removedCount = _removedCount + 1;
        };
        DEBUG("hull3.gc",FMT_1("Removed '%1' units.",_removedCount));
    };
};

hull3_gc_fnc_canRemoveUnit = {
    FUN_ARGS_2(_unit,_maxTime);

    private ["_canRemove", "_timeSinceFirstCheck"];
    _canRemove = GC_CAN_REMOVE(_unit);
    _timePassed = time - (_unit getVariable ["hull3_gc_firstCheck", time]);

    _canRemove && {_timePassed >= _maxTime};
};

hull3_gc_fnc_monitorGroups = {
    if (hull3_gc_canRemoveGroups) then {
        private ["_removeCount", "_remoteGroups"];
        DEBUG("hull3.gc","Starting next group GC check.");
        _remoteGroups = [];
        _removeCount = 0;
        {
            if (count units _x == 0) then {
                call {
                    if !(_x getVariable ["hull3_gc_isMarked", false]) exitWith {
                        _x setVariable ["hull3_gc_isMarked", true];
                    };

                    if (!local _x) then {
                        PUSH(_remoteGroups,_x);
                    };
                    INC(_removeCount);
                    if (!isNull _x) then {
                        deleteGroup _x;
                    };
                };
            } else {
                _x setVariable ["hull3_gc_isMarked", false];
            };
        } foreach allGroups;
        DEBUG("hull3.gc",FMT_2("Removing total '%1' groups of which '%2' are remote.",_removeCount,count _remoteGroups));
        [_remoteGroups] call hull3_gc_fnc_removeRemoteGroups;
    };
};

hull3_gc_fnc_removeRemoteGroups = {
    FUN_ARGS_1(_groups);

    [-1, {
        {
            if (!isNull _x && {local _x}) then {
                deleteGroup _x;
            };
        } foreach _this;
    }, _groups] call CBA_fnc_globalExecute;
};