#include "hull3_macros.h"

class CfgPatches {
    class Hull3 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"CBA_MAIN"};
        author = "Kami";
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

class CfgFactionClasses {
    class NO_CATEGORY;
    class Hull3 : NO_CATEGORY {
        displayName = "Hull3";
    };
};

class CfgVehicles {
    class Logic;
    class Module_F : Logic {
        class ModuleDescription {};
    };

    class Hull3_DisableGroupMarkers_Module : Module_F {
        scope = 2;
        displayName = "Disable Group Markers";
        icon = ADDON_PATH(resources\hull3_module.paa)
        category = "Hull3";
        function = "hull3_marker_fnc_disableGroupMarkers";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        is3DEN = 0;

        class Arguments {};

        class ModuleDescription : ModuleDescription {
            description = "Disable group markers for all players";
            sync[] = {};
        };
    };

    class Hull3_DisableFireTeamMarkers_Module : Module_F {
        scope = 2;
        displayName = "Disable Fire Team Member Markers";
        icon = ADDON_PATH(resources\hull3_module.paa)
        category = "Hull3";
        function = "hull3_marker_fnc_disableFireTeamMarkers";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        is3DEN = 0;

        class Arguments {};

        class ModuleDescription : ModuleDescription {
            description = "Disable fire team markers for all players";
            sync[] = {};
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