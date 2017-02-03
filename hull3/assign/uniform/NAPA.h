class NAPA {
    class Rifleman {
        headGear = "H_Booniehat_oli";
        goggles = "G_Bandanna_oli";
        uniform = "CUP_U_I_GUE_Flecktarn2";
        vest = "CUP_V_I_Carrier_Belt";
        backpack = "CUP_B_AlicePack_Bedroll";
    };

    class Leader : Rifleman {
        headGear = "H_MilCap_gry";
        uniform = "CUP_U_I_GUE_Flecktarn";
    };

    class Officer : Leader {
        headGear = "H_Cap_headphones";
        goggles = "";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_RUS_TSH_4_Brown";
        uniform = "CUP_U_O_CHDKZ_Kam_07";
        goggles = "";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "CUP_B_SLA_Medicbag";
    };

    class CO : Officer {
        headGear = "CUP_H_NAPA_Fedora";
        goggles = "G_Aviator";
        uniform = "U_BG_Guerilla2_3";
        vest = "CUP_V_I_Guerilla_Jacket_ARM";
    };

    class XO : Officer {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_oli";
        goggles = "G_Bandanna_oli";
        headGear = "H_Bandanna_khk_hs";
        uniform = "CUP_U_I_GUE_Woodland1";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        goggles = "G_Bandanna_blk";
        uniform = "CUP_U_I_GUE_Flecktarn3";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_oli";
        goggles = "CUP_FR_NeckScarf";
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
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Cap_headphones";
        goggles = "G_Bandanna_oli";
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
        headGear = "CUP_H_SLA_Pilot_Helmet";
        vest = "CUP_V_B_PilotVest";
        goggles = "G_Aviator";
        backpack = "B_Parachute";
        uniform = "CUP_U_C_Pilot_01";
    };

    class PCM : P {
    };

};
