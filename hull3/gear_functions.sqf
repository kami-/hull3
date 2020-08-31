#include "hull3_macros.h"

#include "\userconfig\hull3\log\gear.h"
#include "logbook.h"


#define INFIX_FUNC(FUNC)                        {(_this select 0) FUNC (_this select 1)}
#define ASSIGN_UNIFORM_ITEM_FUNC                INFIX_FUNC(addItemToUniform)
#define ASSIGN_VEST_ITEM_FUNC                   INFIX_FUNC(addItemToVest)
#define ASSIGN_BACKPACK_ITEM_FUNC               INFIX_FUNC(addItemToBackpack)
#define ASSIGN_PRIMARY_WEAPON_FUNC              INFIX_FUNC(addWeapon)
#define ASSIGN_PRIMARY_WEAPON_ITEM_FUNC         INFIX_FUNC(addPrimaryWeaponItem)
#define ASSIGN_SECONDARY_WEAPON_FUNC            INFIX_FUNC(addWeapon)
#define ASSIGN_SECONDARY_WEAPON_ITEM_FUNC       INFIX_FUNC(addSecondaryWeaponItem)
#define ASSIGN_HANDGUN_WEAPON_FUNC              INFIX_FUNC(addWeapon)
#define ASSIGN_HANDGUN_ITEM_FUNC                INFIX_FUNC(addHandgunItem)
#define ASSIGN_LINK_ITEM_FUNC                   INFIX_FUNC(linkItem)
#define CAN_ASSIGN_UNIFORM_ITEM_FUNC            INFIX_FUNC(canAddItemToUniform)
#define CAN_ASSIGN_VEST_ITEM_FUNC               INFIX_FUNC(canAddItemToVest)
#define CAN_ASSIGN_BACKPACK_ITEM_FUNC           INFIX_FUNC(canAddItemToBackpack)
#define CAN_ASSIGN_PRIMARY_WEAPON_FUNC          {primaryWeapon (_this select 0) == ""}
#define CAN_ASSIGN_PRIMARY_WEAPON_ITEM_FUNC     {!((_this select 1) in primaryWeaponItems (_this select 0))}
#define CAN_ASSIGN_SECONDARY_WEAPON_FUNC        {secondaryWeapon (_this select 0) == ""}
#define CAN_ASSIGN_SECONDARY_WEAPON_ITEM_FUNC   {!((_this select 1) in secondaryWeaponItems (_this select 0))}
#define CAN_ASSIGN_HANDGUN_WEAPON_FUNC          {handgunWeapon (_this select 0) == ""}
#define CAN_ASSIGN_HANDGUN_ITEM_FUNC            {!((_this select 1) in handgunItems (_this select 0))}
#define CAN_LINK_ITEM_FUNC                      {true}



hull3_gear_fnc_preInit = {
    hull3_gear_unitBaseClass = [TYPE_CLASS_GEAR, "unitBaseClass"] call hull3_config_fnc_getText;
    hull3_gear_vehicleBaseClass = [TYPE_CLASS_GEAR, "vehicleBaseClass"] call hull3_config_fnc_getText;
    [] call hull3_gear_fnc_addEventHandlers;
    DEBUG("hull3.gear","Gear functions preInit finished.");
};

hull3_gear_fnc_addEventHandlers = {
};

hull3_gear_fnc_assign = {
    FUN_ARGS_4(_unit,_factionEntry,_gearEntry,_uniformEntry);

    private ["_faction", "_gearTemplate", "_gearClass"];
    [_unit, _factionEntry] call hull3_gear_fnc_validateFaction;
    _faction = [_unit, _factionEntry] call hull3_gear_fnc_getFaction;
    _gearTemplate = [_unit, _factionEntry, _gearEntry] call hull3_gear_fnc_getTemplate;
    _gearClass = [_unit, _gearEntry, _gearTemplate] call hull3_gear_fnc_getClass;
    if (_unit isKindOf "CAManBase") then {
        DECLARE(_uniformTemplate) = [_unit, _factionEntry, _uniformEntry] call hull3_uniform_fnc_getTemplate;
        [_unit, _faction, _gearTemplate, _uniformTemplate, _gearClass] call hull3_gear_fnc_assignUnit;
    } else {
        [_unit, _gearTemplate, _gearClass] call hull3_gear_fnc_assignVehicle;
    };
    _unit setVariable ["hull3_gear_isAssgined", true, true];
    ["gear.assigned", [_unit]] call hull3_event_fnc_emitEvent;
};

