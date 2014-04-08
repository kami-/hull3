#include "hull_macros.h"

hull_briefing_fnc_addNotes = {
    waitUntil {
        !isNull player;
    };
    [] call hull_briefing_fnc_addOrbat;
    [] call hull_briefing_fnc_addSideNotes;
};

hull_briefing_fnc_addOrbat = {
    private "_orbat";
    _orbat = "";
    {
        if (side player == side leader _x) then {
            _orbat = _orbat + format ['<marker name="%1">%2</marker> %3<br/>', _x getVariable "hull_marker_group", _x, name leader _x];
        };
    } foreach hull_marker_groups;
    player createDiaryRecord ["Diary", ["ORBAT", _orbat]];
};

hull_briefing_fnc_addSideNotes = {
    private "_briefingFile";
    call {
        if (side player == WEST) exitWith {_briefingFile = "hull\briefing\blufor.sqf"};
        if (side player == EAST) exitWith {_briefingFile = "hull\briefing\opfor.sqf"};
        if (side player == RESISTANCE) exitWith {_briefingFile = "hull\briefing\indfor.sqf"};
        if (side player == CIVILIAN) exitWith {_briefingFile = "hull\briefing\civilian.sqf"};
    };
    [] call compile preprocessFile _briefingFile;
};