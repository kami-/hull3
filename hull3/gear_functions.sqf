#include "hull3_macros.h"

#include "\userconfig\hull3\log\gear.h"
#include "logbook.h"

#define TYPE_CLASS_GEAR                 "Gear"
#define TYPE_FIELD_GEAR                 "gear"

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
    hull3_gear_unitBaseClass = ["Gear", "unitBaseClass"] call hull3_config_fnc_getText;
    hull3_gear_vehicleBaseClass = ["Gear", "vehicleBaseClass"] call hull3_config_fnc_getText;
    [] call hull3_gear_fnc_addEventHandlers;
    DEBUG("hull3.gear","Gear functions preInit finished.");
};

hull3_gear_fnc_addEventHandlers = {
    ["acre.initialized", hull3_gear_fnc_tryAssignRadios] call hull3_event_fnc_addEventHandler;
};

hull3_gear_fnc_assign = {
    FUN_ARGS_3(_unit,_manualClass,_manualTemplateOrFaction);

    if (_unit isKindOf "CAManBase") then {
        [_unit, _manualClass, _manualTemplateOrFaction] call hull3_gear_fnc_assignUnit;
    } else {
        [_unit, _manualClass, _manualTemplateOrFaction] call hull3_gear_fnc_assignVehicle;
    };
    ["gear.assigned", [_unit]] call hull3_event_fnc_emitEvent;
};

hull3_gear_fnc_assignUnit = {
    FUN_ARGS_3(_unit,_manualClass,_manualTemplateOrFaction);

    private ["_gearTemplate", "_uniformTemplate", "_gearClass"];
    _gearTemplate = [faction _unit, TYPE_CLASS_GEAR, TYPE_FIELD_GEAR, _manualTemplateOrFaction] call hull3_gear_fnc_getTemplate;
    _uniformTemplate = [faction _unit, _manualTemplateOrFaction] call hull3_uniform_fnc_getTemplate;
    _gearClass = [TYPE_CLASS_GEAR, _gearTemplate, _manualClass, hull3_gear_unitBaseClass] call hull3_gear_fnc_getClass;
    [_unit] call hull3_uniform_fnc_assignUniformInit;
    [_unit, _gearClass, _gearTemplate, _uniformTemplate] call hull3_uniform_fnc_assignUniformTemplate;
    [_unit, _gearClass, _gearTemplate] call hull3_gear_fnc_assignUnitInit;
    [_unit, _gearClass, _gearTemplate] call hull3_gear_fnc_assignUnitTemplate;
};

hull3_gear_fnc_assignVehicle = {
    FUN_ARGS_3(_unit,_manualClass,_manualTemplateOrFaction);

    private ["_gearTemplate", "_uniformTemplate", "_gearClass"];
    _gearTemplate = [faction _unit, _manualTemplateOrFaction] call hull3_gear_fnc_getVehicleTemplate;
    _gearClass = [TYPE_CLASS_GEAR, _gearTemplate, _manualClass, hull3_gear_vehicleBaseClass] call hull3_gear_fnc_getClass;
    [_unit, _gearClass, _gearTemplate] call hull3_gear_fnc_assignVehicleInit;
    [_unit, _gearClass, _gearTemplate] call hull3_gear_fnc_assignVehicleTemplate;
};

hull3_gear_fnc_assignUnitInit = {
    FUN_ARGS_3(_unit,_class,_template);

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
    DEBUG("hull3.gear.assign",FMT_1("Initialized vehicle '%1' gear.",_vehicle));
};

hull3_gear_fnc_getTemplate = {
    FUN_ARGS_4(_faction,_typeClass,_typeField,_manualTemplate);

    DECLARE(_template) = _manualTemplate;
    if (isNil {_template} || {!isClass (["Factions", _manualTemplate] call hull3_config_fnc_getConfig)}) then {
        _template = [_faction, _typeField] call hull3_gear_fnc_getTemplateByFaction;
    };

    _template;
};

hull3_gear_fnc_getVehicleTemplate = {
    FUN_ARGS_2(_faction,_manualTemplateOrFaction);

    DECLARE(_template) = [_manualTemplateOrFaction, TYPE_FIELD_GEAR] call hull3_gear_fnc_getTemplateByFaction;
    if (isNil {_template}) then {
        _template = [_faction, TYPE_CLASS_GEAR, TYPE_FIELD_GEAR, _manualTemplateOrFaction] call hull3_gear_fnc_getTemplate;
    };

    _template;
};

