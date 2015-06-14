#include "hull3_macros.h"

class Hull3 {
    isEnabled = 1;

    #include "mission_params.h"

    #include "factions.h"

    class Uniform {
        #include "assign\uniform\Default.h"
        #include "assign\uniform\AAF_DE.h"
        #include "assign\uniform\AAF_WD.h"
        #include "assign\uniform\ARC.h"
        #include "assign\uniform\ASA.h"
        #include "assign\uniform\AUS_WD.h"
        #include "assign\uniform\CAN_DE.h"
        #include "assign\uniform\CAN_WD.h"
        #include "assign\uniform\CN_DE.h"
        #include "assign\uniform\CN_H_DE.h"
        #include "assign\uniform\CN_H_WD.h"
        #include "assign\uniform\CN_MAR.h"
        #include "assign\uniform\CN_WD.h"
        #include "assign\uniform\CSAT.h"
        #include "assign\uniform\CSAT_SN.h"
        #include "assign\uniform\FIA.h"
        #include "assign\uniform\FIN_SN.h"
        #include "assign\uniform\FIN_WD.h"
        #include "assign\uniform\GER_DE.h"
        #include "assign\uniform\GER_WD.h"
        #include "assign\uniform\IRE_DE.h"
        #include "assign\uniform\IRE_WD.h"
        #include "assign\uniform\LVM_DE.h"
        #include "assign\uniform\LVM_WD.h"
        #include "assign\uniform\NATO.h"
        #include "assign\uniform\NATO_H.h"
        #include "assign\uniform\NK_CON.h"
        #include "assign\uniform\NK_REG.h"
        #include "assign\uniform\NOR_DE.h"
        #include "assign\uniform\NOR_WD.h"
        #include "assign\uniform\NPA_DE.h"
        #include "assign\uniform\NPA_WD.h"
        #include "assign\uniform\NZ.h"
        #include "assign\uniform\PMC_OD.h"
        #include "assign\uniform\ROK_WD.h"
        #include "assign\uniform\RU_AB.h"
        #include "assign\uniform\RU_DE.h"
        #include "assign\uniform\RU_H_DE.h"
        #include "assign\uniform\RU_H_WD.h"
        #include "assign\uniform\RU_WD_DIG.h"
        #include "assign\uniform\RU_WD_FL.h"
        #include "assign\uniform\RU_WD_TT.h"
        #include "assign\uniform\USA_ACU.h"
        #include "assign\uniform\USA_DE.h"
        #include "assign\uniform\USA_RAN.h"
        #include "assign\uniform\USA_WD.h"
        #include "assign\uniform\USMC_DE.h"
        #include "assign\uniform\USMC_SN.h"
        #include "assign\uniform\USMC_WD.h"

        unitBaseClass = "Rifleman";
    };

    class Gear {
        #include "assign\gear\Default.h"
        #include "assign\gear\AK12_RU.h"
        #include "assign\gear\AK47_NK.h"
        #include "assign\gear\AK74_CN.h"
        #include "assign\gear\AK74_NK.h"
        #include "assign\gear\AK74_RU.h"
        #include "assign\gear\AKM_NPA.h"
        #include "assign\gear\AKS74_CN.h"
        #include "assign\gear\AKS74_RU.h"
        #include "assign\gear\AR15_ASA.h"
        #include "assign\gear\AUGA3_AUS.h"
        #include "assign\gear\AUGA3_IRE.h"
        #include "assign\gear\AUGA3_NZ.h"
        #include "assign\gear\FAL_ARC.h"
        #include "assign\gear\FAL_PMC.h"
        #include "assign\gear\G3KA4_NOR.h"
        #include "assign\gear\Katiba_CN.h"
        #include "assign\gear\Katiba_CSAT.h"
        #include "assign\gear\M16A2_US.h"
        #include "assign\gear\M16A4_CAN.h"
        #include "assign\gear\M16A4_ROK.h"
        #include "assign\gear\M16A4_USMC.h"
        #include "assign\gear\M4A1_US.h"
        #include "assign\gear\M4_US.h"
        #include "assign\gear\MIX_LVM.h"
        #include "assign\gear\Mk20_AAF_DE.h"
        #include "assign\gear\Mk20_AAF_WD.h"
        #include "assign\gear\MX_NATO.h"
        #include "assign\gear\SCAR_L_US.h"
        #include "assign\gear\TRG_FIA.h"
        #include "assign\gear\VZ58_FIN.h"

