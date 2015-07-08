class CSAT_SN {
    class Rifleman {
        headGear = "MNP_Helmet_Russia_arctic";
        goggles = "";
        uniform = "MNP_CombatUniform_Russia_arctic";
        vest = "V_PlateCarrier1_blk";
        backpack = "MNP_B_WB_KB";
    };

    class Leader : Rifleman {
    };

    class Officer : Leader {
        headGear = "H_MilCap_gry";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_B";
        vest = "V_BandollierB_blk";
        backpack = "MNP_B_WB_AP";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "MNP_B_RUW_CA";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        backpack = "MNP_B_RUW_CA";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "MNP_B_RUW_CA";
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
        backpack = "MNP_B_RUW_CA";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "MNP_B_RUW_CA";
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
        backpack = "MNP_B_RUW_CA";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Watchcap_blk";
        goggles = "G_Bandanna_aviator";
        vest = "V_BandollierB_blk";
        backpack = "MNP_B_WB_AP";
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
        uniform = "MNP_CombatUniform_Russia_arctic";
        vest = "V_TacVest_blk";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};