class RU_WD_FL {
    class Rifleman {
        headGear = "MNP_Helmet_PAGST_RO";
        goggles = "";
        uniform = "MNP_CombatUniform_RO_Rg";
        vest = "MNP_Vest_RUMED";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_RO_Sh";
        vest = "MNP_Vest_RUMED_B";
    };

    class Officer : Leader {
        headGear = "MNP_MilCap_RO_A";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        vest = "V_BandollierB_rgr";
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
        headGear = "H_Watchcap_camo";
        uniform = "MNP_CombatUniform_RO_Sh";
        goggles = "G_Bandanna_oli";
        vest = "MNP_Vest_Light_RU";
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
        uniform = "MNP_CombatUniform_RO_Rg";
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};