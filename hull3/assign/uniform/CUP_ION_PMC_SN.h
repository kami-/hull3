class CUP_ION_PMC_SN {
    class Rifleman {
        headGear = "MNP_Helmet_USMC_arctic";
        goggles = "G_Lowprofile";
        uniform = "CUP_I_B_PMC_Unit_27";
        vest = "CUP_V_PMC_CIRAS_Winter_Patrol_ARM";
        backpack = "MNP_B_WB_KB";
    };

    class Leader : Rifleman {
        uniform = "CUP_I_B_PMC_Unit_26";
        vest = "CUP_V_PMC_CIRAS_Winter_TL_ARM";
    };

    class Officer : Leader {
        headGear = "H_Cap_blk_ION";
        vest = "CUP_V_PMC_CIRAS_Winter_Grenadier_ARM";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "CUP_I_B_PMC_Unit_28";
        vest = "CUP_V_PMC_CIRAS_Winter_Veh_ARM";
        backpack = "MNP_B_WB_AP";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "MNP_B_RUW_CA";
        headGear = "MNP_Helmet_USMC_arctic";
    };

    class FTL : Leader {
        uniform = "CUP_I_B_PMC_Unit_27";
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        backpack = "MNP_B_RUW_CA";
        goggles = "G_Balaclava_lowprofile";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "MNP_B_RUW_CA";
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
        backpack = "MNP_B_RUW_CA";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "MNP_B_RUW_CA";
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
        uniform = "CUP_I_B_PMC_Unit_26";
        headGear = "CUP_H_FR_BeanieGreen";
        backpack = "MNP_B_RUW_CA";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_FR_BeanieGreen";
        uniform = "CUP_I_B_PMC_Unit_26";
        vest = "CUP_V_PMC_CIRAS_Winter_Patrol_ARM";
        backpack = "MNP_B_WB_AP";
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
        headGear = "H_PilotHelmetHeli_B";
        uniform = "CUP_I_B_PMC_Unit_28";
        vest = "CUP_V_PMC_CIRAS_Winter_Veh_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
