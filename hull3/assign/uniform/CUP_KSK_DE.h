class CUP_KSK_DE {
    class Rifleman {
        headGear = "CUP_H_Ger_Boonie_desert";
        goggles = "CUP_FR_NeckScarf2";
        uniform = "CUP_U_B_GER_Tropentarn_1";
        vest = "CUP_V_B_GER_Carrier_Vest_ARM";
        backpack = "B_AssaultPack_cbr";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_GER_Tropentarn_2";
        vest = "CUP_V_B_GER_Carrier_Vest_3_ARM";
        headGear = "H_Bandanna_khk_hs";
    };

    class Officer : Leader {
        headGear = "CUP_H_PMC_PRR_Headset";
        vest = "CUP_V_B_GER_Carrier_Vest_2_ARM";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "CUP_U_B_GER_Tropentarn_2";
        goggles = "CUP_FR_NeckScarf2";
        vest = "CUP_V_B_GER_Carrier_Rig_2_Brown_ARM";
        backpack = "B_AssaultPack_rgr";
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
        uniform = "CUP_U_B_GER_Tropentarn_2";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "H_ShemagOpen_tan";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_khk";
        headGear = "H_Cap_tan";
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
        uniform = "CUP_U_B_GER_Tropentarn_2";
        backpack = "B_Carryall_khk";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_PMC_PRR_Headset";
        uniform = "CUP_U_B_GER_Tropentarn_2";
        vest = "CUP_V_B_GER_Carrier_Rig_ARM";
        backpack = "B_AssaultPack_rgr";
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
