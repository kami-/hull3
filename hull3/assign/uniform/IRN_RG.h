class IRN_RG {
    class Rifleman {
        headGear = "MNP_Helmet_PAGST_IBSJ";
        goggles = "G_Aviator";
        uniform = "MNP_CombatUniform_IR_BSJ_A";
        vest = "CUP_V_O_SLA_M23_1_BRN_ARM";
        backpack = "B_Kitbag_cbr";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_IR_BSJ_Med";
    };

    class Officer : Leader {
        headGear = "H_Beret_blk";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_TK_TankerHelmet";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "B_AssaultPack_cbr";
    };

    class CO : Officer {
    };

    class XO : CO {
        uniform = "MNP_CombatUniform_IR_BSJ_Med_B";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_cbr";
    };

    class FTL : Leader {
        uniform = "MNP_CombatUniform_IR_BSJ_Med_B";
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_cbr";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_cbr";
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
        backpack = "B_Carryall_cbr";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_cbr";
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
        backpack = "B_Carryall_cbr";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_TK_Lungee";
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
        headGear = "CUP_H_SLA_Pilot_Helmet";
        vest = "CUP_V_B_PilotVest_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
