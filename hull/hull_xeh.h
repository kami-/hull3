class Extended_PreInit_EventHandlers {
    hull_framework_preInit = "[] call compile preProcessFileLineNumbers 'hull\hull_preinit.sqf';";
};

class Extended_PostInit_EventHandlers {
    hull_framework_postInit = "[] call compile preProcessFileLineNumbers 'hull\hull_init.sqf';";
};
