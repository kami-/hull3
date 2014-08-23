#include "hull3_macros.h"

#include "\userconfig\hull3\log\config.h"
#include "logbook.h"


hull3_config_fnc_getConfig = {
    DECLARE(_config) = HULL3_MISSION_CONFIG_FILE;
    {
        _config = _config >> _x;
    } foreach _this;
    if (configName _config == "") then {
        _config = HULL3_CONFIG_FILE;
        {
            _config = _config >> _x;
        } foreach _this;
    };

    _config;
};

hull3_config_fnc_getArray = {
    getArray (_this call hull3_config_fnc_getConfig);
};

hull3_config_fnc_getText = {
    getText (_this call hull3_config_fnc_getConfig);
};

hull3_config_fnc_getNumber = {
    getNumber (_this call hull3_config_fnc_getConfig);
};

hull3_config_fnc_getBool = {
    getNumber (_this call hull3_config_fnc_getConfig) == 1;
};