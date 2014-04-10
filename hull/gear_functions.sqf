#include "hull_macros.h"

#define GEAR_TEMPLATE_CONTAINER_CLASS       "HullGearTemplates"
#define GEAR_TEMPLATE_BASE_CLASS            "Rifleman"



hull_gear_fnc_assign = {
    FUN_ARGS_3(_unit,_manualClass,_manualTemplate);

    if (!([_unit, _manualClass, _manualTemplate] call hull_gear_fnc_validateTemplate)) then {
        private ["_template", "_class"];
        _template = [faction _unit, _manualTemplate] call hull_gear_fnc_getTemplate;
        _class = [_template, _manualClass] call hull_gear_fnc_getClass;
        [_unit, _class, _template] call hull_gear_fnc_assignInit;
        [_unit, _class, _template] call hull_gear_fnc_assignTemplate;
    };
};

hull_gear_fnc_assignInit = {
    FUN_ARGS_3(_unit,_class,_template);

    _unit setVariable ["hull_gear_class", _class, true];
    _unit setVariable ["hull_gear_template", _template, true];
    removeAllWeapons _unit;
    removeBackpack _unit;
    _unit setVariable ["ace_sys_wounds_no_medical_gear", true, false];
};

hull_gear_fnc_getTemplate = {
    FUN_ARGS_2(_faction,_manualTemplate);

    private "_template";
    _template = _manualTemplate;
    if (isNil {_template} || {!isClass (HULL_CONFIGFILE >> _manualTemplate)}) then {
        _template = [_faction] call hull_gear_fnc_getTemplateByFaction;
    };

    _template;
};

hull_gear_fnc_getClass = {
    FUN_ARGS_2(_template,_manualClass);

    if (!isClass (HULL_CONFIGFILE >> _template >> _manualClass)) then {
        GEAR_TEMPLATE_BASE_CLASS;
    } else {
        _manualClass;
    };
};

hull_gear_fnc_getTemplateByFaction = {
    FUN_ARGS_1(_faction);

    private ["_factions", "_template"];
    _factions = getArray (HULL_CONFIGFILE >> "Hull_FactionMapping" >> "factions");
    {
        if (toLower (_x select 0) == toLower _faction) exitWith {
            _template = _x select 1;
        };
    } foreach _factions;

    _template;
};

hull_gear_fnc_assignTemplate = {
    FUN_ARGS_3(_unit,_class,_template);

    private "_config";
    _config = HULL_CONFIGFILE >> _template >> _class;
    [_unit, getText (_config >> "ruck")] call hull_gear_fnc_assignRuck;
    [_unit, getText (_config >> "goggles")] call hull_gear_fnc_assignGoggles;
    [_unit, getText (_config >> "vest")] call hull_gear_fnc_assignVest;
    [_unit, getText (_config >> "uniform")] call hull_gear_fnc_assignUniform;
    [_unit, getText (_config >> "helmet")] call hull_gear_fnc_assignHelmet;
    [_unit, getArray (_config >> "magazines")] call hull_gear_fnc_assignMagazines;
    [_unit, getArray (_config >> "weapons")] call hull_gear_fnc_assignWeapons;
    [_unit, getArray (_config >> "primaryAttachments")] call hull_gear_fnc_assignPrimaryAttachments;
    [_unit, getArray (_config >> "secondaryAttachments")] call hull_gear_fnc_assignSecondaryAttachments;
    [_unit, getArray (_config >> "ruckWeapons")] call hull_gear_fnc_assignRuckWeapons;
    [_unit, getArray (_config >> "ruckMagazines")] call hull_gear_fnc_assignRuckMagazines;
    [_unit, getArray (_config >> "vestMagazines")] call hull_gear_fnc_assignVestMagazines;
    [_unit, getArray (_config >> "items")] call hull_gear_fnc_assignNonRadioItems;
    [_unit, _class, _template] call compile getText (_config >> "code");
    _unit selectWeapon primaryWeapon _unit;
};

