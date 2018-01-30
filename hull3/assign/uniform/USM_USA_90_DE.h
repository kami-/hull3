class USM_USA_90_DE {
    class Rifleman {
        headGear = "usm_helmet_pasgt_dcu";
        goggles = "";
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_lbv_rm_ARM";
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class Leader : Rifleman {
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_lbv_gr_ARM";
    };

    class Officer : Leader {
        headGear = "usm_bdu_cap_dcu";
    };

    class Crew : Rifleman {
        headGear = "usm_helmet_cvc";
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_ARM";
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "usm_pack_alice_prc119";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "usm_pack_m5_medic";
        vest = "usm_vest_pasgtdcu_lbv_rm_ARM";
    };

    class FTL : Leader {
        headGear = "usm_helmet_pasgt_g_dcu";
        vest = "usm_vest_pasgtdcu_lbv_rmp_ARM";
    };

    class AR : Rifleman {
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_lbv_mg_ARM";
        backpack = "usm_pack_200rnd_556_bandoliers";
    };

    class AAR : Rifleman {
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class RAT : Rifleman {
        backpack = "CUP_B_AlicePack_Khaki";
        headGear = "usm_helmet_pasgt_g_dcu";
    };

    class MMGG : AR {
        backpack = "usm_pack_762x51_ammobelts";
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
        backpack = "usm_pack_alice";
    };

    class MATAG : RAT {
        backpack = "usm_pack_alice";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "usm_pack_alice";
    };

    class HATAG : RAT {
        backpack = "usm_pack_alice";
    };

    class HATAC : HATAG {
    };

    class DHATG : Rifleman {
    };

    class DHATAG : Rifleman {
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
    };

    class SAMAG : Rifleman {
    };

    class SAMAC : Rifleman {
    };

    class GMGG : Rifleman {
    };

    class GMGAG : Rifleman {
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
    };

    class MTRAG : Rifleman {
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        uniform = "usm_bdu_dcu";
        headGear = "usm_helmet_pasgt_g_dcu";
        backpack = "usm_pack_alice";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "usm_bdu_boonie_dcu";
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_lbv_rmp_ARM";
        backpack = "CUP_B_AlicePack_Khaki";
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
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
