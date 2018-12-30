class CUP_RACS_URB {
    class Rifleman {
        headGear = "CUP_H_RACS_Helmet_TPAT";
        goggles = "";
        uniform = "CUP_U_I_RACS_Urban_1";
        vest = "CUP_V_B_Interceptor_Rifleman_Grey_ARM";
        backpack = "B_AssaultPack_cbr";
    };

    class Leader : Rifleman {
        vest = "CUP_V_B_Interceptor_Grenadier_Grey_ARM";
        headGear = "CUP_H_RACS_Helmet_Goggles_TPAT";
    };

    class Officer : Leader {
        headGear = "CUP_H_RACS_Beret_Blue";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "CUP_U_I_RACS_Urban_2";
        vest = "CUP_V_B_Interceptor_Base_Grey_ARM";
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
        headgear = "CUP_H_RACS_Helmet_Headset_TPAT";
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
        headGear = "CUP_H_RACS_Helmet_Headset_TPAT";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        headGear = "CUP_H_RACS_Helmet_Headset_TPAT";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "B_Carryall_khk";
    };

    class MATAG : AAR {
        headGear = "CUP_H_RACS_Helmet_Headset_TPAT";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_khk";
    };

    class HATAG : AAR {
        headGear = "CUP_H_RACS_Helmet_Headset_TPAT";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        headGear = "CUP_H_RACS_Helmet_Headset_TPAT";
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
        headGear = "CUP_H_RACS_Helmet_Headset_TPAT";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        headGear = "CUP_H_RACS_Helmet_Headset_TPAT";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_RACS_Helmet_Headset_TPAT";
        backpack = "B_Carryall_khk";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_RACS_Helmet_Headset_TPAT";
        goggles = "G_Bandanna_tan";
        uniform = "CUP_U_I_RACS_Urban_2";
        vest = "CUP_V_B_Interceptor_Rifleman_Grey_ARM";
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
