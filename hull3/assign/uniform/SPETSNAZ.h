class SPETSNAZ {
    class Rifleman {
        headGear = "H_HelmetAggressor_cover_taiga_F";
        goggles = "G_Balaclava_oli";
        uniform = "U_O_R_Gorka_01_camo_F";
        vest = "V_SmershVest_01_F_ARM";
        backpack = "B_FieldPack_taiga_F";
    };

    class Leader : Rifleman {
        vest = "V_SmershVest_01_radio_F_ARM";
        goggles = "";
    };

    class Officer : Leader {
        headGear = "CUP_H_RUS_Beret_Spetsnaz";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_RUS_TSH_4_Brown";
        goggles = "";
        vest = "CUP_V_CDF_OfficerBelt_ARM";
        backpack = "CUP_B_SLA_Medicbag";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
        headGear = "H_MilCap_taiga";
    };

    class Medic : Rifleman {
        goggles = "";
        backpack = "B_Carryall_taiga_F";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        vest = "CUP_V_RUS_6B3_3_ARM";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_taiga_F";
    };

    class RAT : Rifleman {
        backpack = "B_Carryall_taiga_F";
    };

    class MMGG : AR {
        backpack = "B_Carryall_taiga_F";
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
        backpack = "B_Carryall_taiga_F";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_taiga_F";
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
        goggles = "";
        backpack = "B_Carryall_taiga_F";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Booniehat_taiga";
    };

    class SP : SN {
    };

    class VC : Crew {
        vest = "CUP_V_CDF_OfficerBelt2_ARM";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "CUP_H_RUS_ZSH_Shield_Up";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
