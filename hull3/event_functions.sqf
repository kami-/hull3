#include "hull_macros.h"

#define ADDON_NS                        hull
#define ADD_ADDON_NS_TO_ID(M,ID)        M##ID
#define FNC_ADD_EVENT_HANDLER           ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_addEventHandler)
#define FNC_REMOVE_EVENT_HANDLER        ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_removeEventHandler)
#define FNC_ADD_EVENT                   ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_addEvent)
#define FNC_EMIT_EVENT                  ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_emitEvent)
#define FNC_FIND_EVENT                  ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_findEvent)
#define FNC_ADD_ALL_EVENTS              ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_addAllEvents)
#define FNC_INIT                        ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_init)
#define EVENTS_ARRAY                    ADD_ADDON_NS_TO_ID(ADDON_NS,_event_events)

FNC_ADD_EVENT_HANDLER = {
    FUN_ARGS_2(_eventName,_code);

    private ["_eventIndex", "_handlerId"];
    _eventIndex = [_eventName] call FNC_FIND_EVENT;
    _handlerId = -1;
    if (_eventIndex != -1) then {
        DECLARE(_handlerArray) = EVENTS_ARRAY select _eventIndex select 1;
        _handlerId = count _handlerArray;
        PUSH(_handlerArray,_code);
    };

    _handlerId;
};

FNC_REMOVE_EVENT_HANDLER = {
    FUN_ARGS_2(_eventName,_handlerId);

    private ["_eventIndex", "_handlerArray"];
    _eventIndex = [_eventName] call FNC_FIND_EVENT;
    _handlerArray = EVENTS_ARRAY select _eventIndex select 1;
    if (_eventIndex != -1 && {_handlerId >= 0} && {count _handlerArray >= _handlerId + 1}) then {
        _handlerArray set [_handlerId, {}];
    };
};

FNC_ADD_EVENT = {
    FUN_ARGS_1(_eventName);

    if ([_eventName] call FNC_FIND_EVENT == -1) then {
        PUSH(EVENTS_ARRAY,AS_ARRAY_2(_eventName,[]));
    };
};

FNC_EMIT_EVENT = {
    FUN_ARGS_2(_eventName,_arguments);

    DECLARE(_eventIndex) = [_eventName] call FNC_FIND_EVENT;
    if (_eventIndex != -1) then {
        {
            _arguments call _x;
        } foreach (EVENTS_ARRAY select _eventIndex select 1);
    };
};

FNC_FIND_EVENT = {
    FUN_ARGS_1(_eventName);

    DECLARE(_eventIndex) = -1;
    {
        if (_x select 0 == _eventName) exitWith {_eventIndex = _forEachIndex};
    } foreach EVENTS_ARRAY;

    _eventIndex;
};

FNC_ADD_ALL_EVENTS = {
    ["player.initialized"] call FNC_ADD_EVENT;
    
    ["marker.group.created"] call FNC_ADD_EVENT;
    
    ["acre.initialized"] call FNC_ADD_EVENT;
    
    ["gear.assigned"] call FNC_ADD_EVENT;
    ["gear.radio.assigned"] call FNC_ADD_EVENT;
};

FNC_INIT = {
    EVENTS_ARRAY = [];
    [] call FNC_ADD_ALL_EVENTS;
};
