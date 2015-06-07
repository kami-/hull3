class ARC {
    class Rifleman {
        headGear = "";
        goggles = "G_Balaclava_blk";
        uniform = "MNP_CombatUniform_Rebel_A";
        vest = "MNP_Vest_OD_A";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_Rebel_B";
        headGear = "MNP_MC_Rev";
        goggles = "G_Aviator";
        vest = "MNP_Vest_OD_A";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        goggles = "";
        uniform = "MNP_CombatUniform_Rebel_A";
        vest = "V_BandollierB_oli";
        backpack = "";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "H_Booniehat_oli";
        goggles = "G_Bandanna_aviator";
        backpack = "B_Carryall_oli";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_Rebel_A";
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
        headGear = "H_Bandanna_khk_hs";
        goggles = "G_Bandanna_aviator";
        uniform = "MNP_CombatUniform_Rebel_A";
        vest = "V_BandollierB_oli";
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
        headGear = "H_PilotHelmetHeli_I";
        uniform = "MNP_CombatUniform_Rebel_A";
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};