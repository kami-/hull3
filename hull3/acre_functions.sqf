#include "hull3_macros.h"
#include "\idi\clients\acre\addons\api\script_component.hpp"
#define PUSH(ARRAY,VAL) (ARRAY) pushBack (VAL) // Fix for ACRE2's pushBack missing parens for value

#include "\userconfig\hull3\log\acre.h"
#include "logbook.h"

#define ACRE_SIDES                                  [WEST, EAST, RESISTANCE, CIVILIAN]



hull3_acre_fnc_preInit = {
    [] call hull3_acre_fnc_addEventHandlers;
    hull3_acre_isInitialized = false;
    DEBUG("hull3.acre","ACRE functions preInit finished.");
};

hull3_acre_fnc_addEventHandlers = {
    if (!isDedicated) then {
        ["player.initialized", hull3_acre_fnc_setSpokenLanguages] call hull3_event_fnc_addEventHandler;
    };
};

hull3_acre_fnc_postInit = {
    [] call hull3_acre_fnc_setSettings;
    [] call hull3_acre_fnc_setupPresets;
    [] call hull3_acre_fnc_addLanguages;
    hull3_acre_isInitialized = true;
    ["acre.initialized", [player]] call hull3_event_fnc_emitEvent;
};

hull3_acre_fnc_setSettings = {
    DECLARE(_value) = ["ACRE", "revealToAi"] call hull3_config_fnc_getBool;
    [_value] call acre_api_fnc_setRevealToAI;
    DEBUG("hull3.acre.settings",FMT_1("Set 'revealToAi' to '%1'.",_value));
    _value = ["ACRE", "lossModelScale"] call hull3_config_fnc_getNumber;
    [_value] call acre_api_fnc_setLossModelScale;
    DEBUG("hull3.acre.settings",FMT_1("Set 'lossModelScale' to '%1'.",_value));
    _value = ["ACRE", "fullDuplex"] call hull3_config_fnc_getBool;
    [_value] call acre_api_fnc_setFullDuplex;
    DEBUG("hull3.acre.settings",FMT_1("Set 'fullDuplex' to '%1'.",_value));
    _value = ["ACRE", "interference"] call hull3_config_fnc_getBool;
    [_value] call acre_api_fnc_setInterference;
    DEBUG("hull3.acre.settings",FMT_1("Set 'interference' to '%1'.",_value));
};

hull3_acre_fnc_addLanguages = {
    DECLARE(_languages) = ["ACRE", "Babel", "languages"] call hull3_config_fnc_getArray;
    {
        _x call acre_api_fnc_babelAddLanguageType;
        DEBUG("hull3.acre.babel",FMT_2("Added language with ID '%1' and name '%2'.",_x select 0,_x select 1));
    } foreach _languages;
};

hull3_acre_fnc_setSpokenLanguages = {
    FUN_ARGS_1(_unit);

    private ["_factionLanguages", "_unitLanguages", "_languages", "_spokenLanguages"];
    _factionLanguages = [FACTION_CONFIG, faction _unit, "languages"] call hull3_config_fnc_getBothArray;
    _unitLanguages = [_unit getVariable ["hull3_init_entries", []], "languages"] call hull3_config_fnc_getEntry;
    _languages = [];
    PUSH_ALL(_languages,_factionLanguages);
    PUSH_ALL(_languages,_unitLanguages);
    _spokenLanguages = [];
    {
        if ((floor random 100) + 1 <= _x select 1) then {
            PUSH(_spokenLanguages,_x select 0);
        };
    } foreach _languages;
    _spokenLanguages call acre_api_fnc_babelSetSpokenLanguages;
    DEBUG("hull3.acre.babel",FMT_2("Set spoken languages of unit '%1' to '%2'.",_unit,_spokenLanguages));
};

hull3_acre_fnc_setupPresets = {
    [] call hull3_acre_fnc_setupSidePresets;
    [] call hull3_acre_fnc_setupUserPresets;
};

hull3_acre_fnc_setupSidePresets = {
    {
        [_x] call hull3_acre_fnc_setupSideShortRangePreset;
        [_x] call hull3_acre_fnc_setupSideLongRangePreset;
    } foreach ACRE_SIDES;
};

hull3_acre_fnc_setupUserPresets = {
    private ["_shortRangeRadios", "_longRangeRadios", "_radios", "_presetName"];
    _shortRangeRadios = ["ACRE", "ShortRange", "radios"] call hull3_config_fnc_getArray;
    _longRangeRadios = ["ACRE", "LongRange", "radios"] call hull3_config_fnc_getArray;
    _radios = [];
    PUSH_ALL(_radios,_shortRangeRadios);
    PUSH_ALL(_radios,_longRangeRadios);
    _presetName = toLower str side player;
    {
        [_x, _presetName] call acre_api_fnc_setPreset;
    } foreach _radios;
};