hull3_gear_fnc_assignUnit = {
    FUN_ARGS_5(_unit,_faction,_gearTemplate,_uniformTemplate,_gearClass);

    DEBUG("hull3.gear.assign",FMT_4("Set faction to '%1', gear template to '%2', uniform template to '%3' and gear class to '%4'.",_faction,_gearTemplate,_uniformTemplate,_gearClass));
    [_unit, _uniformTemplate] call hull3_uniform_fnc_assignUniformInit;
    [_unit, _gearTemplate, _uniformTemplate, _gearClass] call hull3_uniform_fnc_assignUniformTemplate;
    [_unit, _faction, _gearTemplate, _gearClass] call hull3_gear_fnc_assignUnitInit;
    [_unit, _gearTemplate, _gearClass] call hull3_gear_fnc_assignUnitTemplate;
    [_unit] call hull3_gear_fnc_tryRemoveNightGear;
};

hull3_gear_fnc_assignVehicle = {
    FUN_ARGS_3(_unit,_gearTemplate,_gearClass);

    [_unit, _gearTemplate, _gearClass] call hull3_gear_fnc_assignVehicleInit;
    [_unit, _gearTemplate, _gearClass] call hull3_gear_fnc_assignVehicleTemplate;

    if (["Logistics", "enableMedicalCrates"] call hull3_config_fnc_getBool) then {
        [_unit] call hull3_gear_fnc_assignVehicleCrates;
        DEBUG("hull3.settings","Medical crates are enabled.");
    };
};

hull3_gear_fnc_assignUnitInit = {
    FUN_ARGS_4(_unit,_faction,_template,_class);

    _unit setVariable ["hull3_faction", _faction, true];
    _unit setVariable ["hull3_gear_class", _class, true];
    _unit setVariable ["hull3_gear_template", _template, true];
    removeAllAssignedItems _unit;
    removeAllPrimaryWeaponItems _unit;
    removeAllHandgunItems _unit;
    removeAllWeapons _unit;
    removeAllItems _unit;
    DEBUG("hull3.gear.assign",FMT_1("Initialized unit '%1' gear.",_unit));
};

hull3_gear_fnc_assignVehicleInit = {
    FUN_ARGS_1(_vehicle);

    clearMagazineCargoGlobal _vehicle;
    clearWeaponCargoGlobal _vehicle;
    clearItemCargoGlobal _vehicle;
    clearBackpackCargoGlobal _vehicle;
    DEBUG("hull3.gear.assign",FMT_1("Initialized vehicle '%1' gear.",_vehicle));
};

hull3_gear_fnc_validateFaction = {
    FUN_ARGS_2(_unit,_factionEntry);

    if (count _factionEntry > 0 && {!isClass ([FACTION_CONFIG, _factionEntry select 0] call hull3_config_fnc_getConfig)}) then {
        WARN("hull3.gear.assign",FMT_2("No faction found with name '%1' for unit '%2'!",_factionEntry select 0,_unit));
    };
};

hull3_gear_fnc_getFaction = {
    FUN_ARGS_2(_unit,_factionEntry);

    private _faction = DEFAULT_FACTION_NAME;
    if (count _factionEntry > 0 && {isClass ([FACTION_CONFIG, _factionEntry select 0] call hull3_config_fnc_getConfig)}) then {
        _faction = _factionEntry select 0;
    };

    _faction;
};

hull3_gear_fnc_getClass = {
    FUN_ARGS_3(_unit,_gearEntry,_gearTemplate);

    DECLARE(_gearClass) = hull3_gear_unitBaseClass;
    if (count _gearEntry > 0) then {
        if (isClass ([TYPE_CLASS_GEAR, _gearTemplate, _gearEntry select 0] call hull3_config_fnc_getConfig)) then {
            _gearClass = _gearEntry select 0;
        } else {
            WARN("hull3.gear.assign",FMT_3("No gear class found with name '%1' in gear template '%2' for unit '%3'!",_gearEntry select 1,_gearTemplate,_unit));
        };
    };

    _gearClass;
};

