class CUP_CZ_WD {
    class Rifleman {
        headGear = "CUP_H_CZ_Helmet03";
        goggles = "";
        uniform = "CUP_U_B_CZ_WDL_NoKneepads";
        vest = "CUP_V_CZ_NPP2006_nk_vz95_ARM";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
        vest = "CUP_V_CZ_NPP2006_vz95_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_CZ_Hat01";
        uniform = "CUP_U_B_CZ_WDL_Kneepads_Gloves";
        vest = "CUP_V_CZ_NPP2006_co_vz95_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_WDL";
        uniform = "CUP_U_B_CZ_WDL_TShirt";
        vest = "CUP_V_CZ_NPP2006_light_vz95_ARM";
        backpack = "B_AssaultPack_rgr";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "B_Carryall_oli";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_CZ_Helmet04";
        vest = "CUP_V_CZ_NPP2006_ok_vz95_ARM";
        backpack = "B_Carryall_oli";
    };

    class FTL : Leader {
        vest = "CUP_V_CZ_NPP2006_co_vz95_ARM";
    };

    class AR : Rifleman {
        headGear = "CUP_H_CZ_Helmet04";
        uniform = "CUP_U_B_CZ_WDL_TShirt";
    };

    class AAR : Rifleman {
        headGear = "CUP_H_CZ_Helmet04";
        backpack = "B_Carryall_oli";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_oli";
    };

    class MMGAG : AAR {
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "B_Carryall_oli";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_oli";
    };

    class HATAG : AAR {
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_CZ_Hat02";
        goggles = "";
        uniform = "CUP_U_B_CZ_WDL_TShirt";
        vest = "CUP_V_CZ_NPP2006_vz95_ARM";
        backpack = "B_AssaultPack_rgr";
    };

    class SP : SN {
        headGear = "CUP_H_CZ_Hat03";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_PilotHelmetHeli_B";
        uniform = "CUP_U_B_CZ_Pilot_WDL";
        vest = "CUP_V_CZ_NPP2006_light_vz95_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_B";
    };

};
