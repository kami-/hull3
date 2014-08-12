#include "hull_macros.h"

hull_common_fnc_logOnServer = {
    FUN_ARGS_1(_message);

    if (isDedicated) then {
        [0, {diag_log _this}, _message] call CBA_globalExecute;
    };
    if (isServer) then {
        diag_log _message;
    };
};