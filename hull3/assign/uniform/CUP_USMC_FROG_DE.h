class CUP_USMC_FROG_DE {
    class Rifleman {
        headGear = "CUP_H_USMC_LWH_NVGMOUNT_DES";
        goggles = "";
        uniform = "CUP_U_B_USMC_FROG1_DMARPAT";
        vest = "CUP_V_B_Eagle_SPC_Patrol_ARM";
        backpack = "B_Kitbag_cbr";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_USMC_FROG2_DMARPAT";
        vest = "CUP_V_B_Eagle_SPC_Officer_ARM";
        headGear = "CUP_H_USMC_Goggles_HelmetDES";
    };

    class Officer : Leader {
        headGear = "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES";
        uniform = "CUP_U_B_USMC_FROG2_DMARPAT";
        vest = "CUP_V_B_MTV_PistolBlack_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_Crew_Helmet";
        uniform = "CUP_U_B_USMC_FROG3_DMARPAT";
        goggles = "CUP_FR_NeckScarf2";
        vest = "CUP_V_B_Eagle_SPC_Crew_ARM";
        backpack = "B_AssaultPack_cbr";
    };

    class CO : Officer {
        headGear = "CUP_H_USMC_CAP_PRR_DES";
        uniform = "CUP_U_B_USMC_FROG2_DMARPAT";
    };

    class XO : CO {
        vest = "CUP_V_B_Eagle_SPC_RTO_ARM";
        headGear = "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES";
        backpack = "CUP_B_USPack_Coyote";
    };

    class SL : Officer {
        vest = "CUP_V_B_Eagle_SPC_SL_ARM";
    };

    class Medic : Rifleman {
        backpack = "B_Kitbag_cbr";
        uniform = "CUP_U_B_USMC_FROG4_DMARPAT";
    };

    class FTL : Leader {
        vest = "CUP_V_B_Eagle_SPC_GL_ARM";
        headgear = "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES";
    };

    class AR : Rifleman {
        uniform = "CUP_U_B_USMC_FROG4_DMARPAT";
        vest = "CUP_V_B_Eagle_SPC_MG_ARM";
        headGear = "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES";
    };

    class AAR : Rifleman {
        backpack = "B_Kitbag_cbr";
    };

    class RAT : Rifleman {
        uniform = "CUP_U_B_USMC_FROG2_DMARPAT";
        vest = "CUP_V_B_Eagle_SPC_AT_ARM";
        headGear = "CUP_H_USMC_LWH_NVGMOUNT_DES";
    };

    class MMGG : AR {
        backpack = "B_Kitbag_cbr";
    };

    class MMGAG : AAR {
        vest = "CUP_V_B_Eagle_SPC_TL_ARM";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        vest = "CUP_V_B_Eagle_SPC_TL_ARM";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "B_Kitbag_cbr";
    };

    class MATAG : AAR {
        vest = "CUP_V_B_Eagle_SPC_TL_ARM";
        backpack = "CUP_B_USPack_Coyote";
    };

    class MATAC : MATAG {
        vest = "CUP_V_B_Eagle_SPC_Patrol_ARM";
    };

    class HATG : RAT {
        backpack = "B_Kitbag_cbr";
    };

    class HATAG : AAR {
        vest = "CUP_V_B_Eagle_SPC_TL_ARM";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        vest = "CUP_V_B_Eagle_SPC_TL_ARM";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        vest = "CUP_V_B_Eagle_SPC_TL_ARM";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        vest = "CUP_V_B_Eagle_SPC_TL_ARM";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        vest = "CUP_V_B_Eagle_SPC_TL_ARM";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        uniform = "CUP_U_B_USMC_FROG1_DMARPAT";
        vest = "CUP_V_B_Eagle_SPC_Scout_ARM";
        backpack = "CUP_B_USPack_Coyote";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_USMC_BOONIE_PRR_DES";
        goggles = "G_Bandanna_khk";
        uniform = "CUP_U_B_USMC_FROG4_DMARPAT";
        vest = "CUP_V_B_Eagle_SPC_DMR_ARM";
        backpack = "B_AssaultPack_cbr";
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
