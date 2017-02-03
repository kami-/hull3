class CUP_RU_EMR {
    class Rifleman {
        headGear = "CUP_H_RUS_6B27_NVG";
        goggles = "";
        uniform = "CUP_U_O_RUS_EMR_1";
        vest = "CUP_V_RUS_6B3_2";
        backpack = "CUP_B_CivPack_WDL";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_O_RUS_EMR_2";
        vest = "CUP_V_RUS_6B3_1";
    };

    class Officer : Leader {
        headGear = "CUP_H_ChDKZ_Cap";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_RUS_TSH_4_Brown";
        uniform = "CUP_U_O_RUS_EMR_2";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "CUP_B_SLA_Medicbag";
    };

    class CO : Officer {
        uniform = "CUP_U_O_RUS_EMR_2";
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "CUP_B_HikingPack_Civ";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        vest = "CUP_V_RUS_6B3_3";
    };

    class AAR : Rifleman {
        backpack = "CUP_B_HikingPack_Civ";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "CUP_B_HikingPack_Civ";
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
        backpack = "CUP_B_HikingPack_Civ";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "CUP_B_HikingPack_Civ";
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
        backpack = "CUP_B_HikingPack_Civ";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_RUS_ZSH_1_Goggles";
        uniform = "CUP_U_O_RUS_EMR_2";
        goggles = "G_Balaclava_oli";
        vest = "CUP_V_O_TK_Vest_1_ARM";
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
