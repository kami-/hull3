class CUP_CZ_DE_90 {
    class Rifleman {
        headGear = "CUP_H_CZ_Helmet01";
        goggles = "";
        uniform = "CUP_U_B_CZ_DST_NoKneepads";
        vest = "CUP_V_CZ_vest04_ARM";
        backpack = "B_Kitbag_sgg";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_CZ_DST_Kneepads_Gloves";
        vest = "CUP_V_CZ_vest06_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_CZ_Hat01";
    };

    class Crew : Rifleman {
        uniform = "CUP_U_B_CZ_DST_TShirt";
        headGear = "CUP_H_CZ_Helmet05";
        vest = "CUP_V_CZ_vest02_ARM";
        backpack = "CUP_B_ACRScout_m95";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        vest = "CUP_V_CZ_vest14_ARM";
        backpack = "B_Kitbag_sgg";
    };

    class FTL : Leader {
        vest = "CUP_V_CZ_vest08_ARM";
        headGear = "CUP_H_CZ_Helmet02";
        uniform = "CUP_U_B_CZ_DST_Kneepads";
    };

    class AR : Rifleman {
        uniform = "CUP_U_B_CZ_DST_Kneepads_Gloves";
        vest = "CUP_V_CZ_vest12_ARM";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_oli";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_CZ_Helmet02";
        uniform = "CUP_U_B_CZ_DST_Kneepads_Gloves";
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
        vest = "CUP_V_CZ_vest18_ARM";
        headGear = "CUP_H_CZ_Helmet02";
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_CZ_Hat04";
        uniform = "CUP_U_B_CZ_DST_Kneepads_Gloves";
        goggles = "G_Bandanna_khk";
        vest = "CUP_V_CZ_vest04_ARM";
        backpack = "CUP_B_ACRScout_m95";
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
        headGear = "CUP_H_RUS_ZSH_Shield_Up";
        uniform = "CUP_U_B_CZ_Pilot_WDL";
        vest = "CUP_V_CZ_vest20_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
