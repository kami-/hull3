class CUP_KSK_DE {
    class Rifleman {
        headGear = "CUP_H_OpsCore_Covered_Tropen_NoHS";
        goggles = "";
        uniform = "CUP_U_B_GER_Crye";
        vest = "CUP_V_B_GER_Carrier_Vest_2_ARM";
        backpack = "CUP_B_GER_Pack_Tropentarn";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_GER_Crye2";
    };

    class Officer : Leader {
        headGear = "CUP_H_Ger_Cap_EP_Tan1";
        goggles = "CUP_FR_NeckScarf2";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_DES";
        uniform = "CUP_U_B_GER_Overalls_Tank";
        vest = "CUP_V_B_GER_Tactical_Trop";
        backpack = "CUP_B_GER_Medic_Tropentarn";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
    };

    class FTL : Leader {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        uniform = "CUP_U_B_GER_Crye2";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        goggles = "CUP_G_PMC_RadioHeadset";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
    };

    class MATAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
    };

    class HATAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_OpsCore_Covered_Tropen";
        uniform = "CUP_U_B_GER_Crye2";
    };

    class ENGA : ENG {
        goggles = "";
    };

    class SN : Rifleman {
        headGear = "CUP_H_Ger_Boonie_desert";
        uniform = "CUP_U_B_GER_Crye2";
        backpack = "CUP_B_GER_Medic_Tropentarn";
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
        uniform = "CUP_U_B_GER_Fleck_Overalls_Pilot";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_B";
    };

};
