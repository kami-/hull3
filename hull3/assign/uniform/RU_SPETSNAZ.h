class RU_SPETSNAZ {
    class Rifleman {
        headGear = "CUP_H_RUS_6B27_NVG";
        goggles = "";
        uniform = "CUP_U_O_RUS_Flora_1_VDV";
        vest = "CUP_V_PMC_IOTV_Coyote_Patrol_ARM";
        backpack = "B_Kitbag_cbr";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_O_RUS_Flora_2_VDV";
        vest = "CUP_V_PMC_IOTV_Coyote_Gren_ARM";
        headGear = "CUP_H_RUS_6B27_NVG";
    };

    class Officer : Leader {
        headGear = "CUP_H_RUS_Beret_Spetsnaz";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_TK_TankerHelmet";
        uniform = "CUP_U_O_RUS_Flora_2_VDV";
        vest = "V_BandollierB_khk_ARM";
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
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "CUP_U_O_RUS_Flora_2_VDV";
        vest = "CUP_V_PMC_IOTV_Coyote_AR_ARM";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_khk";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_khk";
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
        backpack = "B_Carryall_khk";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_khk";
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
        uniform = "CUP_U_O_RUS_Flora_1_VDV";
        vest = "CUP_V_PMC_IOTV_Coyote_Gren_ARM";
        backpack = "B_Carryall_khk";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Bandanna_khk_hs";
        goggles = "G_Bandanna_tan";
        uniform = "CUP_U_O_RUS_Flora_1_VDV";
        vest = "CUP_V_PMC_IOTV_Coyote_Patrol_ARM";
        backpack = "B_AssaultPack_rgr";
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
        headGear = "CUP_H_SLA_Pilot_Helmet";
        uniform = "CUP_U_O_RUS_Flora_1_VDV";
        vest = "V_TacVest_oli_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
