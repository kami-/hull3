class CN_H_WD {
    class Rifleman {
        headGear = "MNP_Helmet_CNH_T";
        goggles = "";
        uniform = "MNP_CombatUniform_China_Heavy_T";
        vest = "MNP_Vest_ChinaH_T2";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
        vest = "MNP_Vest_ChinaH_T";
    };

    class Officer : Leader {
        headGear = "MNP_MilCap_CN_T";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_B";
        vest = "V_BandollierB_rgr";
        backpack = "B_AssaultPack_rgr";
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
        headGear = "MNP_Boonie_CN_T";
        goggles = "G_Bandanna_oli";
        vest = "V_TacVest_oli";
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
        uniform = "MNP_CombatUniform_China_Heavy_T";
        vest = "V_TacVest_brn";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};