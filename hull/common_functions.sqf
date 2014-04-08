#include "hull_macros.h"

hull_common_fnc_logOnServer = {
    FUN_ARGS_1(_message);

    if (isDedicated) then {
        [0, {diag_log _this}, _message] call CBA_globalExecute;
    };
    if (isServer) then {
        diag_log _message;
    };
};

hull_common_fnc_missionSettings = {
    // Enable ACE terrain grid change
    //ace_settings_enable_tg_change = true;
    // Enable ACE view distance change
    ace_settings_enable_vd_change = true;
    // Disable dynamic shouting and speaking for AI
    ace_sys_aitalk_talkforplayer = false;
    // Disables weapon removal for pilots
    ace_sys_eject_fnc_weaponCheckEnabled = {false};
    // Disables rotor damage
    ace_sys_rotoreffects_fnc_rocko_manshred = {};
    // Disables ACE group markers
    ACE_sys_tracking_MarkersEnabled = false;
    // Disables ACE group markers
    ACE_sys_tracking_markers_enabled_override = true;
    // Removes default ACE medical gear given at start of mission
    player setVariable ["ace_sys_wounds_no_medical_gear", true];
    // Disables AI talking
    player setVariable ["BIS_noCoreConversations", true];
    // Disables game saving
    enableSaving [false, false];
    // Sets view distance limit
    missionNamespace setVariable ["ace_viewdistance_limit", 8000];
};