        unitBaseClass = "Rifleman";
        vehicleBaseClass = "Vehicle";
    };

    class Briefing {
        blufor = ADDON_PATH(briefing\blufor.sqf);
        opfor = ADDON_PATH(briefing\opfor.sqf);
        indfor = ADDON_PATH(briefing\indfor.sqf);
        civilian = ADDON_PATH(briefing\civilian.sqf);
    };

    class Group {
        assignedTeams[] = {
            {"FTL", "RED"},
            {"AR", "BLUE"},
            {"AAR", "BLUE"},
            {"RAT", "RED"}
        };
    };

    class Marker {
        isGroupEnabled = 1;
        isFireTeamEnabled = 1;

        defaultDelay = 4;

        class MedicMarker {
            size[] = {0.5, 0.5};
        };

        class FireTeamMemberMarker {
            color = "ColorYellow";
            size[] = {0.6, 0.6};
        };

        class DefaultCustomMarker {
            shape = "ICON";
            type = "Dot";
            color = "ColorPink";
            size[] = {1, 1};
            text = "";
        };
    };

    class ACRE {
        revealToAi = 1;                                 // http://acre.idi-systems.com/api/api_general.html#acre_api_fnc_setRevealToAI
        lossModelScale = 1;                             // http://acre.idi-systems.com/api/api_general.html#acre_api_fnc_setLossModelScale
        fullDuplex = 0;                                 // http://acre.idi-systems.com/api/api_general.html#acre_api_fnc_setFullDuplex
        interference = 1;                               // http://acre.idi-systems.com/api/api_general.html#acre_api_fnc_setInterference

        class Babel {
            languages[] = {
                {"west", "WEST"},
                {"east", "EAST"},
                {"guer", "GUER"},
                {"civ", "CIV"}
            };
        };

        class ShortRange {
            baseFrequency = 2400;
            radios[] = {"ACRE_PRC343"};
        };

        class LongRange {
            baseFrequency = 32;
            channelNames[] = {"Command", "Air"};
            radios[] = {"ACRE_PRC148", "ACRE_PRC152", "ACRE_PRC117F"};
        };

        class Radio {
            class ACRE_PRC343 {
                channelCount = 256;
            };

            class ACRE_PRC148 {
                channelCount = 32;
                channelNameField = "label";
                power = 5000;
            };

            class ACRE_PRC152 {
                channelCount = 99;
                channelNameField = "description";
                power = 5000;
            };

            class ACRE_PRC117F {
                channelCount = 100;
                channelNameField = "name";
                power = 2000;
            };
        };

        class Steps {
            channel = 1;
            west = 0.2;
            east = 0.4;
            resistance = 0.6;
            default = 0.8;
        };
    };

    class General {
        addRating = 999999;                             // Rating added to units, to supress negative ratings
        BIS_noCoreConversations = 1;                    // Disables BIS unit conversations
        enableSaving = 0;                               // Enables game saving
    };

    class GarbageCollector {
        isEnabled = 1;
        canRemoveCorpses = 1;
        canRemoveWrecks = 1;
        canRemoveGroups = 1;
        corpseLimit = 60;
        corpseMaxTime = 600;
        wreckLimit = 10;
        wreckMaxTime = 600;
        groupMaxTime = 360;
        maxTimeModifier = 0.75;
    };
};