hull3_gear_fnc_getTemplate = {
    FUN_ARGS_3(_unit,_factionEntry,_gearEntry);

    DECLARE(_gearTemplate) = DEFAULT_TEMPLATE_NAME;
    if (count _gearEntry > 1) then {
        if (isClass ([TYPE_CLASS_GEAR, _gearEntry select 1] call hull3_config_fnc_getConfig)) then {
            _gearTemplate = _gearEntry select 1;
        } else {
            WARN("hull3.gear.assign",FMT_2("No gear template found with name '%1' for unit '%2'!",_gearEntry select 1,_unit));
        };
    } else {
        DECLARE(_faction) = if (count _factionEntry > 0) then { _factionEntry select 0 } else { faction _unit };
        _gearTemplate = [FACTION_CONFIG, _faction, TYPE_FIELD_GEAR] call hull3_config_fnc_getText;
    };

    _gearTemplate;
};

hull3_gear_fnc_assignUnitTemplate = {
    FUN_ARGS_3(_unit,_template,_class);

    DECLARE(_assignables) = [
        ["primaryWeapon",           CONFIG_TYPE_TEXT,       "primary weapon",           ASSIGN_PRIMARY_WEAPON_FUNC,         CAN_ASSIGN_PRIMARY_WEAPON_FUNC,         hull3_gear_fnc_assignSingleItem],
        ["primaryWeaponItems",      CONFIG_TYPE_ARRAY,      "primary weapon items",     ASSIGN_PRIMARY_WEAPON_ITEM_FUNC,    CAN_ASSIGN_PRIMARY_WEAPON_ITEM_FUNC,    hull3_gear_fnc_assignSingleItemArray],
        ["secondaryWeapon",         CONFIG_TYPE_TEXT,       "secondary weapon",         ASSIGN_SECONDARY_WEAPON_FUNC,       CAN_ASSIGN_SECONDARY_WEAPON_FUNC,       hull3_gear_fnc_assignSingleItem],
        ["secondaryWeaponItems",    CONFIG_TYPE_ARRAY,      "secondary weapon items",   ASSIGN_SECONDARY_WEAPON_ITEM_FUNC,  CAN_ASSIGN_SECONDARY_WEAPON_ITEM_FUNC,  hull3_gear_fnc_assignSingleItemArray],
        ["handgunWeapon",           CONFIG_TYPE_TEXT,       "handgun weapon",           ASSIGN_HANDGUN_WEAPON_FUNC,         CAN_ASSIGN_HANDGUN_WEAPON_FUNC,         hull3_gear_fnc_assignSingleItem],
        ["handgunItems",            CONFIG_TYPE_ARRAY,      "handgun items",            ASSIGN_HANDGUN_ITEM_FUNC,           CAN_ASSIGN_HANDGUN_ITEM_FUNC,           hull3_gear_fnc_assignSingleItemArray],
        ["uniformMagazines",        CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignMultiItemArray],
        ["vestMagazines",           CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignMultiItemArray],
        ["backpackMagazines",       CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignMultiItemArray],
        ["uniformWeapons",          CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignSingleItemArray],
        ["vestWeapons",             CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignSingleItemArray],
        ["backpackWeapons",         CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignSingleItemArray],
        ["basicAssignItems",        CONFIG_TYPE_ARRAY,      "items",                    ASSIGN_LINK_ITEM_FUNC,              CAN_LINK_ITEM_FUNC,                     hull3_gear_fnc_assignSingleItemArray],
        ["assignItems",             CONFIG_TYPE_ARRAY,      "items",                    ASSIGN_LINK_ITEM_FUNC,              CAN_LINK_ITEM_FUNC,                     hull3_gear_fnc_assignSingleItemArray],
        ["binocular",               CONFIG_TYPE_TEXT,       "binocular",                ASSIGN_PRIMARY_WEAPON_FUNC,         CAN_LINK_ITEM_FUNC,                     hull3_gear_fnc_assignSingleItem],
        ["uniformItems",            CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignMultiItemArray],
        ["vestItems",               CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignMultiItemArray],
        ["backpackItems",           CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignMultiItemArray],
        ["uniformMedicalItems",     CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignMultiItemArray],
        ["vestMedicalItems",        CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignMultiItemArray],
        ["backpackMedicalItems",    CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignMultiItemArray]
    ];
    {
        DECLARE(_configValue) = [TYPE_CLASS_GEAR, _template, _class, _x select 0] call (CONFIG_TYPE_FUNCTIONS select (_x select 1));
        [_x select 0, _unit, _configValue, _x select 2, _x select 3, _x select 4, _template, _class] call (_x select 5);
    } foreach _assignables;
    [_unit, _class, _template] call compile ([TYPE_CLASS_GEAR, _template, _class, "code"] call hull3_config_fnc_getText);
    _unit selectWeapon primaryWeapon _unit;
    DEBUG("hull3.gear.assign",FMT_3("Assigned gear class '%1' from template '%2' to unit '%3'.",_class,_template,_unit));
};

