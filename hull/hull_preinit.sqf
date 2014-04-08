#include "hull_macros.h"

[] call compile preProcessFileLineNumbers "hull\common_functions.sqf";
[] call compile preProcessFileLineNumbers "hull\unit_functions.sqf";
[] call compile preProcessFileLineNumbers "hull\acre_functions.sqf";
[] call compile preProcessFileLineNumbers "hull\gear_functions.sqf";
[] call compile preProcessFileLineNumbers "hull\marker_functions.sqf";
[] call compile preProcessFileLineNumbers "hull\briefing_functions.sqf";
[] call compile preProcessFileLineNumbers "hull\mission_functions.sqf";

[] call hull_acre_fnc_preInit;
[] call hull_marker_fnc_preInit;