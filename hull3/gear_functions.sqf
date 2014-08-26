#include "hull3_macros.h"

#include "\userconfig\hull3\log\gear.h"
#include "logbook.h"


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
        [
            _unit, _manualClass, _manualTemplateOrFaction, GEAR_UNIT_FIELDS,
            hull3_gear_unitBaseClass, hull3_gear_fnc_assignUnitInit, hull3_gear_fnc_assignUnitTemplate
        ] call hull3_gear_fnc_assignByType;
    } else {
        [
            _unit, _manualClass, [faction _unit, _manualTemplateOrFaction] call hull3_gear_fnc_getVehicleTemplate, GEAR_VEHICLE_FIELDS,
            hull3_gear_vehicleBaseClass, hull3_gear_fnc_assignVehicleInit, hull3_gear_fnc_assignVehicleTemplate
        ] call hull3_gear_fnc_assignByType;
    };
};

hull3_gear_fnc_assignByType = {
    FUN_ARGS_7(_unit,_manualClass,_manualTemplate,_fields,_baseClass,_initFunc,_assignFunc);

    if (!([_unit, _manualClass, _manualTemplate, _baseClass, _fields] call hull3_gear_fnc_validateTemplate)) then {
        private ["_template", "_class"];
        _template = [faction _unit, _manualTemplate] call hull3_gear_fnc_getTemplate;
        _class = [_template, _manualClass, _baseClass] call hull3_gear_fnc_getClass;
        [_unit, _class, _template] call _initFunc;
        [_unit, _class, _template] call _assignFunc;
    };
    ["gear.assigned", [_unit]] call hull3_event_fnc_emitEvent;
};

hull3_gear_fnc_assignUnitInit = {
    FUN_ARGS_3(_unit,_class,_template);

    _unit setVariable ["hull3_gear_class", _class, true];
    _unit setVariable ["hull3_gear_template", _template, true];
    removeAllWeapons _unit;
    removeBackpack _unit;
    [_unit] call hull3_gear_fnc_removeNVGs;
    DEBUG("hull3.gear.assign",FMT_1("Initialized unit '%1' gear.",_unit));
};

hull3_gear_fnc_assignVehicleInit = {
    FUN_ARGS_1(_vehicle);

    clearMagazineCargoGlobal _vehicle;
    clearWeaponCargoGlobal _vehicle;
    clearItemCargoGlobal _vehicle;
    DEBUG("hull3.gear.assign",FMT_1("Initialized vehicle '%1' gear.",_vehicle));
};

hull3_gear_fnc_removeNVGs = {
    FUN_ARGS_1(_unit);

    private "_nvgs";
    _nvgs = ["NVGoggles", "NVGoggles_OPFOR", "NVGoggles_INDEP"];
    {
        _unit unassignItem _x;
        _unit removeItem _x;
    } foreach _nvgs;
    TRACE("hull3.gear.assign",FMT_1("Removed NVGs from unit '%1'.",_unit));
};

hull3_gear_fnc_getTemplate = {
    FUN_ARGS_2(_faction,_manualTemplate);

    private "_template";
    _template = _manualTemplate;
    if (isNil {_template} || {!isClass (["Gear", _manualTemplate] call hull3_config_fnc_getConfig)}) then {
        _template = [_faction] call hull3_gear_fnc_getTemplateByFaction;
    };

    _template;
};

hull3_gear_fnc_getVehicleTemplate = {
    FUN_ARGS_2(_faction,_manualTemplateOrFaction);

    DECLARE(_template) = [_manualTemplateOrFaction] call hull3_gear_fnc_getTemplateByFaction;
    if (isNil {_template}) then {
        _template = [_faction, _manualTemplateOrFaction] call hull3_gear_fnc_getTemplate;
    };

    _template;
};

hull3_gear_fnc_getClass = {
    FUN_ARGS_3(_template,_manualClass,_baseClass);

    if (!isClass (["Gear", _template, _manualClass] call hull3_config_fnc_getConfig)) then {
        _baseClass;
    } else {
        _manualClass;
    };
};

hull3_gear_fnc_getTemplateByFaction = {
    FUN_ARGS_1(_faction);

    private ["_factions", "_template", "_isFound"];
    _factions = getArray (HULL3_MISSION_CONFIG_FILE >> "Gear" >> "factions");
    PUSH_ALL(_factions,getArray (HULL3_CONFIG_FILE >> "Gear" >> "factions"));
    _isFound = false;
    {
        if (toLower (_x select 0) == toLower _faction) exitWith {
            _template = _x select 1;
        };
    } foreach _factions;

    _template;
};