hull3_gear_fnc_getTemplateByFaction = {
    FUN_ARGS_2(_faction,_typeField);

    DECLARE(_template) = ["Factions", _faction, _typeField] call hull3_config_fnc_getText;
    if (_template == "") then {
        _template = nil;
    };

    _template;
};

hull3_gear_fnc_getClass = {
    FUN_ARGS_4(_typeClass,_template,_manualClass,_baseClass);

    if (!isClass ([_typeClass, _template, _manualClass] call hull3_config_fnc_getConfig)) then {
        _baseClass;
    } else {
        _manualClass;
    };
};

hull3_gear_fnc_assignUnitTemplate = {
    FUN_ARGS_3(_unit,_class,_template);

    DECLARE(_assignables) = [
        ["uniformMagazines",        CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignMultiItemArray],
        ["vestMagazines",           CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignMultiItemArray],
        ["backpackMagazines",       CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignMultiItemArray],
        ["primaryWeapon",           CONFIG_TYPE_TEXT,       "primary weapon",           ASSIGN_PRIMARY_WEAPON_FUNC,         CAN_ASSIGN_PRIMARY_WEAPON_FUNC,         hull3_gear_fnc_assignSingleItem],
        ["primaryWeaponItems",      CONFIG_TYPE_ARRAY,      "primary weapon items",     ASSIGN_PRIMARY_WEAPON_ITEM_FUNC,    CAN_ASSIGN_PRIMARY_WEAPON_ITEM_FUNC,    hull3_gear_fnc_assignSingleItemArray],
        ["secondaryWeapon",         CONFIG_TYPE_TEXT,       "secondary weapon",         ASSIGN_SECONDARY_WEAPON_FUNC,       CAN_ASSIGN_SECONDARY_WEAPON_FUNC,       hull3_gear_fnc_assignSingleItem],
        ["secondaryWeaponItems",    CONFIG_TYPE_ARRAY,      "secondary weapon items",   ASSIGN_SECONDARY_WEAPON_ITEM_FUNC,  CAN_ASSIGN_SECONDARY_WEAPON_ITEM_FUNC,  hull3_gear_fnc_assignSingleItemArray],
        ["handgunWeapon",           CONFIG_TYPE_TEXT,       "handgun weapon",           ASSIGN_HANDGUN_WEAPON_FUNC,         CAN_ASSIGN_HANDGUN_WEAPON_FUNC,         hull3_gear_fnc_assignSingleItem],
        ["handgunItems",            CONFIG_TYPE_ARRAY,      "handgun items",            ASSIGN_HANDGUN_ITEM_FUNC,           CAN_ASSIGN_HANDGUN_ITEM_FUNC,           hull3_gear_fnc_assignSingleItemArray],
        ["uniformWeapons",          CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignSingleItemArray],
        ["vestWeapons",             CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignSingleItemArray],
        ["backpackWeapons",         CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignSingleItemArray],
        ["basicAssigneItems",       CONFIG_TYPE_ARRAY,      "items",                    ASSIGN_LINK_ITEM_FUNC,              CAN_LINK_ITEM_FUNC,                     hull3_gear_fnc_assignSingleItemArray],
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
        DECLARE(_configValue) = ["Gear", _template, _class, _x select 0] call (CONFIG_TYPE_FUNCTIONS select (_x select 1));
        [_x select 0, _unit, _configValue, _x select 2, _x select 3, _x select 4] call (_x select 5);
    } foreach _assignables;
    [_unit, _class, _template] call compile (["Gear", _template, _class, "code"] call hull3_config_fnc_getText);
    _unit selectWeapon primaryWeapon _unit;
    DEBUG("hull3.gear.assign",FMT_3("Assigned gear class '%1' from template '%2' to unit '%3'.",_class,_template,_unit));
};

