class CUP_RACS_MECH {
    class Rifleman {
        headGear = "CUP_H_RACS_Helmet_mech";
        goggles = "";
        uniform = "CUP_U_I_RACS_mech_1";
        vest = "CUP_V_I_RACS_Carrier_Vest_2";
        backpack = "B_Kitbag_cbr";
    };

    class Leader : Rifleman {
        vest = "CUP_V_I_RACS_Carrier_Vest_3";
        headGear = "CUP_H_RACS_Helmet_Headset_mech";
    };

    class Officer : Leader {
        headGear = "CUP_H_RACS_Beret_Blue";
        vest = "CUP_V_I_RACS_Carrier_Vest_3";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_WDL";
        uniform = "CUP_U_I_RACS_mech_2";
        vest = "CUP_V_I_RACS_Carrier_Vest_2";
        backpack = "B_AssaultPack_cbr";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "CUP_B_USPack_Coyote";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_khk";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        backpack = "B_Carryall_khk";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_khk";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_khk";
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
        backpack = "B_Carryall_khk";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_khk";
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
        backpack = "B_Carryall_khk";
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
        backpack = "CUP_B_USPack_Coyote";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_PMC_Cap_Back_EP_Tan";
        goggles = "CUP_FR_NeckScarf2";
        uniform = "CUP_U_I_RACS_mech_2";
        vest = "CUP_V_I_RACS_Carrier_Vest_3";
        backpack = "B_AssaultPack_cbr";
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
        uniform = "CUP_U_I_RACS_PilotOverall";
        headGear = "H_PilotHelmetHeli_O";
        vest = "CUP_V_B_PilotVest";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_O";
    };

};
