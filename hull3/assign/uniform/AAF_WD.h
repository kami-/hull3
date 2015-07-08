class AAF_WD {
    class Rifleman {
        headGear = "H_HelmetIA";
        goggles = "";
        uniform = "U_I_CombatUniform";
        vest = "V_PlateCarrierIA2_dgtl";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
        uniform = "U_I_CombatUniform_shortsleeve";
        vest = "V_PlateCarrierIAGL_dgtl";
    };

    class Officer : Leader {
        headGear = "H_MilCap_dgtl";
        uniform = "U_I_OfficerUniform";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "U_I_CombatUniform_shortsleeve";
        vest = "V_BandollierB_oli";
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
        uniform = "U_I_CombatUniform_shortsleeve";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "U_I_CombatUniform_shortsleeve";
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
        uniform = "U_I_CombatUniform_shortsleeve";
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Cap_headphones";
        goggles = "G_Bandanna_khk";
        uniform = "U_I_CombatUniform_shortsleeve";
        vest = "V_BandollierB_oli";
        backpack = "B_AssaultPack_dgtl";
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
        uniform = "U_I_HeliPilotCoveralls";
        vest = "V_TacVest_khk";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};