hull3_gear_fnc_assignVehicleTemplate = {
    FUN_ARGS_3(_vehicle,_class,_template);

    DECLARE(_assignables) = [
        ["magazines",       CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleMagazines],
        ["weapons",         CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleWeapons],
        ["items",           CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleItems],
        ["radios",          CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleItems],
        ["medicalItems",    CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleItems]
    ];
    {
        DECLARE(_configValue) = ["Gear", _template, _class, _x select 0] call (CONFIG_TYPE_FUNCTIONS select (_x select 1));
        [_vehicle, _configValue] call (_x select 2);
    } foreach _assignables;
    [_vehicle, _class, _template] call compile (["Gear", _template, _class, "code"] call hull3_config_fnc_getText);
    DEBUG("hull3.gear.assign",FMT_3("Assigned gear class '%1' from template '%2' to vehicle '%3'.",_class,_template,_vehicle));
};

hull3_gear_fnc_assignSingleItem = {
    FUN_ARGS_6(_fieldName,_unit,_item,_container,_addFunc,_canAddFunc);

    [_unit, _item, 1, _container, _addFunc, _canAddFunc, _fieldName] call hull3_gear_fnc_assignItems;
};

hull3_gear_fnc_assignSingleItemArray = {
    FUN_ARGS_6(_fieldName,_unit,_items,_container,_addFunc,_canAddFunc);

    {
        [_unit, _x, 1, _container, _addFunc, _canAddFunc, _fieldName] call hull3_gear_fnc_assignItems;
    } foreach _items;
};

hull3_gear_fnc_assignMultiItemArray = {
    FUN_ARGS_6(_fieldName,_unit,_items,_container,_addFunc,_canAddFunc);

    {
        [_unit, _x select 0, _x select 1, _container, _addFunc, _canAddFunc, _fieldName] call hull3_gear_fnc_assignItems;
    } foreach _items;
};

hull3_gear_fnc_assignItems = {
    FUN_ARGS_7(_unit,_item,_amount,_container,_addFunc,_canAddFunc,_fieldName);

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
        WARN("hull3.gear.assign",FMT_6("Failed to assign %1x'%2' (of %3) from '%4' to the %5 of unit '%6'.",_amount - _assignedAmount,_item,_amount,_fieldName,_container,_unit));
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
        _vehicle addWeaponCargoGlobal _x;
    } foreach _items;
    TRACE("hull3.gear.assign",FMT_2("Assigned items '%1' to vehicle '%2'.",_items,_vehicle));
};

hull3_gear_fnc_tryAssignRadios = {
    FUN_ARGS_1(_unit);

    private ["_gearClass", "_gearTemplate"];
    _gearClass = _unit getVariable "hull3_gear_class";
    _gearTemplate = _unit getVariable "hull3_gear_template";
    if (!isNil {_gearClass} && {!isNil {_gearTemplate}}) then {
        [_unit, _gearTemplate, _gearClass] call hull3_gear_fnc_assignRadios;
        DEBUG("hull3.gear.assign",FMT_1("Assigned radios to unit '%1'.",_unit));
    };
    ["gear.radio.assigned", [_unit]] call hull3_event_fnc_emitEvent;
};

hull3_gear_fnc_assignRadios = {
    FUN_ARGS_3(_unit,_gearTemplate,_gearClass);

    [_unit] call hull3_gear_fnc_removeRadios;
    DECLARE(_assignables) = [
        ["uniformRadios",           CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignSingleItemArray],
        ["vestRadios",              CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignSingleItemArray],
        ["backpackRadios",          CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignSingleItemArray]
    ];
    {
        DECLARE(_configValue) = ["Gear", _gearTemplate, _gearClass, _x select 0] call (CONFIG_TYPE_FUNCTIONS select (_x select 1));
        // ADD ACRE2 preset stuff here?
        [_x select 0, _unit, _configValue, _x select 2, _x select 3, _x select 4] call (_x select 5);
    } foreach _assignables;
};

hull3_gear_fnc_removeRadios = {
    FUN_ARGS_1(_unit);

    {
        if (_x == "ItemRadio" || {[_x] call acre_api_fnc_isRadio}) then {
            _unit unassignItem _x;
            _unit removeItem _x;
        };
    } foreach ((items _unit) + (assignedItems _unit)); // Have to remove from backpack, vest, uniform
    TRACE("hull3.gear.assign",FMT_2("Removed radios from items '%1' of unit '%2'.",(items _unit) + (assignedItems _unit),_unit));
};
