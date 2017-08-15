class USA_OD {
    class Rifleman {
        headGear = "CUP_H_USArmy_Helmet_M1_Olive";
        goggles = "";
        uniform = "CUP_U_O_TK_Green";
        vest = "CUP_V_RUS_Smersh_1_ARM";
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class Leader : Rifleman {
        vest = "CUP_V_RUS_Smersh_2_ARM";
        headGear = "H_Booniehat_oli";
    };

    class Officer : Leader {
        goggles = "G_Aviator";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "CUP_B_SLA_Medicbag";
    };

    class CO : Officer {
        uniform = "CUP_U_O_TK_Officer";
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "CUP_B_AlicePack_Bedroll";
        vest = "CUP_V_RUS_Smersh_2_ARM";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        backpack = "CUP_B_AlicePack_Bedroll";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "CUP_B_AlicePack_Bedroll";
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
        backpack = "CUP_B_AlicePack_Bedroll";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "CUP_B_AlicePack_Bedroll";
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
        backpack = "CUP_B_AlicePack_Bedroll";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_B_SLA_Medicbag";
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
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };

};
