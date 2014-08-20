#include "hull_macros.h"

#include "\userconfig\hull3\log\common.h"
#include "logbook.h"


hull_common_fnc_logOnServer = {
    FUN_ARGS_1(_message);

    if (isDedicated) then {
        [0, {diag_log _this}, _message] call CBA_globalExecute;
    };
    if (isServer) then {
        diag_log _message;
    };
};

hull_common_fnc_isHeadlessClient = {
    (!isNil {hasInterface} && {!hasInterface}) || {!isNil {adm_hc_defaultNames} && {(name player) in adm_hc_defaultNames}};
};