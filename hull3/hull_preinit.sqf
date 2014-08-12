#include "hull_macros.h"

#include "\userconfig\hull\log\preinit.h"
#include "logbook.h"


hull_isInitialized = false;

[] call compile preProcessFileLineNumbers ADDON_PATH(config_functions.sqf);
hull_isEnabled = ["isEnabled"] call hull_config_fnc_getBool;
hull_isEnabled = hull_isEnabled && {!isClass (missionConfigFile >> "Hull_Script_Version")};

if (hull_isEnabled) then {
    [] call compile preProcessFileLineNumbers ADDON_PATH(event_functions.sqf);
    [] call hull_event_fnc_init;
    [] call compile preProcessFileLineNumbers ADDON_PATH(settings_functions.sqf);
    [] call compile preProcessFileLineNumbers ADDON_PATH(common_functions.sqf);
    [] call compile preProcessFileLineNumbers ADDON_PATH(unit_functions.sqf);
    [] call compile preProcessFileLineNumbers ADDON_PATH(acre_functions.sqf);
    [] call compile preProcessFileLineNumbers ADDON_PATH(gear_functions.sqf);
    [] call compile preProcessFileLineNumbers ADDON_PATH(marker_functions.sqf);
    [] call compile preProcessFileLineNumbers ADDON_PATH(briefing_functions.sqf);
    [] call compile preProcessFileLineNumbers ADDON_PATH(mission_functions.sqf);

    hull_isInitialized = true;
    INFO("hull",FMT_1("Hull version '%1' has been successfully initialized.",HULL_VERSION));

    [] call hull_settings_fnc_preInit;
    [] call hull_mission_fnc_preInit;
    [] call hull_marker_fnc_preInit;
    [] call hull_gear_fnc_preInit;
    [] call hull_briefing_fnc_preInit;
    [] call hull_acre_fnc_preInit;
} else {
    if (isClass (missionConfigFile >> "Hull_Script_Version")) then {
        INFO("hull",FMT_1("Older script version of Hull was detected. Addonized Hull version '%1' was disabled.",HULL_VERSION));
    } else {
        INFO("hull",FMT_1("Hull version '%1' was disabled.",HULL_VERSION));
    };
};