hull3_gear_fnc_assignUnitTemplate = {
    FUN_ARGS_3(_unit,_class,_template);

    DECLARE(_assignables) = [
        ["helmet",                  CONFIG_TYPE_TEXT,   hull3_gear_fnc_assignHelmet],
        ["goggles",                 CONFIG_TYPE_TEXT,   hull3_gear_fnc_assignGoggles],
        ["uniform",                 CONFIG_TYPE_TEXT,   hull3_gear_fnc_assignUniform],
        ["vest",                    CONFIG_TYPE_TEXT,   hull3_gear_fnc_assignVest],
        ["ruck",                    CONFIG_TYPE_TEXT,   hull3_gear_fnc_assignRuck],
        ["magazines",               CONFIG_TYPE_ARRAY,  hull3_gear_fnc_assignMagazines],
        ["weapons",                 CONFIG_TYPE_ARRAY,  hull3_gear_fnc_assignWeapons],
        ["primaryAttachments",      CONFIG_TYPE_ARRAY,  hull3_gear_fnc_assignPrimaryAttachments],
        ["secondaryAttachments",    CONFIG_TYPE_ARRAY,  hull3_gear_fnc_assignSecondaryAttachments],
        ["ruckWeapons",             CONFIG_TYPE_ARRAY,  hull3_gear_fnc_assignRuckWeapons],
        ["ruckMagazines",           CONFIG_TYPE_ARRAY,  hull3_gear_fnc_assignRuckMagazines],
        ["vestMagazines",           CONFIG_TYPE_ARRAY,  hull3_gear_fnc_assignVestMagazines],
        ["items",                   CONFIG_TYPE_ARRAY,  hull3_gear_fnc_assignNonRadioItems]
    ];
    [_unit, _class, _template, _assignables] call hull3_gear_fnc_assignObjectTemplate;
    _unit selectWeapon primaryWeapon _unit;
    DEBUG("hull3.gear.assign",FMT_3("Assigned gear class '%1' from template '%2' to unit '%3'.",_class,_template,_unit));
};

hull3_gear_fnc_assignVehicleTemplate = {
    FUN_ARGS_3(_vehicle,_class,_template);

    DECLARE(_assignables) = [
        ["magazines",       CONFIG_TYPE_ARRAY,  hull3_gear_fnc_assignVehicleMagazines],
        ["weapons",         CONFIG_TYPE_ARRAY,  hull3_gear_fnc_assignVehicleWeapons],
        ["items",           CONFIG_TYPE_ARRAY,  hull3_gear_fnc_assignVehicleWeapons]
    ];
    [_vehicle, _class, _template, _assignables] call hull3_gear_fnc_assignObjectTemplate;
    DEBUG("hull3.gear.assign",FMT_3("Assigned gear class '%1' from template '%2' to vehicle '%3'.",_class,_template,_vehicle));
};

hull3_gear_fnc_assignObjectTemplate = {
    FUN_ARGS_4(_object,_class,_template,_assignables);

    {
        DECLARE(_configValue) = ["Gear", _template, _class, _x select 0] call (CONFIG_TYPE_FUNCTIONS select (_x select 1));
        [_object, _configValue] call (_x select 2);
    } foreach _assignables;
    [_object, _class, _template] call compile (["Gear", _template, _class, "code"] call hull3_config_fnc_getText);
};

hull3_gear_fnc_assignHelmet = {
    FUN_ARGS_2(_unit,_helmet);

    if (_helmet != "") then {
        _unit addHeadgear _helmet;
        TRACE("hull3.gear.assign",FMT_2("Assigned helmet '%1' to unit '%2'.",_helmet,_unit));
    };
};

hull3_gear_fnc_assignGoggles = {
    FUN_ARGS_2(_unit,_goggles);

    if (_goggles != "") then {
        _unit addGoggles _goggles;
        TRACE("hull3.gear.assign",FMT_2("Assigned goggles '%1' to unit '%2'.",_goggles,_unit));
    };
};