hull3_acre_fnc_setupSideShortRangePreset = {
    FUN_ARGS_1(_side);

    private ["_baseFrequency", "_channelStep", "_sideStep", "_presetName", "_radios"];
    _baseFrequency = ["ACRE", "ShortRange", "baseFrequency"] call hull3_config_fnc_getNumber;
    _channelStep = ["ACRE", "Steps", "channel"] call hull3_config_fnc_getNumber;
    _sideStep = [_side] call hull3_acre_fnc_getSideStep;
    _presetName = toLower str _side;
    _radios = ["ACRE", "ShortRange", "radios"] call hull3_config_fnc_getArray;
    {
        [_x, _baseFrequency, _channelStep, _sideStep, _presetName, {}, []] call hull3_acre_fnc_setRadioPresetFrequencies;
    } foreach _radios;
};

hull3_acre_fnc_setupSideLongRangePreset = {
    FUN_ARGS_1(_side);

    private ["_baseFrequency", "_channelStep", "_sideStep", "_presetName", "_radios"];
    _baseFrequency = ["ACRE", "LongRange", "baseFrequency"] call hull3_config_fnc_getNumber;
    _channelStep = ["ACRE", "Steps", "channel"] call hull3_config_fnc_getNumber;
    _sideStep = [_side] call hull3_acre_fnc_getSideStep;
    _presetName = toLower str _side;
    _radios = ["ACRE", "LongRange", "radios"] call hull3_config_fnc_getArray;
    _channelNames = ["ACRE", "LongRange", "channelNames"] call hull3_config_fnc_getArray;
    {
        [_x, _baseFrequency, _channelStep, _sideStep, _presetName, hull3_acre_fnc_setLongRangeRadioFields, [_x, _presetName, _channelNames]] call hull3_acre_fnc_setRadioPresetFrequencies;
    } foreach _radios;
};

hull3_acre_fnc_setRadioPresetFrequencies = {
    FUN_ARGS_7(_radio,_baseFrequency,_channelStep,_sideStep,_presetName,_fieldFunc,_fieldFuncArgs);

    DECLARE(_channelCount) = ["ACRE", "Radio", _radio, "channelCount"] call hull3_config_fnc_getNumber;
    [_radio, "default", _presetName] call acre_api_fnc_copyPreset;
    for "_i" from 0 to (_channelCount - 1) do {
        private ["_frequency", "_channelIndex"];
        _frequency = _baseFrequency + _i * _channelStep + _sideStep;
        _channelIndex = _i + 1;
        [_radio, _presetName, _channelIndex, "frequencyTX", _frequency] call acre_api_fnc_setPresetChannelField;
        TRACE("hull3.acre.radio.preset",FMT_4("Set 'frequencyTX' field to '%1' of channel '%2' in preset '%3' of radio '%4'.",_frequency,_channelIndex,_presetName,_radio));
        [_radio, _presetName, _channelIndex, "frequencyRX", _frequency] call acre_api_fnc_setPresetChannelField;
        TRACE("hull3.acre.radio.preset",FMT_4("Set 'frequencyRX' field to '%1' of channel '%2' in preset '%3' of radio '%4'.",_frequency,_channelIndex,_presetName,_radio));
        DECLARE(_newFieldFuncArgs) = +_fieldFuncArgs;
        PUSH(_newFieldFuncArgs,_i);
        _newFieldFuncArgs call _fieldFunc;
    };
};

hull3_acre_fnc_setLongRangeRadioFields = {
    FUN_ARGS_4(_radio,_presetName,_channelNames,_channelArrayIndex);

    private ["_channelNameField", "_channelName", "_power", "_channelIndex"];
    _channelNameField = ["ACRE", "Radio", _radio, "channelNameField"] call hull3_config_fnc_getText;
    _channelName = if (_channelArrayIndex < count _channelNames) then {
        _channelNames select _channelArrayIndex
    } else {
        format ["%1 %2", toLower str _side, _channelArrayIndex + 1]
    };
    _power = ["ACRE", "Radio", _x, "power"] call hull3_config_fnc_getNumber;
    _channelIndex = _channelArrayIndex + 1;
    [_radio, _presetName, _channelIndex, _channelNameField, _channelName] call acre_api_fnc_setPresetChannelField;
    TRACE("hull3.acre.radio.preset",FMT_5("Set '%1' field to '%2' of channel '%3' in preset '%4' of radio '%5'.",_channelNameField,_channelName,_channelIndex,_presetName,_radio));
    [_radio, _presetName, _channelIndex, "power", _power] call acre_api_fnc_setPresetChannelField;
    TRACE("hull3.acre.radio.preset",FMT_4("Set 'power' field to '%1' of channel '%2' in preset '%3' of radio '%4'.",_power,_channelIndex,_presetName,_radio));
};

hull3_acre_fnc_getSideStep = {
    FUN_ARGS_1(_side);

    call {
        if (_side == WEST) exitWith {["ACRE", "Steps", "west"] call hull3_config_fnc_getNumber};
        if (_side == EAST) exitWith {["ACRE", "Steps", "east"] call hull3_config_fnc_getNumber};
        if (_side == RESISTANCE) exitWith {["ACRE", "Steps", "resistance"] call hull3_config_fnc_getNumber};
        ["ACRE", "Steps", "default"] call hull3_config_fnc_getNumber;
    };
};