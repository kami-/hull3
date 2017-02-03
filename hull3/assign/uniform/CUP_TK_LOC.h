class CUP_TK_LOC {
    class Rifleman {
        headGear = "CUP_H_TKI_Lungee_Open_03";
        goggles = "";
        uniform = "CUP_O_TKI_Khet_Jeans_04";
        vest = "CUP_V_OI_TKI_Jacket4_06_ARM";
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class Leader : Rifleman {
        uniform = "CUP_O_TKI_Khet_Jeans_04";
        vest = "CUP_V_OI_TKI_Jacket1_04_ARM";
        headGear = "CUP_H_TKI_Pakol_1_01";
    };

    class Officer : Leader {
        headGear = "CUP_H_TKI_SkullCap_01";
        uniform = "CUP_O_TKI_Khet_Jeans_02";
        vest = "CUP_V_OI_TKI_Jacket4_04_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_TK_TankerHelmet";
        vest = "V_Rangemaster_belt";
    };

    class CO : Officer {
        headGear = "CUP_H_TKI_Lungee_Open_06";
        uniform = "CUP_O_TKI_Khet_Jeans_04";
        vest = "CUP_V_OI_TKI_Jacket1_04_ARM";
        goggles = "G_Aviator";
    };

    class XO : CO {
        headGear = "CUP_H_TKI_Lungee_Open_04";
        uniform = "CUP_O_TKI_Khet_Partug_05";
        vest = "CUP_V_OI_TKI_Jacket4_06_ARM";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        uniform = "CUP_O_TKI_Khet_Jeans_03";
        headGear = "CUP_H_TKI_SkullCap_06";
        vest = "CUP_V_OI_TKI_Jacket2_06_ARM";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "CUP_O_TKI_Khet_Jeans_02";
        vest = "CUP_V_OI_TKI_Jacket1_05_ARM";
        headGear = "CUP_H_TKI_Lungee_02";
    };

    class AAR : Rifleman {
        uniform = "CUP_O_TKI_Khet_Partug_08";
        vest = "CUP_V_OI_TKI_Jacket4_05_ARM";
        headGear = "CUP_H_TKI_SkullCap_04";
    };

    class RAT : Rifleman {
        uniform = "CUP_O_TKI_Khet_Jeans_01";
        vest = "CUP_V_OI_TKI_Jacket4_06_ARM";
        headGear = "CUP_H_TKI_Pakol_1_06";
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
        uniform = "CUP_O_TKI_Khet_Jeans_02";
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_TKI_Lungee_04";
        uniform = "CUP_O_TKI_Khet_Jeans_04";
        vest = "CUP_V_OI_TKI_Jacket1_04_ARM";
    };

    class SP : SN {
        headGear = "CUP_H_TKI_Pakol_1_04";
        uniform = "CUP_O_TKI_Khet_Jeans_03";
        vest = "CUP_V_OI_TKI_Jacket2_05_ARM";
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
        vest = "CUP_V_OI_TKI_Jacket1_06_ARM";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };

};
