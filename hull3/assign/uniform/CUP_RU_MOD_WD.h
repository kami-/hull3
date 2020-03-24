class CUP_RU_MOD_WD {
    class Rifleman {
        headGear = "CUP_H_RUS_6B27_cover";
        goggles = "";
        uniform = "CUP_U_O_RUS_EMR_1";
        vest = "CUP_V_RUS_6B45_1_ARM";
        backpack = "ark_backpack_med";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_RUS_6B27_cover_headset";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "H_Tank_eaf_F";
        uniform = "CUP_U_O_RUS_EMR_2";
        vest = "CUP_V_RUS_6B45_2_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        uniform = "CUP_U_O_RUS_EMR_rolled_up_gloves_pads";
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        vest = "CUP_V_RUS_6B45_3_ARM";
        backpack = "ark_backpack_large";
    };

    class FTL : Leader {
        headGear = "CUP_H_RUS_6B27_cover_headset_goggles";
    };

    class AR : Rifleman {
        uniform = "CUP_U_O_RUS_EMR_gloves_pads";
        vest = "CUP_V_RUS_6B45_3_ARM";
    };

    class AAR : Rifleman {
        headGear = "CUP_H_RUS_6B46";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        uniform = "CUP_U_O_RUS_EMR_rolled_up_gloves_pads";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_headset_goggles";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_headset_goggles";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_headset_goggles";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_headset_goggles";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_headset_goggles";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_headset_goggles";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_headset_goggles";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        headGear = "CUP_H_RUS_6B27_cover_headset_goggles";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_RUS_6B27_cover_headset_goggles";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_RUS_6B46";
    };

    class SN : Rifleman {
        headGear = "CUP_H_RUS_6B27_cover_headset_goggles";
        uniform = "CUP_U_O_RUS_EMR_rolled_up_gloves_pads";
        goggles = "G_Balaclava_oli";
        vest = "CUP_V_RUS_6B45_2_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        headGear = "CUP_H_RUS_6B27_cover_headset";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "CUP_H_RUS_ZSH_Shield_Up";
        uniform = "CUP_U_O_RUS_EMR_1";
        vest = "CUP_V_RUS_6B45_2_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
