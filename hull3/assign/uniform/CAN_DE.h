class CAN_DE {
    class Rifleman {
        headGear = "MNP_Helmet_Canada_D";
        goggles = "";
        uniform = "MNP_CombatUniform_Canada_D";
        vest = "MNP_Vest_Canada_D2";
        backpack = "AAF_D_Kitbag_B";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_Canada_DS";
        vest = "MNP_Vest_Canada_D";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "MNP_CombatUniform_Canada_DS";
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
        uniform = "MNP_CombatUniform_Canada_DS";
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
        uniform = "MNP_CombatUniform_Canada_DS";
        backpack = "AAF_D_Carryall_B";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "MNP_Boonie_CAN_D";
        goggles = "G_Bandanna_khk";
        uniform = "MNP_CombatUniform_Canada_DS";
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
        headGear = "H_PilotHelmetHeli_O";
        uniform = "MNP_CombatUniform_Canada_D";
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};