#include "hull_macros.h"

#include "\userconfig\hull3\log\settings.h"
#include "logbook.h"


hull_settings_fnc_preInit = {
    [] call hull_settings_fnc_addEventHandlers;
    DEBUG("hull.settings","Settings functions preInit finished.");
};

hull_settings_fnc_init = {
    [] call hull_settings_fnc_setNonStandardGeneralSettings;
    [] call hull_settings_fnc_setModuleVariables;
};

hull_settings_fnc_addEventHandlers = {
    ["player.initialized", hull_settings_fnc_setPlayerSettings] call hull_event_fnc_addEventHandler;
};

hull_settings_fnc_setNonStandardGeneralSettings = {
    if (!(["General", "enableSaving"] call hull_config_fnc_getBool)) then {
        enableSaving [false, false];
        DEBUG("hull.settings","Saving is disabled.");
    };
};

hull_settings_fnc_setPlayerSettings = {
    player addRating (["General", "addRating"] call hull_config_fnc_getNumber);
    DEBUG("hull.settings",FMT_2("Added '%1' rating to player. New rating is '%2'.",AS_ARRAY_2("General", "addRating") call hull_config_fnc_getNumber,rating player));
    player setVariable ["BIS_noCoreConversations", ["General", "BIS_noCoreConversations"] call hull_config_fnc_getBool];
    DEBUG("hull.settings",FMT_1("Player variable 'BIS_noCoreConversations' is set to '%1'.",AS_ARRAY_2("General", "BIS_noCoreConversations") call hull_config_fnc_getBool));
};

hull_settings_fnc_setModuleVariables = {
    if (isNil {hull_marker_isGroupEnabled}) then {
        hull_marker_isGroupEnabled = ["Marker", "isGroupEnabled"] call hull_config_fnc_getBool;
        DEBUG("hull.settings",FMT_1("Group marker module was not found. Setting Group Marker enabled from config to '%1'.",AS_ARRAY_2("Marker", "isGroupEnabled") call hull_config_fnc_getBool));
    };
    if (isNil {hull_marker_isFireTeamEnabled}) then {
        hull_marker_isFireTeamEnabled = ["Marker", "isFireTeamEnabled"] call hull_config_fnc_getBool;
        DEBUG("hull.settings",FMT_1("Fire Team Member marker module was not found. Setting Fire Team Member marker enabled from config to '%1'.",AS_ARRAY_2("Marker", "isFireTeamEnabled") call hull_config_fnc_getBool));
    };
};
