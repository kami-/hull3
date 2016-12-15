class IF44_USSR_W_U {
    class Rifleman {
        headGear = "H_LIB_SOV_RA_Helmet_w";
        goggles = "";
        uniform = "U_LIB_SOV_Strelok_w";
        vest = "V_LIB_SOV_RA_MosinBelt_ARM";
        backpack = "B_LIB_SOV_RA_Rucksack";
    };

    class Leader : Rifleman {
        uniform = "U_LIB_SOV_Sergeant_w";
        vest = "V_LIB_SOV_RA_PPShBelt_ARM";
    };

    class Officer : Leader {
        uniform = "U_LIB_SOV_Leutenant_w";
        vest = "V_LIB_SOV_RA_OfficerVest_ARM";
        backpack = "B_LIB_SOV_RA_GasBag";
    };

    class Crew : Rifleman {
        headGear = "H_LIB_SOV_TankHelmet";
        uniform = "U_LIB_SOV_Tank_ryadovoi";
        vest = "V_LIB_SOV_RA_MosinBelt_ARM";
        backpack = "B_LIB_SOV_RA_GasBag";
    };

    class CO : Officer {
        uniform = "U_LIB_SOV_Kapitan_w";
        headGear = "H_LIB_SOV_RA_OfficerCap";
    };

    class XO : CO {
        uniform = "U_LIB_SOV_Stleutenant_w";
        headGear = "H_LIB_SOV_RA_OfficerCap";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_LIB_SOV_RA_MedicalBag";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "U_LIB_SOV_Efreitor_w";
        vest = "V_LIB_SOV_RA_SVTBelt_ARM";
    };

    class AAR : Rifleman {
        vest = "V_LIB_SOV_RA_PPShBelt_ARM";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_LIB_SOV_RA_MGAmmoBag_Empty";
        vest = "V_LIB_SOV_RA_MGBelt_ARM";
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
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
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
        uniform = "U_LIB_SOV_Stsergeant_w";
        vest = "V_LIB_SOV_IShBrVestPPShDisc";
    };

    class ENGA : ENG {
        uniform = "U_LIB_SOV_Efreitor_w";
    };

    class SN : Rifleman {
        headGear = "H_LIB_SOV_RA_PrivateCap";
        vest = "V_LIB_SOV_RA_SniperVest_ARM";
        uniform = "U_LIB_SOV_Sniper_w";
    };

    class SP : SN {
    };

    class VC : Crew {
        uniform = "U_LIB_SOV_Tank_leutenant";
    };

    class VG : Crew {
        uniform = "U_LIB_SOV_Tank_sergeant";
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_LIB_SOV_PilotHelmet";
        uniform = "U_LIB_SOV_Pilot";
        vest = "V_LIB_SOV_RA_MosinBelt_ARM";
        backpack = "B_LIB_SOV_RA_Paradrop";
    };

    class PCM : P {
    };
};