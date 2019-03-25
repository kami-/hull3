class IDF_10 {
    class Rifleman {
        headGear = "CUP_H_CZ_Helmet07";
        goggles = "";
        uniform = "MNP_CombatUniform_ISR";
        vest = "MNP_Vest_ISRKahki_1_ARM";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
    };

    class Officer : Leader {
        headGear = "H_Cap_oli";
        goggles = "G_Aviator";
        vest = "MNP_Vest_ISRKahki_2_ARM";
    };

    class Crew : Rifleman {
        headGear = "usm_helmet_cvc";
        vest = "V_TacVest_oli_ARM";
        backpack = "B_AssaultPack_rgr";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
        headGear = "H_Cap_oli_hs";
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_oli";
    };

    class FTL : Leader {
        headGear = "CUP_H_CZ_Helmet08";
        goggles = "CUP_FR_NeckScarf";
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_oli";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_CZ_Helmet08";
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
        headGear = "H_Booniehat_oli";
        goggles = "G_Bandanna_khk";
        uniform = "MNP_CombatUniform_ISR";
        vest = "MNP_Vest_ISRKahki_2_ARM";
        backpack = "B_Kitbag_rgr";
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
        headGear = "H_PilotHelmetHeli_O";
        vest = "CUP_V_B_PilotVest_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_O";
    };

};
