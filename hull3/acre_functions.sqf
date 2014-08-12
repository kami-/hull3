#include "hull_macros.h"

#define HULL_ACRE_SHORTRANGE_DEFAULT     "ACRE_PRC343"
#define HULL_ACRE_SHORTRANGE_RADIOS      ["ACRE_PRC343"]
#define HULL_ACRE_SHORTRANGE_BASEFREQ    2400

#define HULL_ACRE_LONGRANGE_DEFAULT      "ACRE_PRC148"
#define HULL_ACRE_LONGRANGE_RADIOS       ["ACRE_PRC148", "ACRE_PRC148_UHF", "ACRE_PRC117F", "ACRE_PRC119", "ACRE_PRC152"]
#define HULL_ACRE_LONGRANGE_BASEFREQ     32

#define HULL_ACRE_CHANNELSTEP            1

#define HULL_ACRE_SIDE_WESTSTEP          0.2
#define HULL_ACRE_SIDE_EASTSTEP          0.4
#define HULL_ACRE_SIDE_RESISTANCESTEP    0.6
#define HULL_ACRE_SIDE_DEFAULTSTEP       0.8



hull_acre_fnc_preInit = {
    hull_acre_isInitialized = false;
    if (isDedicated) then {
        hull_acre_isInitialized = true;
    };
};

hull_acre_fnc_setPlayerFrequencies = {
    waitUntil {
        !isNil {acre_sys_radio_currentRadioList};
    };
    [] call hull_acre_fnc_setFrequencies;
    hull_acre_isInitialized = true;
    ["acre.initialized", [player]] call hull_event_fnc_emitEvent;
};

hull_acre_fnc_setFrequencies = {
    [HULL_ACRE_SHORTRANGE_DEFAULT, HULL_ACRE_SHORTRANGE_RADIOS, HULL_ACRE_SHORTRANGE_BASEFREQ, HULL_ACRE_CHANNELSTEP] call hull_acre_fnc_setChannels;
    [HULL_ACRE_LONGRANGE_DEFAULT, HULL_ACRE_LONGRANGE_RADIOS, HULL_ACRE_LONGRANGE_BASEFREQ, HULL_ACRE_CHANNELSTEP] call hull_acre_fnc_setChannels;
};

hull_acre_fnc_setChannels = {
    FUN_ARGS_4(_defaultRadio,_radios,_baseFreq,_channelStep);

    private ["_sideStep", "_channelCount", "_calculatedChannels"];
    _sideStep = [player] call hull_acre_fnc_getSideStep;
    _channelCount = count ([_defaultRadio] call acre_api_fnc_getDefaultChannels);
    _calculatedChannels = [_channelCount, _baseFreq, _channelStep, _sideStep] call hull_acre_fnc_getCalculatedChannels;
    {
        [_x, _calculatedChannels] call acre_api_fnc_setDefaultChannels;
    } foreach _radios;
};

hull_acre_fnc_getCalculatedChannels = {
    FUN_ARGS_4(_channelCount,_baseFreq,_channelStep,_sideStep);

    private ["_newChannels"];
    _newChannels = [];
    for "_i" from 1 to _channelCount do {
        PUSH(_newChannels,_baseFreq + _i * _channelStep + _sideStep);
    };

    _newChannels;
};

hull_acre_fnc_getSideStep = {
    FUN_ARGS_1(_unit);
    call {
        if (side player == WEST) exitWith {HULL_ACRE_SIDE_WESTSTEP};
        if (side player == EAST) exitWith {HULL_ACRE_SIDE_EASTSTEP};
        if (side player == RESISTANCE) exitWith {HULL_ACRE_SIDE_RESISTANCESTEP};
        HULL_ACRE_SIDE_DEFAULTSTEP;
    };
};