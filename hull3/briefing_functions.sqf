#include "hull_macros.h"

#include "\userconfig\hull3\log\briefing.h"
#include "logbook.h"


hull_briefing_fnc_preInit = {
    [] call hull_briefing_fnc_addEventHandlers;
    DEBUG("hull.briefing","Briefing functions preInit finished.");
};

hull_briefing_fnc_addEventHandlers = {
    ["marker.group.created", hull_briefing_fnc_addNotes] call hull_event_fnc_addEventHandler;
};

hull_briefing_fnc_addNotes = {
    [] call compile preprocessFile ADDON_PATH(briefing\hull.sqf);
    DEBUG("hull.briefing","Added Hull to briefing notes.");
    [] call hull_briefing_fnc_addOrbat;
    [] call hull_briefing_fnc_addSideNotes;
};

hull_briefing_fnc_addOrbat = {
    private "_orbat";
    _orbat = "";
    {
        if (side player == side leader _x) then {
            DECLARE(_units) = units _x;
            _orbat = _orbat + format ['<marker name="%1">%2</marker><br/>', _x getVariable "hull_marker_group", _x];
            _orbat = _orbat + format ['    %1: %2',(_units select 0) getVariable "hull_gear_class", name (_units select 0)];
            for "_i" from 1 to (count _units) - 1 do {
                DECLARE(_unit) = _units select _i;
                _orbat = _orbat + format [' | %1: %2',_unit getVariable "hull_gear_class", name _unit];
            };
            _orbat = _orbat + '<br/>'
        };
    } foreach hull_marker_groups;
    player createDiaryRecord ["Diary", ["ORBAT", _orbat]];
    DEBUG("hull.briefing","Added ORBAT to briefing notes.");
};

hull_briefing_fnc_addSideNotes = {
    private "_briefingFile";
    call {
        if (side player == WEST) exitWith {_briefingFile = ["Briefing", "blufor"] call hull_config_fnc_getText};
        if (side player == EAST) exitWith {_briefingFile = ["Briefing", "opfor"] call hull_config_fnc_getText};
        if (side player == RESISTANCE) exitWith {_briefingFile = ["Briefing", "indfor"] call hull_config_fnc_getText};
        if (side player == CIVILIAN) exitWith {_briefingFile = ["Briefing", "civilian"] call hull_config_fnc_getText};
    };
    [] call compile preprocessFile _briefingFile;
    DEBUG("hull.briefing","Added Side notes to briefing notes.");
};
