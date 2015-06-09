#include "hull3_macros.h"

#include "\userconfig\hull3\log\uniform.h"
#include "logbook.h"

#define TYPE_CLASS_UNIFORM              "Uniform"
#define TYPE_FIELD_UNIFORM              "uniform"


hull3_uniform_fnc_preInit = {
    hull3_uniform_unitBaseClass = ["Uniform", "unitBaseClass"] call hull3_config_fnc_getText;
    DEBUG("hull3.uniform","Uniform functions preInit finished.");
};

hull3_uniform_fnc_assignUniformInit = {
    FUN_ARGS_1(_unit);

    removeHeadgear _unit;
    removeGoggles _unit;
    removeUniform _unit;
    removeVest _unit;
    removeBackpack _unit;
    DEBUG("hull3.uniform.assign",FMT_1("Initialized unit '%1' uniform.",_unit));
};

hull3_uniform_fnc_getTemplate = {
    FUN_ARGS_2(_faction,_manualTemplate);

    [_faction, TYPE_FIELD_UNIFORM, _manualTemplate] call hull3_gear_fnc_getTemplate;
};

hull3_uniform_fnc_assignUniformTemplate = {
    FUN_ARGS_4(_unit,_class,_gearTemplate,_uniformTemplate);

    DECLARE(_assignables) = [
        ["headGear",                CONFIG_TYPE_TEXT,   hull3_uniform_fnc_assignHeadGear],
        ["goggles",                 CONFIG_TYPE_TEXT,   hull3_uniform_fnc_assignGoggles],
        ["uniform",                 CONFIG_TYPE_TEXT,   hull3_uniform_fnc_assignUniform],
        ["vest",                    CONFIG_TYPE_TEXT,   hull3_uniform_fnc_assignVest],
        ["backpack",                CONFIG_TYPE_TEXT,   hull3_uniform_fnc_assignBackpack]
    ];
    [_unit, _class, _gearTemplate, _uniformTemplate, _assignables] call hull3_uniform_fnc_assignObjectTemplate;
    DEBUG("hull3.uniform.assign",FMT_3("Assigned uniform class '%1' from template '%2' to unit '%3'.",_class,_uniformTemplate,_unit));
};

hull3_uniform_fnc_assignObjectTemplate = {
    FUN_ARGS_5(_object,_class,_gearTemplate,_uniformTemplate,_assignables);

    {
        DECLARE_3(_x,_field,_configType,_assignFunc);
        private ["_configFunc", "_configValue"];
        _configFunc = CONFIG_TYPE_FUNCTIONS select _configType;
        _configValue = ["Gear", _gearTemplate, _class, _field] call _configFunc;
        if (_configValue == "") then {
            _configValue = ["Uniform", _uniformTemplate, _class, _field] call _configFunc;
        };
        [_object, _configValue] call _assignFunc;
    } foreach _assignables;
};

hull3_uniform_fnc_assignHeadGear = {
    FUN_ARGS_2(_unit,_headGear);

    if (_headGear != "") then {
        _unit addHeadgear _headGear;
        TRACE("hull3.uniform.assign",FMT_2("Assigned head gear '%1' to unit '%2'.",_headGear,_unit));
    };
};

hull3_uniform_fnc_assignGoggles = {
    FUN_ARGS_2(_unit,_goggles);

    if (_goggles != "") then {
        _unit addGoggles _goggles;
        TRACE("hull3.uniform.assign",FMT_2("Assigned goggles '%1' to unit '%2'.",_goggles,_unit));
    };
};

hull3_uniform_fnc_assignUniform = {
    FUN_ARGS_2(_unit,_uniform);

    if (_uniform != "") then {
        _unit forceAddUniform _uniform;
        TRACE("hull3.uniform.assign",FMT_2("Assigned uniform '%1' to unit '%2'.",_uniform,_unit));
    };
};

hull3_uniform_fnc_assignVest = {
    FUN_ARGS_2(_unit,_vest);

    if (_vest != "") then {
        _unit addVest _vest;
        TRACE("hull3.uniform.assign",FMT_2("Assigned vest '%1' to unit '%2'.",_vest,_unit));
    };
};

hull3_uniform_fnc_assignBackpack = {
    FUN_ARGS_2(_unit,_ruck);

    if (_ruck != "") then {
        _unit addBackpack _ruck;
        TRACE("hull3.uniform.assign",FMT_2("Assigned ruck '%1' to unit '%2'.",_ruck,_unit));
    };
};