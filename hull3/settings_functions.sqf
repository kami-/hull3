#include "hull_macros.h"

#include "\userconfig\hull3\log\settings.h"
#include "logbook.h"


hull_settings_fnc_preInit = {
    [] call hull_settings_fnc_addEventHandlers;
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
    };
};

hull_settings_fnc_setPlayerSettings = {
    player addRating (["General", "addRating"] call hull_config_fnc_getNumber);
    player setVariable ["BIS_noCoreConversations", ["General", "BIS_noCoreConversations"] call hull_config_fnc_getBool];
};

hull_settings_fnc_setModuleVariables = {
    if (isNil {hull_marker_isGroupEnabled}) then {hull_marker_isGroupEnabled = ["Marker", "isGroupEnabled"] call hull_config_fnc_getBool;};
    if (isNil {hull_marker_isFireTeamEnabled}) then {hull_marker_isFireTeamEnabled = ["Marker", "isFireTeamEnabled"] call hull_config_fnc_getBool;};
};
