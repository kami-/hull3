#include "hull3_macros.h"

#include "\userconfig\hull3\log\settings.h"
#include "logbook.h"


hull3_settings_fnc_preInit = {
    [] call hull3_settings_fnc_addEventHandlers;
    DEBUG("hull3.settings","Settings functions preInit finished.");
};

hull3_settings_fnc_init = {
    [] call hull3_settings_fnc_setNonStandardGeneralSettings;
    [] call hull3_settings_fnc_setModuleVariables;
};

hull3_settings_fnc_addEventHandlers = {
    ["player.initialized", hull3_settings_fnc_setPlayerSettings] call hull3_event_fnc_addEventHandler;
};

hull3_settings_fnc_setNonStandardGeneralSettings = {
    if (!(["General", "enableSaving"] call hull3_config_fnc_getBool)) then {
        enableSaving [false, false];
        DEBUG("hull3.settings","Saving is disabled.");
    };
    if (["General", "disableRemoteSensors"] call hull3_config_fnc_getBool) then {
        disableRemoteSensors true;
        DEBUG("hull3.settings","RemoteSensors are disabled.");
    };
    if (!(["General", "enableEnvironment"] call hull3_config_fnc_getBool)) then {
        enableEnvironment [false, true];
        DEBUG("hull3.settings","Ambient animals are disabled.");
    };
};

hull3_settings_fnc_setPlayerSettings = {
    player addRating (["General", "addRating"] call hull3_config_fnc_getNumber);
    DEBUG("hull3.settings",FMT_2("Added '%1' rating to player. New rating is '%2'.",AS_ARRAY_2("General", "addRating") call hull3_config_fnc_getNumber,rating player));
    player setVariable ["BIS_noCoreConversations", ["General", "BIS_noCoreConversations"] call hull3_config_fnc_getBool];
    DEBUG("hull3.settings",FMT_1("Player variable 'BIS_noCoreConversations' is set to '%1'.",AS_ARRAY_2("General", "BIS_noCoreConversations") call hull3_config_fnc_getBool));
};

hull3_settings_fnc_setModuleVariables = {
    if (isNil {hull3_marker_isGroupEnabled}) then {
        hull3_marker_isGroupEnabled = ["Marker", "isGroupEnabled"] call hull3_config_fnc_getBool;
        DEBUG("hull3.settings.marker",FMT_1("Group marker module was not found. Setting Group Marker enabled from config to '%1'.",AS_ARRAY_2("Marker", "isGroupEnabled") call hull3_config_fnc_getBool));
    };
    if (isNil {hull3_marker_isFireTeamEnabled}) then {
        hull3_marker_isFireTeamEnabled = ["Marker", "isFireTeamEnabled"] call hull3_config_fnc_getBool;
        DEBUG("hull3.settings.marker",FMT_1("Fire Team Member marker module was not found. Setting Fire Team Member marker enabled from config to '%1'.",AS_ARRAY_2("Marker", "isFireTeamEnabled") call hull3_config_fnc_getBool));
    };
};
