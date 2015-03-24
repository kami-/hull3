#include "hull3_macros.h"

class Hull3 {
    isEnabled = 1;

    #include "mission_params.h"

    #include "assign\factions.h"

    class Uniform {
        #include "assign\uniform\Default.h"
        #include "assign\uniform\Russian.h"

        unitBaseClass = "Rifleman";
    };

    class Gear {
        #include "assign\gear\Default.h"
        #include "assign\gear\AK74_RU.h"
        #include "assign\gear\AK74_SEP.h"
        #include "assign\gear\Katiba.h"
        #include "assign\gear\L85.h"
        #include "assign\gear\M16A4_USMC.h"
        #include "assign\gear\M4SOC.h"
        #include "assign\gear\Mk20.h"
        #include "assign\gear\MX.h"
        #include "assign\gear\Tavor.h"

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
        class ShortRange {
            default = "ACRE_PRC343";
            radios[] = {"ACRE_PRC343"};
            baseFrequency = 2400;
        };

        class LongRange {
            default = "ACRE_PRC343";
            radios[] = {"ACRE_PRC148", "ACRE_PRC148_UHF", "ACRE_PRC117F", "ACRE_PRC119", "ACRE_PRC152"};
            baseFrequency = 32;
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