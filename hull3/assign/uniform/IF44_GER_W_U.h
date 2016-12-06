class IF44_GER_W_U {
    class Rifleman {
        headGear = "H_LIB_GER_Helmet";
        goggles = "";
        uniform = "U_LIB_GER_Schutze_w";
        vest = "V_LIB_GER_VestKar98_ARM";
        backpack = "B_LIB_GER_A_frame";
    };

    class Leader : Rifleman {
        uniform = "U_LIB_GER_Unterofficer_w";
        vest = "V_LIB_GER_VestUnterofficer_ARM";
    };

    class Officer : Leader {
        uniform = "U_LIB_GER_Leutnant_w";
        vest = "V_LIB_GER_FieldOfficer_ARM";
    };

    class Crew : Rifleman {
        headGear = "H_LIB_GER_TankPrivateCap";
        uniform = "U_LIB_GER_Tank_crew_private_w";
        vest = "V_LIB_GER_TankPrivateBelt_ARM";
    };

    class CO : Officer {
        uniform = "U_LIB_GER_Hauptmann_w";
        headGear = "H_LIB_GER_OfficerCap";
    };

    class XO : CO {
        uniform = "U_LIB_GER_Oberleutnant_w";
        headGear = "H_LIB_GER_OfficerCap";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_LIB_GER_MedicBackpack_Empty";
        uniform = "U_LIB_GER_Medic_w";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "U_LIB_GER_Gefreiter_w";
        vest = "V_LIB_GER_VestSTG_ARM";
    };

    class AAR : Rifleman {
        vest = "V_LIB_GER_VestG43_ARM";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        vest = "V_LIB_GER_VestMG_ARM";
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
        backpack = "B_LIB_GER_Panzer_Empty";
    };

    class MATAG : AAR {
        backpack = "B_LIB_GER_Panzer_Empty";
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
        uniform = "U_LIB_GER_Unterofficer_w";
    };

    class ENGA : ENG {
        uniform = "U_LIB_GER_Schutze_w";
    };

    class SN : Rifleman {
        headGear = "H_LIB_GER_Cap";
        uniform = "U_LIB_GER_Scharfschutze_w";
    };

    class SP : SN {
    };

    class VC : Crew {
        uniform = "U_LIB_GER_Tank_crew_leutnant_w";
    };

    class VG : Crew {
        uniform = "U_LIB_GER_Tank_crew_unterofficer_w";
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_LIB_GER_LW_PilotHelmet";
        uniform = "U_LIB_GER_LW_pilot";
        backpack = "B_LIB_GER_LW_Paradrop";
    };

    class PCM : P {
    };
};