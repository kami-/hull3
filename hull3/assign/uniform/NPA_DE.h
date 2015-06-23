class NPA_DE {
    class Rifleman {
        headGear = "H_ShemagOpen_khk";
        goggles = "";
        uniform = "MNP_CombatUniform_6CO";
        vest = "MNP_Vest_Light_DPM_D";
        backpack = "B_Kitbag_cbr";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_6CO_B";
        headGear = "H_Beret_blk";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "H_MilCap_gry";
        vest = "V_BandollierB_khk";
        goggles = "G_Bandanna_khk";
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
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
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
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_MilCap_gry";
        goggles = "G_Bandanna_khk";
        vest = "V_BandollierB_khk";
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
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};