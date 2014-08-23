#include "hull3_macros.h"

#include "\userconfig\hull3\log\postinit.h"
#include "logbook.h"


if (hull3_isEnabled) then {
    [] call hull3_settings_fnc_init;

    if (!isDedicated) then {
        [] spawn hull3_unit_fnc_playerInit;
        if (isServer) then {
            [] call hull3_mission_fnc_serverInit;
            [hull3_gear_fnc_tryAssignRadios] spawn hull3_unit_fnc_foreachNonPlayerUnits;
        };
    } else {
        [] call hull3_mission_fnc_serverInit;
        [hull3_gear_fnc_tryAssignRadios] spawn hull3_unit_fnc_foreachNonPlayerUnits;
    };
};