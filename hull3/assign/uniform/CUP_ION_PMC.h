class CUP_ION_PMC {
    class Rifleman {
        headGear = "CUP_H_USArmy_Helmet_ECH2_Sand";
        goggles = "CUP_FR_NeckScarf2";
        uniform = "CUP_I_B_PMC_Unit_6";
        vest = "CUP_V_PMC_CIRAS_Coyote_Patrol_ARM";
        backpack = "B_Kitbag_cbr";
    };

    class Leader : Rifleman {
        uniform = "CUP_I_B_PMC_Unit_5";
        vest = "CUP_V_PMC_CIRAS_Coyote_TL_ARM";
    };

    class Officer : Leader {
        headGear = "H_Cap_blk_ION";
        vest = "CUP_V_PMC_CIRAS_Coyote_Grenadier_ARM";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "CUP_I_B_PMC_Unit_23";
        vest = "CUP_V_PMC_CIRAS_Coyote_Veh_ARM";
        backpack = "B_AssaultPack_cbr";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_khk";
        uniform = "CUP_I_B_PMC_Unit_19";
        headGear = "CUP_H_USArmy_Helmet_ECH1_Sand";
    };

    class FTL : Leader {
        uniform = "CUP_I_B_PMC_Unit_13";
        goggles = "CUP_TK_NeckScarf";
    };

    class AR : Rifleman {
        headGear = "CUP_H_USArmy_Helmet_ECH1_Sand";
    };

    class AAR : Rifleman {
        uniform = "CUP_I_B_PMC_Unit_16";
        backpack = "B_Carryall_khk";
        goggles = "CUP_TK_NeckScarf";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_USArmy_Helmet_ECH1_Sand";
        uniform = "CUP_I_B_PMC_Unit_5";
        goggles = "CUP_FR_NeckScarf";
    };

    class MMGG : AR {
        headGear = "CUP_H_PMC_Cap_Back_EP_Tan";
        backpack = "B_Carryall_khk";
    };

    class MMGAG : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class HMGG : AR {
        headGear = "CUP_H_PMC_Cap_Back_EP_Tan";
    };

    class HMGAG : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class HMGAC : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class MATG : RAT {
        headGear = "CUP_H_PMC_Cap_Back_EP_Tan";
        backpack = "B_Carryall_khk";
    };

    class MATAG : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class MATAC : MATAG {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class HATG : RAT {
        headGear = "CUP_H_PMC_Cap_Back_EP_Tan";
        backpack = "B_Carryall_khk";
    };

    class HATAG : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class HATAC : HATAG {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class DHATG : AR {
        headGear = "CUP_H_PMC_Cap_Back_EP_Tan";
    };

    class DHATAG : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class DHATAC : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class SAMG : AR {
        headGear = "CUP_H_PMC_Cap_Back_EP_Tan";
    };

    class SAMAG : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class SAMAC : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class GMGG : AR {
        headGear = "CUP_H_PMC_Cap_Back_EP_Tan";
    };

    class GMGAG : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class GMGAC : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class MTRG : AR {
        headGear = "CUP_H_PMC_Cap_Back_EP_Tan";
    };

    class MTRAG : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class MTRAC : AAR {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class ENG : Rifleman {
        uniform = "CUP_I_B_PMC_Unit_10";
        headGear = "CUP_H_PMC_Cap_PRR_Tan";
        backpack = "B_Carryall_khk";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_PMC_Cap_Back_EP_Tan";
        uniform = "CUP_I_B_PMC_Unit_9";
        vest = "CUP_V_PMC_CIRAS_Coyote_Patrol_ARM";
        backpack = "B_AssaultPack_cbr";
    };

    class SP : SN {
        headGear = "CUP_H_PMC_Cap_EP_Tan";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_PilotHelmetHeli_B";
        uniform = "CUP_I_B_PMC_Unit_23";
        vest = "CUP_V_PMC_CIRAS_Coyote_Veh_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
