#include "hull3_macros.h"

#include "\userconfig\hull3\log\acre.h"
#include "logbook.h"


hull3_acre_fnc_preInit = {
    [] call hull3_acre_fnc_addEventHandlers;
    hull3_acre_isInitialized = false;
    if (isDedicated) then {
        hull3_acre_isInitialized = true;
    };
    DEBUG("hull3.acre","ACRE functions preInit finished.");
};

hull3_acre_fnc_addEventHandlers = {
    ["player.initialized", hull3_acre_fnc_playerInit] call hull3_event_fnc_addEventHandler;
    ["player.respawned", hull3_acre_fnc_tryEnableAcreSpectator] call hull3_event_fnc_addEventHandler;
};

hull3_acre_fnc_setPlayerFrequencies = {
    waitUntil {
        !isNil {acre_sys_radio_currentRadioList};
    };
    [] call hull3_acre_fnc_setFrequencies;
    hull3_acre_isInitialized = true;
    ["acre.initialized", [player]] call hull3_event_fnc_emitEvent;
};

hull3_acre_fnc_playerInit = {
    DEBUG("hull3.acre.jip","ACRE player init called.");
    if ([] call hull3_common_fnc_isHeadlessClient) exitWith {
        DEBUG("hull3.acre.jip","Player is an HC, no ACRE check is ommited.");
    };
    if (alive player) then {
        DEBUG("hull3.acre.jip","Player is alive, starting spectator check.");
        [] spawn {
            for "_i" from 1 to 60 do {
                TRACE("hull3.acre.jip",FMT_2("Waiting for ACRE to initialize TS ID '%1' and spectator list '%2'.",acre_sys_core_ts3id,ACRE_SPECTATORS_LIST));
                sleep 5;
                if (!isNil {acre_sys_core_ts3id} && {acre_sys_core_ts3id != -1} && {!isNil {ACRE_SPECTATORS_LIST}}) exitWith {}; // wait for ACRE to set ts3id and spectator list
            };
            DEBUG("hull3.acre.jip",FMT_2("ACRE init finished with TS ID '%1' and spectator list '%2'.",acre_sys_core_ts3id,ACRE_SPECTATORS_LIST));
            [] call hull3_acre_fnc_fixAcreSpectator;
        };
    } else {
        DEBUG("hull3.acre.jip","Player is dead, setting ACRE spectator to true.");
        [true] call acre_api_fnc_setSpectator;
    };
};

hull3_acre_fnc_tryEnableAcreSpectator = {
    FUN_ARGS_1(_unit);

    if (typeof _unit != "seagull") then {
        [true] call acre_api_fnc_setSpectator;
    };
};

hull3_acre_fnc_fixAcreSpectator = {
    if (acre_sys_core_ts3id in ACRE_SPECTATORS_LIST) then {
        DEBUG("hull3.acre.jip",FMT_2("TS ID '%1' found in spectator list '%2'. Setting ACRE spectator to false.",acre_sys_core_ts3id,ACRE_SPECTATORS_LIST));
        [false] call acre_api_fnc_setSpectator;
        [] spawn hull3_acre_fnc_tsRestartCheck;
    };
};

hull3_acre_fnc_tsRestartCheck = {
    DEBUG("hull3.acre.jip","Waiting for the player to close TS.");
    waitUntil {
        player sideChat "You are a JIP. Restart your TeamSpeak!";
        sleep 3;
        isNil {acre_sys_io_pipeHandle};
    };
    DEBUG("hull3.acre.jip","TS is closed. Waiting for ACRE to initialize.");
    waitUntil {
        player sideChat "ACRE has not been initialized yet, do not talk!";
        sleep 1;
        !isNil {acre_sys_io_pipeHandle};
    };
    DEBUG("hull3.acre.jip","ACRE has been initialized. Waiting 5 seconds to just to be sure.");
    // Just to make sure ACRE initialized properly, wait 5 seconds
    for "_i" from 1 to 5 do {
        player sideChat "ACRE has not been initialized yet, do not talk!";
        sleep 1;
    };
    player sideChat "ACRE has been initialized. You can talk now.";
    DEBUG("hull3.acre.jip","Player can talk now.");
};

hull3_acre_fnc_setFrequencies = {
    [
        ["ACRE", "ShortRange", "default"] call hull3_config_fnc_getText,
        ["ACRE", "ShortRange", "radios"] call hull3_config_fnc_getArray,
        ["ACRE", "ShortRange", "baseFrequency"] call hull3_config_fnc_getNumber,
        ["ACRE", "Steps", "channel"] call hull3_config_fnc_getNumber
    ] call hull3_acre_fnc_setChannels;
    [
        ["ACRE", "LongRange", "default"] call hull3_config_fnc_getText,
        ["ACRE", "LongRange", "radios"] call hull3_config_fnc_getArray,
        ["ACRE", "LongRange", "baseFrequency"] call hull3_config_fnc_getNumber,
        ["ACRE", "Steps", "channel"] call hull3_config_fnc_getNumber
    ] call hull3_acre_fnc_setChannels;
};

hull3_acre_fnc_setChannels = {
    FUN_ARGS_4(_defaultRadio,_radios,_baseFreq,_channelStep);

    private ["_sideStep", "_channelCount", "_calculatedChannels"];
    _sideStep = [player] call hull3_acre_fnc_getSideStep;
    _channelCount = count ([_defaultRadio] call acre_api_fnc_getDefaultChannels);
    _calculatedChannels = [_channelCount, _baseFreq, _channelStep, _sideStep] call hull3_acre_fnc_getCalculatedChannels;
    {
        [_x, _calculatedChannels] call acre_api_fnc_setDefaultChannels;
        TRACE("hull3.acre.radio",FMT_2("Set default channels to '%1' for radio '%2'.",_calculatedChannels,_x));
    } foreach _radios;
    DEBUG("hull3.acre.radio",FMT_4("Set channels for radios '%1' using default radion '%2' with base frequency '%3' and channel step '%4'.",_radios,_defaultRadio,_baseFreq,_channelStep));
};

hull3_acre_fnc_getCalculatedChannels = {
    FUN_ARGS_4(_channelCount,_baseFreq,_channelStep,_sideStep);

    private ["_newChannels"];
    _newChannels = [];
    for "_i" from 1 to _channelCount do {
        PUSH(_newChannels,_baseFreq + _i * _channelStep + _sideStep);
    };

    _newChannels;
};

hull3_acre_fnc_getSideStep = {
    FUN_ARGS_1(_unit);
    call {
        if (side player == WEST) exitWith {["ACRE", "Steps", "west"] call hull3_config_fnc_getNumber};
        if (side player == EAST) exitWith {["ACRE", "Steps", "east"] call hull3_config_fnc_getNumber};
        if (side player == RESISTANCE) exitWith {["ACRE", "Steps", "resistance"] call hull3_config_fnc_getNumber};
        ["ACRE", "Steps", "default"] call hull3_config_fnc_getNumber;
    };
};