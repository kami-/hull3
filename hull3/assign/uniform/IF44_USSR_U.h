class IF44_USSR_U {
    class Rifleman {
        headGear = "H_LIB_SOV_RA_Helmet";
        goggles = "";
        uniform = "U_LIB_SOV_Strelok";
        vest = "V_LIB_SOV_RA_MosinBelt";
        backpack = "B_LIB_SOV_RA_Shinel";
    };

    class Leader : Rifleman {
        vest = "V_LIB_SOV_RA_OfficerVest";
        backpack = "B_LIB_SOV_RA_GasBag";
    };

    class Officer : Leader {
        headGear = "H_LIB_SOV_RA_OfficerCap";
        uniform = "U_LIB_SOV_Stleutenant";
    };

    class Crew : Rifleman {
        headGear = "H_LIB_SOV_TankHelmet";
        uniform = "U_LIB_SOV_Tank_private_field";
        vest = "V_LIB_SOV_RAZV_MGBelt";
        backpack = "B_LIB_SOV_RA_GasBag";
    };

    class CO : Officer {
        uniform = "U_LIB_SOV_Stleutenant";
        vest = "V_LIB_SOV_RA_OfficerVest";
    };

    class XO : CO {
        backpack = "B_LIB_SOV_RA_Radio";
    };

    class SL : Officer {
        uniform = "U_LIB_NKVD_Starshina";
    };

    class Medic : Rifleman {
        backpack = "B_LIB_SOV_RA_MedicalBag_Empty";
        uniform = "U_LIB_SOV_Efreitor";
        vest = "V_LIB_SOV_RA_SVTBelt";
        headGear = "H_LIB_SOV_RA_Helmet";
    };

    class FTL : Leader {
        uniform = "U_LIB_NKVD_Sergeant";
        headGear = "H_LIB_SOV_RA_PrivateCap";
    };

    class AR : Rifleman {
        vest = "V_LIB_SOV_RA_MGBelt";
        headGear = "H_LIB_SOV_RA_Helmet";
        uniform = "U_LIB_SOV_Efreitor";
        backpack = "B_LIB_SOV_RA_MGAmmoBag_Empty";
    };

    class AAR : Rifleman {
        vest = "V_LIB_SOV_RA_MGBelt";
        backpack = "B_LIB_SOV_RA_MGAmmoBag_Empty";
    };

    class RAT : Rifleman {
        vest = "V_LIB_SOV_RA_MosinBelt";
        uniform = "U_LIB_SOV_Strelok";
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniform = "U_LIB_SOV_Strelok";
    };

    class HMGG : AR {
        backpack = "LIB_Maxim_Bar";
        vest = "V_LIB_SOV_IShBrVestMG";
    };

    class HMGAG : AAR {
        backpack = "LIB_Maxim_Bag";
        vest = "V_LIB_SOV_IShBrVestPPShDisc";
    };

    class HMGAC : HMGG {
        vest = "V_LIB_SOV_IShBrVestPPShMag";
		backpack = "LIB_Maxim_Bar";
    };

    class MATG : RAT {
    };

    class MATAG : MATG {
    };

    class MATAC : MATAG {
    };

    class HATG : Rifleman {
    };

    class HATAG : Rifleman {
    };

    class HATAC : Rifleman {
    };

    class DHATG : Rifleman {
    };

    class DHATAG : Rifleman {
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
    };

    class SAMAG : Rifleman {
    };

    class SAMAC : Rifleman {
    };

    class GMGG : Rifleman {
    };

    class GMGAG : Rifleman {
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
    };

    class MTRAG : Rifleman {
    };

    class MTRAC : MTRG {
    };

    class ENG : Rifleman {
        uniform = "U_LIB_NKVD_Starshina";
        headGear = "H_LIB_SOV_Ushanka";
        vest = "V_LIB_SOV_RA_PPShBelt";
        backpack = "B_LIB_SOV_RA_GasBag";
    };

    class ENGA : ENG {
        uniform = "U_LIB_SOV_Strelok";
        vest = "V_LIB_SOV_RA_MosinBelt";
        headGear = "H_LIB_SOV_Ushanka";
    };

    class SN : Rifleman {
        uniform = "U_LIB_SOV_Razvedchik_am";
        vest = "V_LIB_SOV_RA_SniperVest";
        headGear = "H_LIB_SOV_Ushanka";
        backpack = "B_LIB_SOV_RA_Shinel";
    };

    class SP : SN {
    };

    class VC : Crew {
        uniform = "U_LIB_SOV_Stleutenant";
        vest = "V_LIB_SOV_RA_TankOfficerSet";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_LIB_SOV_PilotHelmet";
        uniform = "U_LIB_SOV_Pilot";
        vest = "V_LIB_SOV_RA_Belt";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
