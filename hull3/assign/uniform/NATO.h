class NATO {
    class Rifleman {
        headGear = "H_HelmetB";
        goggles = "";
        uniform = "U_B_CombatUniform_mcam_worn";
        vest = "V_PlateCarrier2_rgr_ARM";
        backpack = "B_Kitbag_cbr";
    };

    class Leader : Rifleman {
        uniform = "U_B_CombatUniform_mcam_vest";
        vest = "V_PlateCarrierGL_rgr_ARM";
    };

    class Officer : Leader {
        headGear = "H_MilCap_mcamo";
        vest = "V_PlateCarrier1_rgr_ARM";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_B";
        uniform = "U_B_CombatUniform_mcam_tshirt";
        vest = "V_BandollierB_rgr_ARM";
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
        uniform = "U_B_CombatUniform_mcam_vest";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "U_B_CombatUniform_mcam_vest";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_oli";
    };

    class RAT : Rifleman {
        uniform = "U_B_CombatUniform_mcam_vest";
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
        uniform = "U_B_CombatUniform_mcam_vest";
        vest = "V_PlateCarrier2_rgr_ARM";
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Watchcap_khk";
        goggles = "G_Bandanna_khk";
        uniform = "U_B_CombatUniform_mcam_vest";
        vest = "V_BandollierB_rgr_ARM";
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
        uniform = "U_B_HeliPilotCoveralls";
        vest = "V_TacVest_oli_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};
