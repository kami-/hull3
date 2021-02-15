class CUP_RU_RATNIK_WD {
    class Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_Summer";
        goggles = "CUP_G_RUS_Balaclava_Ratnik";
        uniform = "CUP_U_O_RUS_Ratnik_Summer";
        vest = "CUP_Vest_RUS_6B45_Sh117_ARM";
        backpack = "ark_backpack_med";
    };

    class Leader : Rifleman {
        goggles = "";
        vest = "CUP_Vest_RUS_6B45_Sh117_VOG_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_RUS_Beret_VDV";
    };

    class Crew : Rifleman {
        headGear = "H_Tank_eaf_F";
        goggles = "";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        goggles = "CUP_G_RUS_Balaclava_Ratnik_v2";
        backpack = "ark_backpack_large";
    };

    class FTL : Leader {
        headGear = "CUP_H_RUS_6B47_v2_GogglesClosed_Summer";
        goggles = "CUP_G_RUS_Balaclava_Ratnik_v2";
    };

    class AR : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesUp_Summer";
        vest = "CUP_Vest_RUS_6B45_Sh117_PKP_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesDown_Summer";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
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
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
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
        headGear = "CUP_H_RUS_6B47_v2_GogglesUp_Summer";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesClosed_Summer";
        goggles = "CUP_RUS_Balaclava_grn";
        backpack = "ark_backpack_small";
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
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