hull_gear_fnc_assignHelmet = {
    FUN_ARGS_2(_unit,_helmet);

    _unit addHeadgear _helmet;
};

hull_gear_fnc_assignUniform = {
    FUN_ARGS_2(_unit,_uniform);

    _unit addUniform  _uniform;
};

hull_gear_fnc_assignVest = {
    FUN_ARGS_2(_unit,_vest);

    _unit addVest _vest;
};

hull_gear_fnc_assignGoggles = {
    FUN_ARGS_2(_unit,_goggles);

    _unit addGoggles _goggles;
};

hull_gear_fnc_assignRuck = {
    FUN_ARGS_2(_unit,_ruck);

    if(_ruck != "") then {
        _unit addBackpack _ruck;
        [_unit, _ruck] call ACE_fnc_PutWeaponOnBack;
    };
};

hull_gear_fnc_assignMagazines = {
    FUN_ARGS_2(_unit,_magazines);

    {
        for "_i" from 1 to (_x select 1) do {
            _unit addMagazine (_x select 0);
        };
    } foreach _magazines;
};

hull_gear_fnc_assignWeapons = {
    FUN_ARGS_2(_unit,_weapons);

    {
        _unit addWeapon _x;
    } foreach _weapons;
};

hull_gear_fnc_assignPrimaryAttachments = {
    FUN_ARGS_2(_unit,_primAttachments);

    {
        _unit addPrimaryWeaponItem _x
    } foreach _primAttachments;
};

hull_gear_fnc_assignSecondaryAttachments = {
    FUN_ARGS_2(_unit,_secAttachments);

    {
        _unit addSecondaryWeaponItem _x
    } foreach _secAttachments;
};

hull_gear_fnc_assignRuckWeapons = {
    FUN_ARGS_2(_unit,_ruckWeapons);

    {
        for "_i" from 1 to (_x select 1) do {
            _unit addItemToBackpack (_x select 0);
        };
    } foreach _ruckWeapons;
};

hull_gear_fnc_assignRuckMagazines = {
    FUN_ARGS_2(_unit,_ruckMagazines);

    {
        for "_i" from 1 to (_x select 1) do {
            _unit addItemToBackpack (_x select 0);
        };
    } foreach _ruckMagazines;
};

hull_gear_fnc_assignVestMagazines = {
    FUN_ARGS_2(_unit,_vestMagazines);

    {
        for "_i" from 1 to (_x select 1) do { 
            _unit addItemToVest  (_x select 0);
        };
    } foreach _vestMagazines;
};

hull_gear_fnc_assignNonRadioItems = {
    FUN_ARGS_2(_unit,_items);

    {
        if (!([_x] call acre_api_fnc_isRadio)) then {
            TRY_ADD_WEAPON(_unit,_x);
        };
    } foreach _items;
};

hull_gear_fnc_tryAssignRadios = {
    FUN_ARGS_1(_unit);

    private ["_gearClass", "_gearTemplate"];
    _gearClass = _unit getVariable "hull_gear_class";
    _gearTemplate = _unit getVariable "hull_gear_template";
    if (!isNil {_gearClass} && {!isNil {_gearTemplate}}) then {
        [_unit, getArray (HULL_CONFIGFILE >> _gearTemplate >> _gearClass >> "items")] spawn hull_gear_fnc_assignRadios;
    } else {
        diag_log LOG_MSG_3("ERROR", "Gear - No gear template ('%1') or class ('%2') was found for unit '%3'!", _gearTemplate, _gearClass, _unit);
    };
};

hull_gear_fnc_assignRadios = {
    FUN_ARGS_2(_unit,_items);

    waitUntil {
        hull_acre_isInitialized;
    };
    [_unit] call hull_gear_fnc_removeRadios;
    {
        _unit addWeapon _x;
    } foreach ([_items] call hull_gear_fnc_getRadios);
};

hull_gear_fnc_removeRadios = {
    FUN_ARGS_1(_unit);

    {
        if (_x == "ItemRadio" || {[_x] call acre_api_fnc_isRadio}) then {
            _unit removeWeapon _x;
        };
    } foreach (weapons _unit);
};

