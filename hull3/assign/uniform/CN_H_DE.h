class CN_H_DE {
    class Rifleman {
        headGear = "MNP_Helmet_CNH_D";
        goggles = "";
        uniform = "MNP_CombatUniform_China_Heavy_D";
        vest = "MNP_Vest_ChinaH_D2";
        backpack = "AAF_D_Kitbag_B";
    };

    class Leader : Rifleman {
        vest = "MNP_Vest_ChinaH_D";
    };

    class Officer : Leader {
        headGear = "MNP_MilCap_CN_D";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_B";
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

    class MTRG : AR {
    };

    class MRTAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        backpack = "AAF_D_Carryall_B";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "MNP_Boonie_CN_D";
        goggles = "G_Bandanna_khk";
        vest = "V_BandollierB_cbr";
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
        headGear = "H_PilotHelmetHeli_B";
        uniform = "MNP_CombatUniform_China_Heavy_D";
        vest = "V_TacVest_brn";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};