hull3_gear_fnc_assignVehicleTemplate = {
    FUN_ARGS_3(_vehicle,_template,_class);

    DECLARE(_assignables) = [
        ["magazines",       CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleMagazines],
        ["weapons",         CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleWeapons],
        ["items",           CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleItems],
        ["radios",          CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleItems],
        ["medicalItems",    CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleItems]
    ];
    {
        DECLARE(_configValue) = [TYPE_CLASS_GEAR, _template, _class, _x select 0] call (CONFIG_TYPE_FUNCTIONS select (_x select 1));
        [_vehicle, _configValue] call (_x select 2);
    } foreach _assignables;
    [_vehicle, _class, _template] call compile ([TYPE_CLASS_GEAR, _template, _class, "code"] call hull3_config_fnc_getText);
    DEBUG("hull3.gear.assign",FMT_3("Assigned gear class '%1' from template '%2' to vehicle '%3'.",_class,_template,_vehicle));
};

hull3_gear_fnc_assignVehicleCrates = {
    params ["_vehicle"];

    private _cargoSpace = [_vehicle] call ace_cargo_fnc_getCargoSpaceLeft;

    if (_cargoSpace > 1) then {
        private _crate = "ACE_medicalSupplyCrate" createVehicle [0,0,0];
        [_crate, _vehicle, true] call ace_cargo_fnc_loadItem;
        DEBUG("hull3.gear.assign",FMT_2("Crate '%1' added to ACE cargo of '%2'!",_crate,_vehicle));
    };
};

hull3_gear_fnc_assignSingleItem = {
    FUN_ARGS_8(_fieldName,_unit,_item,_container,_addFunc,_canAddFunc,_template,_class);

    [_unit, _item, 1, _container, _addFunc, _canAddFunc, _fieldName, _template, _class] call hull3_gear_fnc_assignItems;
};

hull3_gear_fnc_assignSingleItemArray = {
    FUN_ARGS_8(_fieldName,_unit,_items,_container,_addFunc,_canAddFunc,_template,_class);

    {
        [_unit, _x, 1, _container, _addFunc, _canAddFunc, _fieldName, _template, _class] call hull3_gear_fnc_assignItems;
    } foreach _items;
};

hull3_gear_fnc_assignMultiItemArray = {
    FUN_ARGS_8(_fieldName,_unit,_items,_container,_addFunc,_canAddFunc,_template,_class);

    {
        [_unit, _x select 0, _x select 1, _container, _addFunc, _canAddFunc, _fieldName, _template, _class] call hull3_gear_fnc_assignItems;
    } foreach _items;
};

