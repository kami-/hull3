class PMC_CBRN {
    class Rifleman {
        headGear = "MNP_Helmet_BLK";
        goggles = "skn_m04_gas_mask_blk";
        uniform = "skn_u_nbc_indep_blk";
        vest = "CUP_V_PMC_CIRAS_Black_Patrol_ARM";
        backpack = "B_FieldPack_blk";
    };

    class Leader : Rifleman {
        uniform = "skn_u_nbc_indep_blk";
        vest = "CUP_V_PMC_CIRAS_Black_TL_ARM";
    };

    class Officer : Leader {
        headGear = "MNP_Helmet_BLK";
        vest = "CUP_V_PMC_CIRAS_Black_TL_ARM";
    };

    class Crew : Rifleman {
        headGear = "H_Cap_blk_ION";
        goggles = "skn_m04_gas_mask_bare_dry";
        uniform = "skn_u_nbc_indep_blk";
        vest = "CUP_V_PMC_CIRAS_Black_Veh_ARM";
        backpack = "B_LegStrapBag_black_F";
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
        backpack = "CUP_B_USPack_Black";
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

    class MATAG : AAR {
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

    class SAMG : AR {
        backpack = "CUP_B_USPack_Black";
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
        backpack = "B_AssaultPack_blk";
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
        headGear = "H_PilotHelmetHeli_B";
        backpack = "B_LegStrapBag_black_F";
    };

    class PCM : P {
    };

};
