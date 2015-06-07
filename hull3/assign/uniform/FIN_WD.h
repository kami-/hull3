class FIN_WD {
    class Rifleman {
        headGear = "MNP_Helmet_FIN_T";
        goggles = "";
        uniform = "MNP_CombatUniform_Fin_A";
        vest = "MNP_Vest_FIN_2";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_Fin_B";
        vest = "MNP_Vest_FIN_1";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "MNP_CombatUniform_Fin_B";
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
        backpack = "B_Carryall_oli";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_Fin_B";
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
        headGear = "MNP_Boonie_FIN";
        goggles = "G_Bandanna_oli";
        uniform = "MNP_CombatUniform_Fin_B";
        vest = "V_BandollierB_rgr";
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
        uniform = "MNP_CombatUniform_Fin_A";
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};