hull3_gear_fnc_assignUniform = {
    FUN_ARGS_2(_unit,_uniform);

    if (_uniform != "") then {
        _unit addUniform _uniform;
        TRACE("hull3.gear.assign",FMT_2("Assigned uniform '%1' to unit '%2'.",_uniform,_unit));
    };
};

hull3_gear_fnc_assignVest = {
    FUN_ARGS_2(_unit,_vest);

    if (_vest != "") then {
        _unit addVest _vest;
        TRACE("hull3.gear.assign",FMT_2("Assigned vest '%1' to unit '%2'.",_vest,_unit));
    };
};

hull3_gear_fnc_assignRuck = {
    FUN_ARGS_2(_unit,_ruck);

    if (_ruck != "") then {
        _unit addBackpack _ruck;
        TRACE("hull3.gear.assign",FMT_2("Assigned ruck '%1' to unit '%2'.",_ruck,_unit));
    };
};

hull3_gear_fnc_assignMagazines = {
    FUN_ARGS_2(_unit,_magazines);

    {
        for "_i" from 1 to (_x select 1) do {
            _unit addMagazine (_x select 0);
        };
    } foreach _magazines;
    TRACE("hull3.gear.assign",FMT_2("Assigned magazines '%1' to unit '%2'.",_magazines,_unit));
};

hull3_gear_fnc_assignVehicleMagazines = {
    FUN_ARGS_2(_vehicle,_magazines);

    {
        _vehicle addMagazineCargoGlobal _x;
    } foreach _magazines;
    TRACE("hull3.gear.assign",FMT_2("Assigned magazines '%1' to vehicle '%2'.",_magazines,_vehicle));
};

hull3_gear_fnc_assignWeapons = {
    FUN_ARGS_2(_unit,_weapons);

    {
        _unit addWeapon _x;
    } foreach _weapons;
    TRACE("hull3.gear.assign",FMT_2("Assigned weapons '%1' to unit '%2'.",_weapons,_unit));
};

hull3_gear_fnc_assignVehicleWeapons = {
    FUN_ARGS_2(_vehicle,_weapons);

    {
        _vehicle addWeaponCargoGlobal _x;
    } foreach _weapons;
    TRACE("hull3.gear.assign",FMT_2("Assigned weapons '%1' to vehicle '%2'.",_weapons,_vehicle));
};

hull3_gear_fnc_assignPrimaryAttachments = {
    FUN_ARGS_2(_unit,_primaryAttachments);

    {
        _unit addPrimaryWeaponItem _x
    } foreach _primaryAttachments;
    TRACE("hull3.gear.assign",FMT_2("Assigned primary attachments '%1' to unit '%2'.",_primaryAttachments,_unit));
};

hull3_gear_fnc_assignSecondaryAttachments = {
    FUN_ARGS_2(_unit,_secondaryAttachments);

    {
        _unit addSecondaryWeaponItem _x
    } foreach _secondaryAttachments;
    TRACE("hull3.gear.assign",FMT_2("Assigned secondary attachments '%1' to unit '%2'.",_secondaryAttachments,_unit));
};

hull3_gear_fnc_assignRuckWeapons = {
    FUN_ARGS_2(_unit,_ruckWeapons);

    {
        for "_i" from 1 to (_x select 1) do {
            _unit addItemToBackpack (_x select 0);
        };
    } foreach _ruckWeapons;
    TRACE("hull3.gear.assign",FMT_2("Assigned ruck weapons '%1' to unit '%2'.",_ruckWeapons,_unit));
};

hull3_gear_fnc_assignRuckMagazines = {
    FUN_ARGS_2(_unit,_ruckMagazines);

    {
        for "_i" from 1 to (_x select 1) do {
            _unit addItemToBackpack (_x select 0);
        };
    } foreach _ruckMagazines;
    TRACE("hull3.gear.assign",FMT_2("Assigned ruck magazines '%1' to unit '%2'.",_ruckMagazines,_unit));
};

hull3_gear_fnc_assignVestMagazines = {
    FUN_ARGS_2(_unit,_vestMagazines);

    {
        for "_i" from 1 to (_x select 1) do { 
            _unit addItemToVest  (_x select 0);
        };
    } foreach _vestMagazines;
    TRACE("hull3.gear.assign",FMT_2("Assigned vest magazines '%1' to unit '%2'.",_vestMagazines,_unit));
};

