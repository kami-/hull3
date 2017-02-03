class CSAT_TRP {
    class Rifleman {
        headGear = "H_HelmetO_ghex_F";
        goggles = "";
        uniform = "U_O_T_Soldier_F";
        vest = "V_PlateCarrier2_rgr_noflag_F";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
        vest = "V_PlateCarrier1_rgr_noflag_F";
    };

    class Officer : Leader {
        headGear = "H_MilCap_ghex_F";
        uniform = "U_O_T_Officer_F";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_O_ghex_F";
        uniform = "U_O_T_Soldier_F";
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
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_MilCap_ocamo";
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
        uniform = "U_O_PilotCoveralls";
        vest = "V_Rangemaster_belt_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};