class NK_REG {
    class Rifleman {
        headGear = "MNP_Helmet_SOVC_NK";
        goggles = "";
        uniform = "MNP_CombatUniform_NKC_Rg";
        vest = "CUP_V_O_SLA_Flak_Vest03_ARM";
        backpack = "CUP_B_CivPack_WDL";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_NKC_Sh";
        vest = "CUP_V_O_SLA_Flak_Vest02_ARM";
    };

    class Officer : Leader {
        headGear = "MNP_MC_OD";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_SLA_TankerHelmet";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "CUP_B_SLA_Medicbag";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "CUP_B_HikingPack_Civ";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        backpack = "CUP_B_HikingPack_Civ";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "CUP_B_HikingPack_Civ";
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
        backpack = "CUP_B_HikingPack_Civ";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "CUP_B_HikingPack_Civ";
    };

    class HATAG : AAR {
    };

    class HATAC : HATAG {
    };
    
    class DHATG : AR {
    };

    class DHATAG : AAR {
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        backpack = "CUP_B_HikingPack_Civ";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Bandanna_khk_hs";
        uniform = "MNP_CombatUniform_NKC_Sh";
        goggles = "G_Bandanna_oli";
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
        headGear = "H_PilotHelmetHeli_O";
        uniform = "MNP_CombatUniform_NKC_Rg";
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};