class RU_CBRN {
    class Rifleman {
        headGear = "H_PASGT_basic_blue_F";
        goggles = "skn_s10_balaclava_blue_dry";
        uniform = "skn_u_nbc_opf_blue";
        vest = "skn_o_elbv_worn_no_bp_ARM";
        backpack = "B_FieldPack_blk";
    };

    class Leader : Rifleman {
	vest = "skn_o_elbv_worn_ARM";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "CUP_H_SLA_TankerHelmet";
        backpack = "B_AssaultPack_blk";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "CUP_B_USPack_Black";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        vest = "skn_o_elbv_worn_ARM";
    };

    class AAR : Rifleman {
        backpack = "CUP_B_USPack_Black";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "CUP_B_USPack_Black";
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
        backpack = "CUP_B_USPack_Black";
    };

    class MATAG : MATG {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "CUP_B_USPack_Black";
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

    class SAMG : HATG {
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
        backpack = "CUP_B_USPack_Black";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
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
        backpack = "B_LegStrapBag_black_F";
    };

    class PCM : P {
    };

};