hull_gear_fnc_getRadios = {
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

hull_gear_fnc_assignIFAK = {
    FUN_ARGS_2(_unit,_ifak);

    [_unit, _ifak select 0, _ifak select 1, _ifak select 2, true] call ACE_fnc_PackIFAK;
    _unit setVariable ["ACE_IFAK_Contents", _unit getVariable ["ACE_IFAK_Contents", [0,0,0]], true];
};

hull_gear_fnc_validateTemplate = {
    FUN_ARGS_3(_unit,_manualClass,_manualTemplate);

    private ["_error", "_factionTemplate", "_template", "_config", "_fields"];
    _error = false;
    _factionTemplate = [faction _unit] call hull_gear_fnc_getTemplateByFaction;
    if (!isNil {_manualTemplate} && {!isClass (HULL_CONFIGFILE >> _manualTemplate)}) then {
        diag_log LOG_MSG_3("WARN", "Gear - No gear template found with name '%1', using '%2' faction default '%3' instead!", _manualTemplate, faction _unit, _factionTemplate);
    };

    if (isNil {_factionTemplate}) then {
        diag_log LOG_MSG_1("WARN", "Gear - No gear template found for faction '%1'!", faction _unit);
        _error = true;
    };

    _template = [faction _unit, _manualTemplate] call hull_gear_fnc_getTemplate;
    if (!_error && {!isClass (HULL_CONFIGFILE >> _template >> _manualClass)}) then {
        diag_log LOG_MSG_3("WARN", "Gear - Class '%1' not found in gear template '%2', on unit '%3'! Using defalut 'Rifleman' instead.", _manualClass, _template, _unit);
        _manualClass = "Rifleman";
    };
    if (!_error && {!isClass (HULL_CONFIGFILE >> _template >> _manualClass)}) then {
        diag_log LOG_MSG_2("ERROR", "Gear - Default class '%1' not found in gear template '%2'!", _manualClass, _template);
        _error = true;
    };

    _config = HULL_CONFIGFILE >> _template >> _manualClass;
    _fields = [
        ["ruck", {isText (_config >> _field)}],
        ["helmet", {isText (_config >> _field)}],
        ["uniform", {isText (_config >> _field)}],
        ["vest", {isText (_config >> _field)}],
        ["goggles", {isText (_config >> _field)}],
        ["magazines", {isArray (_config >> _field)}],
        ["weapons", {isArray (_config >> _field)}],
        ["primaryAttachments", {isArray (_config >> _field)}],
        ["secondaryAttachments", {isArray (_config >> _field)}],
        ["ruckWeapons", {isArray (_config >> _field)}],
        ["ruckMagazines", {isArray (_config >> _field)}],
        ["vestMagazines", {isArray (_config >> _field)}],
        ["items", {isArray (_config >> _field)}],
        ["code", {isText (_config >> _field)}]
    ];
    {
        private "_field";
        _field = _x select 0;
        if (!_error && {!call (_x select 1)}) then {
            diag_log LOG_MSG_3("ERROR", "Gear - Field '%1' not found in template '%2' and in class '%3'!", _field, _template, _manualClass);
            _error = true;
        };
    } foreach _fields;

    _error;
};

/*
hull_gear_fnc_cleanUp = {
    _globalVars = [
        hull_gear_fnc_assign, hull_gear_fnc_assignInit, hull_gear_fnc_getTemplate,
        hull_gear_fnc_getTemplateByFaction, hull_gear_fnc_assignTemplate, hull_gear_fnc_assignRuck,
        hull_gear_fnc_assignMagazines, hull_gear_fnc_assignWeapons, hull_gear_fnc_assignRuckWeapons,
        hull_gear_fnc_assignRuckMagazines, hull_gear_fnc_assignItems, hull_gear_fnc_assignIFAK,
        hull_gear_fnc_validateTemplate
    ];
    {
        _x = nil;
    } foreach _globalVars;
};
/*