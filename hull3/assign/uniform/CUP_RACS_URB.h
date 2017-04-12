class CUP_RACS_URB {
    class Rifleman {
        headGear = "CUP_H_RACS_Helmet_DPAT";
        goggles = "";
        uniform = "CUP_U_I_RACS_Urban_1";
        vest = "CUP_V_I_RACS_Carrier_Vest_ARM";
        backpack = "B_AssaultPack_cbr";
    };

    class Leader : Rifleman {
        vest = "CUP_V_I_RACS_Carrier_Vest_3_ARM";
        headGear = "CUP_H_RACS_Helmet_Goggles_DPAT";
    };

    class Officer : Leader {
        headGear = "CUP_H_RACS_Helmet_Headset_DPAT";
        vest = "CUP_V_I_RACS_Carrier_Vest_2_ARM";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "CUP_U_I_RACS_Urban_2";
        vest = "CUP_V_I_RACS_Carrier_Rig_3_ARM";
        backpack = "B_AssaultPack_cbr";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "B_Carryall_khk";
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
        backpack = "B_Carryall_khk";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Cap_tan";
        goggles = "G_Bandanna_tan";
        uniform = "CUP_U_I_RACS_Urban_2";
        vest = "CUP_V_I_RACS_Carrier_Vest_2_ARM";
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
        uniform = "CUP_U_B_USMC_PilotOverall";
        headGear = "CUP_H_USMC_Helmet_Pilot";
        vest = "CUP_V_B_PilotVest_ARM";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };

};
