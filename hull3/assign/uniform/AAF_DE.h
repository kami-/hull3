class AAF_DE {
    class Rifleman {
        headGear = "AAF_D_Helmet_IA";
        goggles = "";
        uniform = "AAF_D_CombatUniform";
        vest = "AAF_D_PlateCarrier_IA2";
        backpack = "AAF_D_Kitbag_B";
    };

    class Leader : Rifleman {
        uniform = "AAF_D_CombatUniform_Shortsleeve";
        vest = "AAF_D_PlateCarrier_IA1";
    };

    class Officer : Leader {
        headGear = "AAF_D_MilCap_B";
        uniform = "AAF_D_OfficerUniform";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "AAF_D_CombatUniform_Shortsleeve";
        vest = "V_BandollierB_cbr";
        backpack = "";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "AAF_D_Carryall_B";
        uniform = "AAF_D_CombatUniform_Shortsleeve";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "AAF_D_CombatUniform_Shortsleeve";
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
        uniform = "AAF_D_CombatUniform_Shortsleeve";
        backpack = "AAF_D_Carryall_B";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "AAF_D_Cap_B";
        goggles = "G_Bandanna_khk";
        uniform = "AAF_D_CombatUniform_Shortsleeve";
        vest = "V_BandollierB_cbr";
        backpack = "AAF_D_AssaultPack_B";
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
        headGear = "AAF_D_PilotHelmetHeli_B";
        uniform = "AAF_D_HeliPilotCoveralls";
        vest = "V_TacVest_khk";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};