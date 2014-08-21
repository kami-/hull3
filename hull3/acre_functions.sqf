#include "hull_macros.h"

#include "\userconfig\hull3\log\acre.h"
#include "logbook.h"


hull_acre_fnc_preInit = {
    [] call hull_acre_fnc_addEventHandlers;
    hull_acre_isInitialized = false;
    if (isDedicated) then {
        hull_acre_isInitialized = true;
    };
};

hull_acre_fnc_addEventHandlers = {
    ["player.initialized", hull_acre_fnc_playerInit] call hull_event_fnc_addEventHandler;
};

hull_acre_fnc_setPlayerFrequencies = {
    waitUntil {
        !isNil {acre_sys_radio_currentRadioList};
    };
    [] call hull_acre_fnc_setFrequencies;
    hull_acre_isInitialized = true;
    ["acre.initialized", [player]] call hull_event_fnc_emitEvent;
};

hull_acre_fnc_playerInit = {
    DEBUG("hull.acre.jip","ACRE player init called.");
    if ([] call hull_common_fnc_isHeadlessClient) exitWith {};
    if (alive player) then {
        DEBUG("hull.acre.jip","Player is alive, starting spectator check.");
        [] spawn {
            for "_i" from 1 to 60 do {
                DEBUG("hull.acre.jip",FMT_2("Waiting for ACRE to initialize TS ID '%1' and spectator list '%2'.",acre_sys_core_ts3id,ACRE_SPECTATORS_LIST));
                sleep 5;
                if (!isNil {acre_sys_core_ts3id} && {acre_sys_core_ts3id != -1} && {!isNil {ACRE_SPECTATORS_LIST}}) exitWith {}; // wait for ACRE to set ts3id and spectator list
            };
            DEBUG("hull.acre.jip",FMT_2("ACRE init finished with TS ID '%1' and spectator list '%2'.",acre_sys_core_ts3id,ACRE_SPECTATORS_LIST));
            [] call hull_acre_fnc_fixAcreSpectator;
        };
    } else {
        DEBUG("hull.acre.jip","Player is dead, starting setting ACRE spectator to true.");
        [true] call acre_api_fnc_setSpectator;
    };
};

hull_acre_fnc_fixAcreSpectator = {
    if (acre_sys_core_ts3id in ACRE_SPECTATORS_LIST) then {
        DEBUG("hull.acre.jip",FMT_2("TS ID '%1' found in spectator list '%2'.",acre_sys_core_ts3id,ACRE_SPECTATORS_LIST));
        [false] call acre_api_fnc_setSpectator;
        DEBUG("hull.acre.jip","Setting ACRE spectator to false.");
        [] spawn hull_acre_fnc_tsRestartCheck;
    };
};

hull_acre_fnc_tsRestartCheck = {
    waitUntil {
        player sideChat "You are a JIP. Restart your TeamSpeak!";
        sleep 3;
        isNil {acre_sys_io_pipeHandle};
    };
    waitUntil {
        player sideChat "ACRE has not been initialized yet, do not talk!";
        sleep 1;
        !isNil {acre_sys_io_pipeHandle};
    };
    // Just to make sure ACRE initialized properly, wait 5 seconds
    for "_i" from 1 to 5 do {
        player sideChat "ACRE has not been initialized yet, do not talk!";
        sleep 1;
    };
    player sideChat "ACRE has been initialized. You can talk now.";
};

hull_acre_fnc_setFrequencies = {
    [
        ["ACRE", "ShortRange", "default"] call hull_config_fnc_getText,
        ["ACRE", "ShortRange", "radios"] call hull_config_fnc_getArray,
        ["ACRE", "ShortRange", "baseFrequency"] call hull_config_fnc_getNumber,
        ["ACRE", "Steps", "channel"] call hull_config_fnc_getNumber
    ] call hull_acre_fnc_setChannels;
    [
        ["ACRE", "LongRange", "default"] call hull_config_fnc_getText,
        ["ACRE", "LongRange", "radios"] call hull_config_fnc_getArray,
        ["ACRE", "LongRange", "baseFrequency"] call hull_config_fnc_getNumber,
        ["ACRE", "Steps", "channel"] call hull_config_fnc_getNumber
    ] call hull_acre_fnc_setChannels;
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
        if (side player == WEST) exitWith {["ACRE", "Steps", "west"] call hull_config_fnc_getNumber};
        if (side player == EAST) exitWith {["ACRE", "Steps", "east"] call hull_config_fnc_getNumber};
        if (side player == RESISTANCE) exitWith {["ACRE", "Steps", "resistance"] call hull_config_fnc_getNumber};
        ["ACRE", "Steps", "default"] call hull_config_fnc_getNumber;
    };
};