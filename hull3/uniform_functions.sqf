#include "hull3_macros.h"

#include "\userconfig\hull3\log\uniform.h"
#include "logbook.h"



hull3_uniform_fnc_preInit = {
    hull3_uniform_unitBaseClass = [TYPE_CLASS_UNIFORM, "unitBaseClass"] call hull3_config_fnc_getText;
    DEBUG("hull3.uniform","Uniform functions preInit finished.");
};

hull3_uniform_fnc_safeAssignUniform = {
    FUN_ARGS_5(_unit,_gearTemplate,_uniformTemplate,_gearClass,_lastStatement);

    private _statements = [];
    _statements append ([_unit, _uniformTemplate] call hull3_uniform_fnc_getUniformInitStatements);
    _statements append ([_unit, _gearTemplate, _uniformTemplate, _gearClass] call hull3_uniform_fnc_getAssignUniformTemplateStatements);
    _statements pushBack _lastStatement;
    [{
        private _statements = _this select 0;
        if (count _statements == 0) exitWith {
              DEBUG("hull3.uniform.assign.safe","Statement queue is empty, removing safe assign handler.");
              [_this select 1] call CBA_fnc_removePerFrameHandler;
        };
        TRACE("hull3.uniform.assign.safe",FMT_2("Executing statement in frame '%1' with '%2' statements left in queue!",diag_frameno,count _statements));
        (_statements select 0 select 1) call (_statements select 0 select 0);
        _statements deleteAt 0;
    }, 0, _statements] call CBA_fnc_addPerFrameHandler;
};

hull3_uniform_fnc_getUniformInitStatements = {
    FUN_ARGS_2(_unit,_template);

    _unit setVariable ["hull3_uniform_template", _template, true];
    [ [{ removeHeadgear _this; }, _unit]
    , [{ removeGoggles _this; }, _unit]
    , [{ removeUniform _this; }, _unit]
    , [{ removeVest _this; }, _unit]
    , [{ removeBackpack _this; }, _unit]
    , [{ DEBUG("hull3.uniform.assign",FMT_1("Initialized unit '%1' uniform.",_this)); }, _unit]
    ]
};

hull3_uniform_fnc_getTemplate = {
    FUN_ARGS_3(_unit,_factionEntry,_uniformEntry);

    DECLARE(_uniformTemplate) = DEFAULT_TEMPLATE_NAME;
    if (count _uniformEntry > 0) then {
        if (isClass ([TYPE_CLASS_UNIFORM, _uniformEntry select 0] call hull3_config_fnc_getConfig)) then {
            _uniformTemplate = _uniformEntry select 0;
        } else {
            WARN("hull3.uniform.assign",FMT_2("No uniform template found with name '%1' for unit '%2'!",_uniformEntry select 1,_unit));
        };
    } else {
        DECLARE(_faction) = if (count _factionEntry > 0) then { _factionEntry select 0 } else { faction _unit };
        _uniformTemplate = [FACTION_CONFIG, _faction, TYPE_FIELD_UNIFORM] call hull3_config_fnc_getText;
    };

    _uniformTemplate;
};

hull3_uniform_fnc_getAssignUniformTemplateStatements = {
    FUN_ARGS_4(_unit,_gearTemplate,_uniformTemplate,_gearClass);

    DECLARE(_assignables) = [
        ["headGear",                CONFIG_TYPE_TEXT,   hull3_uniform_fnc_assignHeadGear],
        ["goggles",                 CONFIG_TYPE_TEXT,   hull3_uniform_fnc_assignGoggles],
        ["uniform",                 CONFIG_TYPE_TEXT,   hull3_uniform_fnc_assignUniform],
        ["vest",                    CONFIG_TYPE_TEXT,   hull3_uniform_fnc_assignVest],
        ["backpack",                CONFIG_TYPE_TEXT,   hull3_uniform_fnc_assignBackpack]
    ];
    private _statements = [];
    {
        _statements pushBack [hull3_uniform_fnc_assignAssignableToObject, [_unit, _gearTemplate, _uniformTemplate, _gearClass, _x]];
    } foreach _assignables;
    _statements pushBack [{
        DEBUG("hull3.uniform.assign",FMT_3("Assigned uniform class '%1' from template '%2' to unit '%3'.",_this select 0,_this select 1,_this select 2))
    }, [_gearClass, _uniformTemplate, _unit]];

    _statements;
};

hull3_uniform_fnc_assignAssignableToObject = {
    FUN_ARGS_5(_object,_gearTemplate,_uniformTemplate,_gearClass,_assignable);

    DECLARE_3(_assignable,_field,_configType,_assignFunc);
    private ["_configFunc", "_configValue"];
    _configFunc = CONFIG_TYPE_FUNCTIONS select _configType;
    _configValue = [TYPE_CLASS_GEAR, _gearTemplate, _gearClass, _field] call _configFunc;
    if (_configValue == "") then {
        _configValue = [TYPE_CLASS_UNIFORM, _uniformTemplate, _gearClass, _field] call _configFunc;
    };
    [_object, _configValue] call _assignFunc;
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