class CUP_KSK_DE {
    class Rifleman {
        headGear = "CUP_H_Ger_Boonie_desert";
        goggles = "CUP_FR_NeckScarf2";
        uniform = "CUP_U_B_GER_Tropentarn_1";
        vest = "CUP_V_B_GER_Carrier_Vest";
        backpack = "B_AssaultPack_cbr";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_GER_Tropentarn_2";
        vest = "CUP_V_B_GER_Carrier_Vest_3";
        headGear = "H_Bandanna_khk_hs";
    };

    class Officer : Leader {
        headGear = "CUP_H_PMC_PRR_Headset";
        vest = "CUP_V_B_GER_Carrier_Vest_2";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "CUP_U_B_GER_Tropentarn_2";
        goggles = "CUP_FR_NeckScarf2";
        vest = "CUP_V_B_GER_Carrier_Rig_2_Brown";
        backpack = "B_AssaultPack_rgr";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "AAF_D_Carryall_B";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "AAF_D_Carryall_B";
        uniform = "CUP_U_B_GER_Tropentarn_2";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "H_ShemagOpen_tan";
    };

    class AAR : Rifleman {
        backpack = "AAF_D_Carryall_B";
        headGear = "AAF_D_Cap_Headphones_B";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "AAF_D_Carryall_B";
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
        backpack = "AAF_D_Carryall_B";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "AAF_D_Carryall_B";
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
        backpack = "AAF_D_Carryall_B";
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
        backpack = "AAF_D_Carryall_B";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_PMC_PRR_Headset";
        goggles = "AAF_D_Balaclava_G";
        uniform = "CUP_U_B_GER_Tropentarn_2";
        vest = "CUP_V_B_GER_Carrier_Rig";
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
        vest = "CUP_V_B_PilotVest";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };

};