hull3_gear_fnc_assignItems = {
    FUN_ARGS_9(_unit,_item,_amount,_container,_addFunc,_canAddFunc,_fieldName,_template,_class);

    private ["_i", "_assignedAmount", "_canAddItem"];
    _i = 1;
    _assignedAmount = 0;
    _canAddItem = [_unit, _item] call _canAddFunc;
    while {_canAddItem && {_i <= _amount}} do {
        [_unit, _item] call _addFunc;
        INC(_assignedAmount);
        _canAddItem = [_unit, _item] call _canAddFunc;
        INC(_i);
    };
    if (_assignedAmount < _amount) then {
        WARN("hull3.gear.assign",FMT_8("Failed to assign %1x'%2' (of %3) from '%4' to the %5 of unit '%6' from template '%7' and class '%8'.",_amount - _assignedAmount,_item,_amount,_fieldName,_container,_unit,_template,_class));
    } else {
        TRACE("hull3.gear.assign",FMT_5("Assigned %1x'%2' from '%3' to the %4 of unit '%5'.",_amount,_item,_fieldName,_container,_unit));
    };
};

hull3_gear_fnc_assignVehicleMagazines = {
    FUN_ARGS_2(_vehicle,_magazines);

    {
        _vehicle addMagazineCargoGlobal _x;
    } foreach _magazines;
    TRACE("hull3.gear.assign",FMT_2("Assigned magazines '%1' to vehicle '%2'.",_magazines,_vehicle));
};

hull3_gear_fnc_assignVehicleWeapons = {
    FUN_ARGS_2(_vehicle,_weapons);

    {
        _vehicle addWeaponCargoGlobal _x;
    } foreach _weapons;
    TRACE("hull3.gear.assign",FMT_2("Assigned weapons '%1' to vehicle '%2'.",_weapons,_vehicle));
};

hull3_gear_fnc_assignVehicleItems = {
    FUN_ARGS_2(_vehicle,_items);

    {
        _vehicle addItemCargoGlobal _x;
    } foreach _items;
    TRACE("hull3.gear.assign",FMT_2("Assigned items '%1' to vehicle '%2'.",_items,_vehicle));
};

hull3_gear_fnc_tryAssignRadios = {
    params ["_unit"];

    if (_unit getVariable ["hull3_gear_radiosAssigned", false]) exitWith {};

    private _gearTemplate = _unit getVariable ["hull3_gear_template", DEFAULT_TEMPLATE_NAME];
    private _gearClass = _unit getVariable ["hull3_gear_class", hull3_gear_unitBaseClass];
    [_unit] call hull3_gear_fnc_removeRadios;
    private _assignables = [
        ["uniformRadios",           CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignSingleItemArray],
        ["vestRadios",              CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignSingleItemArray],
        ["backpackRadios",          CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignSingleItemArray]
    ];
    {
        private _configValue = [TYPE_CLASS_GEAR, _gearTemplate, _gearClass, _x select 0] call (CONFIG_TYPE_FUNCTIONS select (_x select 1));
        // ADD ACRE2 preset stuff here?
        [_x select 0, _unit, _configValue, _x select 2, _x select 3, _x select 4, _gearTemplate, _gearClass] call (_x select 5);
    } foreach _assignables;
    DEBUG("hull3.gear.assign.acre",FMT_3("Assigned radios from template '%1' and class '%2' to unit '%3'.",_gearTemplate,_gearClass,_unit));
    _unit setVariable ["hull3_gear_radiosAssigned", true, true];
    ["gear.radio.assigned", [_unit]] call hull3_event_fnc_emitEvent;
};

hull3_gear_fnc_removeRadios = {
    params ["_unit"];

    private _radios = [] call acre_api_fnc_getCurrentRadioList;
    if (_radios isEqualTo []) exitWith {
        DEBUG("hull3.gear.assign.acre",FMT_1("No radios required removing for '%1'.",_unit));
    };

    DEBUG("hull3.gear.assign.acre",FMT_2("Removing radios from '%1' from unit '%2'.",_radios,_unit));
    {
        _unit removeItem _x;
    } forEach _radios;
};

hull3_gear_fnc_tryRemoveNightGear = {
    params ["_unit"];

    if ([] call hull3_mission_fnc_isNightTime) exitWith {};
    DEBUG("hull3.gear.assign.night",FMT_1("Removing night gear from unit '%1'.",_unit));
    {
        _unit removeMagazineGlobal _x;
    } foreach ((magazines _unit) select { _x == "ACE_Chemlight_HiRed" });
    _unit removeItems "ACE_Flashlight_KSF1";
};
