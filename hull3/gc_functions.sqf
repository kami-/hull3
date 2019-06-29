#include "hull3_macros.h"

#include "\userconfig\hull3\log\gc.h"
#include "logbook.h"

hull3_gc_fnc_preInit = {
    hull3_gc_isEnabled = ["GarbageCollector", "isEnabled"] call hull3_config_fnc_getBool;
    hull3_gc_canRemoveCorpses = ["GarbageCollector", "canRemoveCorpses"] call hull3_config_fnc_getBool;
    hull3_gc_canRemoveWrecks = ["GarbageCollector", "canRemoveWrecks"] call hull3_config_fnc_getBool;

    hull3_gc_panicCps = ["GarbageCollector", "panicCps"] call hull3_config_fnc_getNumber;

    hull3_gc_corpseLimit = ["GarbageCollector", "corpseLimit"] call hull3_config_fnc_getNumber;
    hull3_gc_panicCorpseLimit = ["GarbageCollector", "panicCorpseLimit"] call hull3_config_fnc_getNumber;

    hull3_gc_wreckLimit = ["GarbageCollector", "wreckLimit"] call hull3_config_fnc_getNumber;
    hull3_gc_panicWreckLimit = ["GarbageCollector", "panicWreckLimit"] call hull3_config_fnc_getNumber;

    hull3_gc_checkDelay = ["GarbageCollector", "checkDelay"] call hull3_config_fnc_getNumber;

    hull3_gc_currentCorpseLimit = hull3_gc_corpseLimit;
    hull3_gc_currentWreckLimit = hull3_gc_wreckLimit;
};

hull3_gc_fnc_start = {
    [
        {
            {
                _x setVariable ["hull3_gc_doNotRemove", true, false];
            } foreach playableUnits;
            {
                _x setVariable ["hull3_gc_doNotRemove", true, false];
            } foreach allDead;
            hull3_gc_canRemoveCorpses = true;
            hull3_gc_canRemoveWrecks = true;
            hull3_gc_isEnabled = true;
            hull3_gc_deadUnits = [];
            hull3_gc_deadVehicles = [];
            hull3_gc_eh_sortDead = addMissionEventHandler ["EntityKilled",{call hull3_gc_fnc_sortDead}];
            call hull3_gc_fnc_monitor;
        },
        [],
        5
    ] call CBA_fnc_waitAndExecute;
};

hull3_gc_fnc_stop = {
    removeMissionEventHandler ["EntityKilled", hull3_gc_eh_sortDead];
    hull3_gc_canRemoveCorpses = false;
    hull3_gc_canRemoveWrecks = false;
    hull3_gc_isEnabled = false;
    hull3_gc_deadUnits = nil;
    hull3_gc_deadVehicles = nil;
};

hull3_gc_fnc_monitor = {
    [
        {
            if (hull3_gc_isEnabled) then {
                call hull3_gc_fnc_adjustConfig;
                call hull3_gc_fnc_monitorDead;
            };
        },
        hull3_gc_checkDelay
    ] call CBA_fnc_addPerFrameHandler;
};

hull3_gc_fnc_adjustConfig = {
    if !(missionNamespace getVariable ["ark_asm_enabled", false]) exitWith {};
    private _currentCps = [] call ark_asm_fnc_getCurrentCps;
    if (_currentCps <= hull3_gc_panicCps) then {
        hull3_gc_currentCorpseLimit = hull3_gc_panicCorpseLimit;
        hull3_gc_currentWreckLimit = hull3_gc_panicWreckLimit;
    } else {
        hull3_gc_currentCorpseLimit = hull3_gc_corpseLimit;
        hull3_gc_currentWreckLimit = hull3_gc_wreckLimit;
    };
};

hull3_gc_fnc_sortDead = {
    params ["_killed"];
    if (isPlayer _killed || { _killed getVariable ["hull3_gc_doNotRemove", false] } ) exitWith {};

    if (_killed isKindOf "CAManBase") then {
         hull3_gc_deadUnits pushBack _killed;
    } else {
        hull3_gc_deadVehicles pushBack _killed;
    };
};

hull3_gc_fnc_monitorDead = {
    if (hull3_gc_canRemoveCorpses) then {
        DEBUG("hull3.gc","Starting next corpse GC check.");
        private _removedCount = 0;
        private _deadAmount = count hull3_gc_deadUnits;
        private _limitReached = _deadAmount > hull3_gc_currentCorpseLimit;
        if (_limitReached) then {
            TRACE("hull3.gc",FMT_2("Limit '%1' reached, removing unit '%2'.",_limit,_x));
            for "_i" from 0 to (_deadAmount - hull3_gc_currentCorpseLimit) do {
                private _unit = hull3_gc_deadUnits #0;
                _unit call ark_gc_fnc_cleanDead;
                hull3_gc_deadUnits deleteAt 0;
                _removedCount = _removedCount + 1;
            };
        };
        DEBUG("hull3.gc",FMT_1("Removed '%1' units.",_removedCount));
    };

    if (hull3_gc_canRemoveWrecks) then {
        DEBUG("hull3.gc","Starting next wreck GC check.");
        private _removedCount = 0;
        private _wreckAmount = count hull3_gc_deadVehicles;
        private _limitReached = _wreckAmount > hull3_gc_currentWreckLimit;
        if (_limitReached) then {
            TRACE("hull3.gc",FMT_2("Limit '%1' reached, removing unit '%2'.",_limit,_x));
            for "_i" from 0 to (_wreckAmount - hull3_gc_currentWreckLimit) do {
                private _veh = hull3_gc_deadVehicles #0;
                _veh call ark_gc_fnc_cleanDead;
                hull3_gc_deadVehicles deleteAt 0;
                _removedCount = _removedCount + 1;
            };
        };
        DEBUG("hull3.gc",FMT_1("Removed '%1' wrecks.",_removedCount));
    };
};

ark_gc_fnc_cleanDead = {
    params ["_obj"];

    if (_obj isKindOf "CAManBase") then {
        if (isNull objectParent _obj) then {
            deleteVehicle _obj;
        } else {
            objectParent _obj deleteVehicleCrew _obj;
        };
    } else {
        deleteVehicle _obj;
    };
};