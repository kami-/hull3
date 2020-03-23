class CUP_USMC_WD {
    class Rifleman {
        headGear = "CUP_H_USMC_HelmetWDL";
        goggles = "";
        uniform = "CUP_U_B_USMC_MARPAT_WDL_Sleeves";
        vest = "CUP_V_B_MTV_Pouches_ARM";
        backpack = "ark_backpack_med";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads";
        vest = "CUP_V_B_MTV_TL_ARM";
        headGear = "CUP_H_USMC_Goggles_HelmetWDL";
    };

    class Officer : Leader {
        headGear = "CUP_H_USMC_Headset_GoggleW_HelmetWDL";
        uniform = "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads";
        vest = "CUP_V_B_MTV_PistolBlack_ARM";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "CUP_U_B_USMC_MARPAT_WDL_RolledUp";
        goggles = "CUP_FR_NeckScarf2";
        vest = "V_Rangemaster_belt_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
        headGear = "CUP_H_FR_Cap_Officer_Headset";
        uniform = "CUP_U_B_USMC_Officer";
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "ark_backpack_large";
        uniform = "CUP_U_B_USMC_MARPAT_WDL_RolledUp";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads";
        vest = "CUP_V_B_MTV_MG_ARM";
        headGear = "CUP_H_USMC_Headset_GoggleW_HelmetWDL";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        uniform = "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads";
        vest = "CUP_V_B_MTV_Patrol_ARM";
        headGear = "CUP_H_USMC_Goggles_HelmetWDL";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
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
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
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
        uniform = "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_USMC_Headset_GoggleW_HelmetWDL";
        goggles = "G_Bandanna_khk";
        uniform = "CUP_U_B_FR_Officer";
        vest = "CUP_V_B_MTV_Marksman_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "CUP_H_USMC_Helmet_Pilot";
        uniform = "CUP_U_B_USMC_PilotOverall";
        vest = "CUP_V_B_PilotVest_ARM";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };

};