hull3_gear_fnc_assignNonRadioItems = {
    FUN_ARGS_2(_unit,_items);

    {
        if (!([_x] call acre_api_fnc_isRadio)) then {
            TRY_ADD_WEAPON(_unit,_x);
        };
    } foreach _items;
    TRACE("hull3.gear.assign",FMT_2("Assigned non-radio items '%1' to unit '%2'.",_items,_unit));
};

hull3_gear_fnc_tryAssignRadios = {
    FUN_ARGS_1(_unit);

    private ["_gearClass", "_gearTemplate"];
    _gearClass = _unit getVariable "hull3_gear_class";
    _gearTemplate = _unit getVariable "hull3_gear_template";
    if (!isNil {_gearClass} && {!isNil {_gearTemplate}}) then {
        [_unit, ["Gear", _gearTemplate, _gearClass, "items"] call hull3_config_fnc_getArray] call hull3_gear_fnc_assignRadios;
        DEBUG("hull3.gear.assign",FMT_1("Assigned radios to unit '%1'.",_unit));
    };
    ["gear.radio.assigned", [_unit]] call hull3_event_fnc_emitEvent;
};

hull3_gear_fnc_assignRadios = {
    FUN_ARGS_2(_unit,_items);

    [_unit] call hull3_gear_fnc_removeRadios;
    {
        _unit addItem _x;
    } foreach ([_items] call hull3_gear_fnc_getRadios);
    TRACE("hull3.gear.assign",FMT_2("Assigned radios '%1' to unit '%2'.",[_items] call hull3_gear_fnc_getRadios,_unit));
};

hull3_gear_fnc_removeRadios = {
    FUN_ARGS_1(_unit);

    {
        if (_x == "ItemRadio" || {[_x] call acre_api_fnc_isRadio}) then {
            _unit unassignItem _x;
            _unit removeItem _x;
        };
    } foreach ((items _unit) + (assignedItems _unit));
    TRACE("hull3.gear.assign",FMT_2("Removed radios from items '%1' of unit '%2'.",(items _unit) + (assignedItems _unit),_unit));
};

hull3_gear_fnc_getRadios = {
    FUN_ARGS_1(_items);

    private "_radios";
    _radios = [];
    {
        if ([_x] call acre_api_fnc_isRadio) then {
            PUSH(_radios,_x);
        };
    } foreach _items;

    _radios;
};

hull3_gear_fnc_validateTemplate = {
    FUN_ARGS_5(_unit,_manualClass,_manualTemplate,_baseClass,_fields);

    private ["_error", "_factionTemplate", "_template"];
    _error = false;
    _factionTemplate = [faction _unit] call hull3_gear_fnc_getTemplateByFaction;
    if (!isNil {_manualTemplate} && {!isClass (["Gear", _manualTemplate] call hull3_config_fnc_getConfig)}) then {
        WARN("hull3.gear.validate",FMT_3("No gear template found with name '%1', using '%2' faction default '%3' instead!",_manualTemplate,faction _unit,_factionTemplate));
    };

    if (isNil {_factionTemplate}) then {
        WARN("hull3.gear.validate",FMT_1("No gear template found for faction '%1'!",faction _unit));
        _error = true;
    };

    _template = [faction _unit, _manualTemplate] call hull3_gear_fnc_getTemplate;
    if (!_error && {!isClass (["Gear", _template, _manualClass] call hull3_config_fnc_getConfig)}) then {
        WARN("hull3.gear.validate",FMT_4("Class '%1' not found in gear template '%2', on unit '%3'! Using defalut '%4' instead.",_manualClass,_template,_unit,_baseClass));
        _manualClass = _baseClass;
    };
    if (!_error && {!isClass (["Gear", _template, _manualClass] call hull3_config_fnc_getConfig)}) then {
        ERROR("hull3.gear.validate",FMT_2("Default class '%1' not found in gear template '%2'!",_manualClass,_template));
        _error = true;
    };

    {
        DECLARE(_config) = ["Gear", _template, _manualClass, _x select 0] call hull3_config_fnc_getConfig;
        if (!_error && {!call (_x select 1)}) then {
            ERROR("hull3.gear.validate",FMT_3("Field '%1' not found in template '%2' and in class '%3'!",_field,_template,_manualClass));
            _error = true;
        };
    } foreach _fields;
    DEBUG("hull3.gear.validate",FMT_2("There were %1 errors while validating unit '%2'.",if (_error) then {""} else {"no"},_unit));

    _error;
};