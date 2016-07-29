#include "hull3_macros.h"

#include "\userconfig\hull3\log\gc.h"
#include "logbook.h"

#define GC_CAN_REMOVE(UNIT)                 (UNIT getVariable ["hull3_gc_canRemove", true])



hull3_gc_fnc_preInit = {
    hull3_gc_isEnabled = ["GarbageCollector", "isEnabled"] call hull3_config_fnc_getBool;
    hull3_gc_canRemoveCorpses = ["GarbageCollector", "canRemoveCorpses"] call hull3_config_fnc_getBool;
    hull3_gc_canRemoveWrecks = ["GarbageCollector", "canRemoveWrecks"] call hull3_config_fnc_getBool;
    hull3_gc_canRemoveGroups = ["GarbageCollector", "canRemoveGroups"] call hull3_config_fnc_getBool;
    hull3_gc_corpseLimit = ["GarbageCollector", "corpseLimit"] call hull3_config_fnc_getNumber;
    hull3_gc_corpseMaxTime = ["GarbageCollector", "corpseMaxTime"] call hull3_config_fnc_getNumber;
    hull3_gc_wreckLimit = ["GarbageCollector", "wreckLimit"] call hull3_config_fnc_getNumber;
    hull3_gc_wreckMaxTime = ["GarbageCollector", "wreckMaxTime"] call hull3_config_fnc_getNumber;
    hull3_gc_groupMaxTime = ["GarbageCollector", "groupMaxTime"] call hull3_config_fnc_getNumber;
    hull3_gc_checkDelay = ["GarbageCollector", "checkDelay"] call hull3_config_fnc_getNumber;
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
        [] call hull3_gc_fnc_monitorCorpses;
        [] call hull3_gc_fnc_monitorWrecks;
        [] call hull3_gc_fnc_monitorGroups;
        sleep hull3_gc_checkDelay;
    };
};

hull3_gc_fnc_monitorCorpses = {
    if (hull3_gc_canRemoveCorpses) then {
        DEBUG("hull3.gc","Starting next corpse GC check.");
        [hull3_gc_corpseLimit, hull3_gc_corpseMaxTime, {_x isKindOf "Man"}] call hull3_gc_fnc_tryRemovingUnits;
    };
};

hull3_gc_fnc_monitorWrecks = {
    if (hull3_gc_canRemoveWrecks) then {
        DEBUG("hull3.gc","Starting next wreck GC check.");
        [hull3_gc_wreckLimit, hull3_gc_wreckMaxTime, {!(_x isKindOf "Man")}] call hull3_gc_fnc_tryRemovingUnits;
    };
};

hull3_gc_fnc_tryRemovingUnits = {
    FUN_ARGS_3(_limit,_maxTime,_isKindOfFunc);

    DECLARE(_units) = [];
    FILTER_PUSH_ALL(_units,allDead,{GC_CAN_REMOVE(_x) && _isKindOfFunc});
    DEBUG("hull3.gc",FMT_1("'%1' dead units.",{GC_CAN_REMOVE(_x)} count _units));
    if ({GC_CAN_REMOVE(_x)} count _units > _limit) then {
        DEBUG("hull3.gc",FMT_1("Limit '%1' reached, starting to remove units.",_limit));
        DECLARE(_removeCount) = 0;
        {
            if (isNil {_x getVariable "hull3_gc_firstCheck"}) then {
                _x setVariable ["hull3_gc_firstCheck", time, false];
                TRACE("hull3.gc",FMT_2("Setting 'firstCheck' of unit '%1' to '%2'.",_x,time));
            };
            if ([_x, _maxTime] call hull3_gc_fnc_canRemoveUnit) then {
                TRACE("hull3.gc",FMT_1("Removing unit '%1'.",_x));
                deleteVehicle _x;
                INC(_removeCount);
            };
        } foreach _units;
        DEBUG("hull3.gc",FMT_1("Removed '%1' units.",_removeCount));
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