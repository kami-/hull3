class CUP_RU_EMR {
    class Rifleman {
        headGear = "CUP_H_RUS_6B27_NVG";
        goggles = "";
        uniform = "CUP_U_O_RUS_EMR_1";
        vest = "CUP_V_RUS_6B3_2_ARM";
        backpack = "ark_backpack_med";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_O_RUS_EMR_2";
        vest = "CUP_V_RUS_6B3_1_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_ChDKZ_Cap";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_RUS_TSH_4_Brown";
        uniform = "CUP_U_O_RUS_EMR_2";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
        uniform = "CUP_U_O_RUS_EMR_2";
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "ark_backpack_large";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        vest = "CUP_V_RUS_6B3_3_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
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
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_RUS_ZSH_1_Goggles";
        uniform = "CUP_U_O_RUS_EMR_2";
        goggles = "G_Balaclava_oli";
        vest = "CUP_V_O_TK_Vest_1_ARM";
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
        headGear = "CUP_H_RUS_ZSH_Shield_Up";
        uniform = "CUP_U_O_RUS_EMR_2_VDV";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
