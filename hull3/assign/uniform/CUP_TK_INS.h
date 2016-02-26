class CUP_TK_INS {
    class Rifleman {
        headGear = "CUP_H_TKI_Lungee_01";
        goggles = "";
        uniform = "CUP_O_TKI_Khet_Partug_01";
        vest = "CUP_V_OI_TKI_Jacket4_02_ARM";
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class Leader : Rifleman {
        uniform = "CUP_O_TKI_Khet_Partug_01";
        vest = "CUP_V_OI_TKI_Jacket3_01_ARM";
        headGear = "CUP_H_TKI_Pakol_1_02";
    };

    class Officer : Leader {
        headGear = "CUP_H_TKI_SkullCap_03";
        uniform = "CUP_O_TKI_Khet_Partug_04";
        vest = "CUP_V_OI_TKI_Jacket1_01_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_TK_TankerHelmet";
        vest = "CUP_V_OI_TKI_Jacket3_02_ARM";
    };

    class CO : Officer {
        headGear = "CUP_H_TKI_Lungee_Open_02";
        uniform = "CUP_O_TKI_Khet_Partug_03";
        vest = "CUP_V_I_Guerilla_Jacket_ARM";
        goggles = "G_Aviator";
    };

    class XO : CO {
        headGear = "CUP_H_TKI_Lungee_Open_05";
        uniform = "CUP_O_TKI_Khet_Partug_06";
        vest = "CUP_V_OI_TKI_Jacket2_03_ARM";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "CUP_B_AlicePack_Khaki";
        uniform = "CUP_O_TKI_Khet_Partug_05";
        headGear = "CUP_H_TKI_SkullCap_06";
        vest = "CUP_V_OI_TKI_Jacket3_03_ARM";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "CUP_O_TKI_Khet_Partug_07";
        vest = "CUP_V_OI_TKI_Jacket1_02_ARM";
        headGear = "CUP_H_TKI_Lungee_03";
    };

    class AAR : Rifleman {
        backpack = "CUP_B_AlicePack_Khaki";
        uniform = "CUP_O_TKI_Khet_Partug_08";
        vest = "CUP_V_OI_TKI_Jacket4_03_ARM";
        headGear = "CUP_H_TKI_Pakol_2_04";
    };

    class RAT : Rifleman {
        uniform = "CUP_O_TKI_Khet_Partug_02";
        vest = "CUP_V_OI_TKI_Jacket3_02_ARM";
        headGear = "CUP_H_TKI_Lungee_06";
    };

    class MMGG : AR {
        backpack = "CUP_B_AlicePack_Khaki";
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
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "CUP_B_AlicePack_Khaki";
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
        uniform = "CUP_O_TKI_Khet_Partug_06";
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_TKI_Lungee_01";
        uniform = "CUP_O_TKI_Khet_Partug_04";
        vest = "CUP_V_OI_TKI_Jacket4_01_ARM";
    };

    class SP : SN {
        headGear = "CUP_H_TKI_Lungee_03";
        uniform = "CUP_O_TKI_Khet_Partug_02";
        vest = "CUP_V_OI_TKI_Jacket1_03_ARM";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "CUP_H_TK_PilotHelmet";
        uniform = "CUP_U_C_Pilot_01";
        vest = "CUP_V_OI_TKI_Jacket3_01_ARM";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };
};