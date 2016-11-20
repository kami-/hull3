class IF44_USA_U {
    class Rifleman {
        headGear = "H_LIB_US_Helmet";
        goggles = "";
        uniform = "U_LIB_US_Private";
        vest = "V_LIB_US_Vest_Garand";
        backpack = "B_LIB_US_Backpack";
    };

    class Leader : Rifleman {
        uniform = "U_LIB_US_Sergant";
        vest = "V_LIB_US_Vest_Thompson_nco";
        headGear = "H_LIB_US_Helmet_Net";
    };

    class Officer : Leader {
        uniform = "U_LIB_US_Off";
        vest = "V_LIB_US_Vest_Carbine_nco";
        headGear = "H_LIB_US_Helmet_Second_lieutenant";
    };

    class Crew : Rifleman {
        headGear = "H_LIB_US_Helmet_Tank";
        vest = "V_LIB_US_Vest_45";
    };

    class CO : Officer {
        uniform = "U_LIB_US_Cap";
        headGear = "H_LIB_US_Helmet_Cap";
    };

    class XO : CO {
        uniform = "U_LIB_US_Off";
        headGear = "H_LIB_US_Helmet_First_lieutenant";
        backpack = "B_LIB_US_Radio";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_LIB_US_MedicBackpack_Empty";
        vest = "V_LIB_US_Vest_Medic2";
        headGear = "H_LIB_US_Helmet_Med";
        uniform = "U_LIB_US_Med";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "U_LIB_US_Corp";
        vest = "V_LIB_US_Vest_Bar";
    };

    class AAR : Rifleman {
        vest = "V_LIB_US_Vest_Asst_MG";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
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
        backpack = "V_LIB_US_Vest_Asst_MG";
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
        uniform = "U_LIB_US_Eng";
        vest = "V_LIB_US_Vest_Carbine_eng";
    };

    class ENGA : ENG {
        uniform = "U_LIB_US_Private";
    };

    class SN : Rifleman {
        headGear = "H_LIB_US_Helmet_Net";
        uniform = "U_LIB_US_Snipe";
        vest = "V_LIB_US_Vest_Garand";
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
        headGear = "H_LIB_US_Helmet_Pilot";
        backpack = "B_LIB_SOV_RA_Paradrop";
    };

    class PCM : P {
    };
};