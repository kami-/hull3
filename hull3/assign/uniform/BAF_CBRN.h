class BAF_CBRN {
    class Rifleman {
        headGear = "CUP_H_BAF_Helmet_4_MTP";
        goggles = "skn_m50_gas_mask_hood";
        uniform = "skn_u_nbc_bluf_mtp";
        vest = "skn_b_nbc_xrt_tac_brn_ARM";
        backpack = "CUP_B_Bergen_BAF";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_BAF_Helmet_4_MTP";
        uniform = "skn_u_nbc_bluf_mtp";
        vest = "skn_b_nbc_xrt_tac_brn_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_BAF_Helmet_Net_2_MTP";
        vest = "skn_b_nbc_xrt_tac_brn_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_BAF_Crew_Helmet_MTP";
        uniform = "skn_u_nbc_bluf_mtp";
        vest = "skn_b_nbc_xrt_tac_brn_ARM";
        backpack = "B_AssaultPack_cbr";
        goggles = "skn_m50_gas_mask";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_BAF_Helmet_3_MTP";
        uniform = "skn_u_nbc_bluf_mtp";
        vest = "skn_b_nbc_xrt_tac_brn_ARM";
        backpack = "CUP_B_Bergen_BAF";
    };

    class FTL : Leader {
        vest = "skn_b_nbc_xrt_tac_brn_ARM";
    };

    class AR : Rifleman {
        headGear = "CUP_H_BAF_Helmet_Net_2_MTP";
        uniform = "skn_u_nbc_bluf_mtp";
        vest = "skn_b_nbc_xrt_tac_brn_ARM";
    };

    class AAR : Rifleman {
    };

    class RAT : Rifleman {
        uniform = "skn_u_nbc_bluf_mtp";
    };

    class MMGG : AR {
        backpack = "CUP_B_Bergen_BAF";
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
        backpack = "CUP_B_Bergen_BAF";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "CUP_B_Bergen_BAF";
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
        uniform = "skn_u_nbc_bluf_mtp";
        vest = "skn_b_nbc_xrt_tac_brn_ARM";
        backpack = "CUP_B_Bergen_BAF";
        headGear = "CUP_H_BAF_Helmet_4_MTP";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_BAF_Helmet_4_MTP";
        goggles = "skn_m50_gas_mask_hood";
        uniform = "skn_u_nbc_bluf_mtp";
        vest = "skn_b_nbc_xrt_tac_brn_ARM";
        backpack = "B_AssaultPack_cbr";
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
        headGear = "CUP_H_BAF_Helmet_Pilot";
        uniform = "skn_u_nbc_bluf_mtp";
        vest = "skn_b_nbc_xrt_tac_brn_ARM";
        backpack = "B_LegStrapBag_olive_F";
    };

    class PCM : P {
    };

};
