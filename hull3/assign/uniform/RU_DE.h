class RU_DE {
    class Rifleman {
        headGear = "MNP_Helmet_PAGST_RD";
        goggles = "";
        uniform = "MNP_CombatUniform_RU_Med_D";
        vest = "MNP_Vest_RU_D2";
        backpack = "AAF_D_Kitbag_B";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_RU_Med_DB";
        vest = "MNP_Vest_RU_D";
        headGear = "MNP_MilCap_RU_D";
    };

    class Officer : Leader {
        headGear = "MNP_Beret_VDV";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_TK_TankerHelmet";
        uniform = "MNP_CombatUniform_RU_Med_DB";
        vest = "V_BandollierB_khk";
        backpack = "AAF_D_AssaultPack_B";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "AAF_D_Carryall_B";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_RU_Med_DB";
    };

    class AAR : Rifleman {
        backpack = "AAF_D_Carryall_B";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "AAF_D_Carryall_B";
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
        backpack = "AAF_D_Carryall_B";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "AAF_D_Carryall_B";
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
        uniform = "MNP_CombatUniform_RU_Med_DB";
        vest = "MNP_Vest_RU_D";
        backpack = "AAF_D_Carryall_B";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Bandanna_khk_hs";
        goggles = "G_Bandanna_tan";
        uniform = "MNP_CombatUniform_RU_Med_DB";
        vest = "MNP_Vest_Light_R3";
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
        uniform = "MNP_CombatUniform_RU_Med_DB";
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
