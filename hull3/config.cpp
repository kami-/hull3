#include "hull3_macros.h"

class CfgPatches {
    class Hull3 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"CBA_MAIN"};
        author[] = {"Kami", "soju", "Thunder", "Ark"};
        authorUrl = "https://github.com/kami-";
    };
};

class Extended_PreInit_EventHandlers {
    class Hull3 {
        init = "[] call compile preProcessFileLineNumbers 'x\ark\addons\hull3\hull3_preinit.sqf';";
    };
};

class Extended_PostInit_EventHandlers {
    class Hull3 {
        init = "[] call compile preProcessFileLineNumbers 'x\ark\addons\hull3\hull3_postinit.sqf';";
    };
};

class CfgVehicles {
    class Logic;

    class Hull3_DisableGroupMarkers_Module : Logic {
        displayName = "Hull3: Disable Group Markers";
        icon = ADDON_PATH(resources\hull3_module.paa);
        vehicleClass = "Modules";
        class Eventhandlers {
            init = "hull3_marker_isGroupEnabled = false;";
        };
    };

    class Hull3_DisableFireTeamMarkers_Module : Logic {
        displayName = "Hull3: Disable Fire Team Member Markers";
        icon = ADDON_PATH(resources\hull3_module.paa);
        vehicleClass = "Modules";
        class Eventhandlers {
            init = "hull3_marker_isFireTeamEnabled = false;";
        };
    };
};

class CfgRespawnTemplates {
    class Hull3_RespawnHandler {
        onPlayerRespawn = "hull3_unit_fnc_onPlayerRespawn";
    };
};

// Hull3
#include "hull3.h"