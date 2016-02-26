class CUP_KSK_WD {
    class Rifleman {
        headGear = "CUP_H_Ger_Boonie_Flecktarn";
        goggles = "CUP_FR_NeckScarf";
        uniform = "CUP_U_B_GER_Flecktarn_1";
        vest = "CUP_V_B_GER_Carrier_Vest";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_GER_Flecktarn_2";
        vest = "CUP_V_B_GER_Carrier_Vest_3";
        headGear = "H_Bandanna_khk_hs";
    };

    class Officer : Leader {
        headGear = "CUP_H_PMC_PRR_Headset";
        vest = "CUP_V_B_GER_Carrier_Vest_2";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "CUP_U_B_GER_Flecktarn_2";
        goggles = "CUP_FR_NeckScarf2";
        vest = "CUP_V_B_GER_Carrier_Rig_2_Brown";
        backpack = "B_AssaultPack_rgr";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_oli";
        uniform = "CUP_U_B_GER_Flecktarn_2";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "H_Shemag_olive_hs";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_oli";
        headGear = "H_Cap_headphones";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_oli";
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
        backpack = "B_Carryall_oli";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_oli";
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
        uniform = "CUP_U_B_GER_Flecktarn_2";
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_PMC_PRR_Headset";
        goggles = "G_Balaclava_oli";
        uniform = "CUP_U_B_GER_Flecktarn_2";
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
