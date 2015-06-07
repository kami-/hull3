class RU_DE {
    class Rifleman {
        headGear = "MNP_Helmet_PAGST_RD";
        goggles = "";
        uniform = "MNP_CombatUniform_RU_Med_D";
        vest = "MNP_Vest_RU_D2";
        backpack = "B_Kitbag_rgr";
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
        headGear = "H_HelmetCrew_I";
        uniform = "MNP_CombatUniform_RU_Med_DB";
        vest = "V_BandollierB_khk";
        backpack = "";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_oli";
        vest = "MNP_Vest_RU_T";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_RU_Med_DB";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_oli";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_oli";
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
        backpack = "B_Carryall_oli";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_oli";
    };

    class HATAG : AAR {
    };

    class HATAC : HATAG {
    };

    class MTRG : AR {
    };

    class MRTAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        uniform = "MNP_CombatUniform_RU_Med_DB";
        vest = "MNP_Vest_RU_D";
        backpack = "B_Carryall_oli";
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
        headGear = "H_PilotHelmetHeli_O";
        uniform = "MNP_CombatUniform_RU_Med_DB";
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};