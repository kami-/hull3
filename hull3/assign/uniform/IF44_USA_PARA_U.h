class IF44_USA_PARA_U {
    class Rifleman {
        headGear = "H_LIB_US_AB_Helmet_Clear_1";
        goggles = "";
        uniform = "U_LIB_US_AB_Uniform_M42";
        vest = "V_LIB_US_AB_Vest_Garand";
        backpack = "B_LIB_US_M36";
    };

    class Leader : Rifleman {
        vest = "V_LIB_US_AB_Vest_Padded_Thompson_nco";
        headgear = "H_LIB_US_AB_Helmet_CO_2";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        uniform = "U_LIB_US_Tank_Crew";
        headGear = "H_LIB_US_Helmet_Tank";
        vest = "V_LIB_US_Vest_45_ARM";
        backpack = "B_LIB_US_M36";
    };

    class CO : Officer {
        backpack = "B_LIB_US_M36_Bandoleer";
    };

    class XO : CO {
        vest = "V_LIB_US_AB_Vest_Padded_Thompson_nco_Radio";
        backpack = "B_LIB_US_Radio_ACRE2";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        uniform = "U_LIB_US_AB_Uniform_M42_Medic";
        vest = "V_LIB_US_AB_Vest_Padded_Asst_MG";
        headgear = "H_LIB_US_AB_Helmet_Clear_3";
        backpack = "B_LIB_US_M36";
    };

    class FTL : Leader {
        headGear = "H_LIB_US_AB_Helmet_NCO_2";
        uniform = "U_LIB_US_AB_Uniform_M42_NCO";
        vest = "V_LIB_US_AB_Vest_Padded_Thompson";
    };

    class AR : Rifleman {
        vest = "V_LIB_US_AB_Vest_Padded_Bar";
        uniform = "U_LIB_US_AB_Uniform_M42_corporal";
        headGear = "H_LIB_US_Helmet_Net_ns";
    };

    class AAR : Rifleman {
        vest = "V_LIB_US_AB_Vest_Padded_Grenadier";
        headGear = "H_LIB_US_Helmet_os";
        backpack = "B_LIB_US_Bandoleer";
    };

    class RAT : Rifleman {
        uniform = "U_LIB_US_AB_Uniform_M42_FC";
        backpack = "B_LIB_US_M36_Rope";
        vest = "V_LIB_US_AB_Vest_Padded_Carbine";
    };

    class MMGG : AR {
        vest = "V_LIB_US_Vest_M1919";
    };

    class MMGAG : AAR {
        headGear = "H_LIB_US_AB_Helmet_NCO_2";
        vest = "V_LIB_US_AB_Vest_Padded_Carbine";
    };

    class HMGG : AR {
        vest = "V_LIB_US_Vest_M1919";
    };

    class HMGAG : AAR {
        headGear = "H_LIB_US_AB_Helmet_NCO_2";
        vest = "V_LIB_US_AB_Vest_Padded_Thompson";
    };

    class HMGAC : HMGG {
        vest = "V_LIB_US_AB_Vest_M1919";
    };

    class MATG : RAT {
        backpack = "B_LIB_US_M36_Rocketbag_Empty";
    };

    class MATAG : MATG {
        headGear = "H_LIB_US_AB_Helmet_NCO_2";
        vest = "V_LIB_US_AB_Vest_Padded_Thompson";
        backpack = "B_LIB_US_M36_Rocketbag_Empty";
    };

    class MATAC : MATAG {
        backpack = "B_LIB_US_M36_Rocketbag_Empty";
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
        vest = "V_LIB_US_AB_Vest_Padded_Carbine";
    };

    class MTRAG : Rifleman {
        vest = "V_LIB_US_AB_Vest_Padded_Thompson";
    };

    class MTRAC : Rifleman {
        vest = "V_LIB_US_AB_Vest_Padded_Carbine";
    };

    class ENG : Rifleman {
        headGear = "H_LIB_US_AB_Helmet_NCO_2";
        uniform = "U_LIB_US_AB_Uniform_M42_NCO";
        vest = "V_LIB_US_AB_Vest_Padded_Carbine_eng";
    };

    class ENGA : ENG {
        headGear = "H_LIB_US_AB_Helmet_Clear_3";
        uniform = "U_LIB_US_AB_Uniform_M42";
    };

    class SN : Rifleman {
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
        uniform = "U_LIB_US_Bomber_Pilot";
        headGear = "H_LIB_US_Helmet_Pilot_Glasses_Up";
        vest = "V_LIB_US_LifeVest";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
