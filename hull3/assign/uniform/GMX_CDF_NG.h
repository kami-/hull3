class GMX_CDF_NG {
    class Rifleman {
        headGear = "gmx_cdf2022_army_headgear_m92_oli";
        goggles = "";
        uniform = "gmx_cdf2022_army_uniform_soldier_oli";
        vest = "gmx_cdf2022_army_vest_90_rifleman_oli";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "gmx_cdf2022_army_uniform_soldier_rolled_oli";
        vest = "gmx_cdf2022_army_vest_90_leader_oli";
    };

    class Officer : Leader {
        headGear = "gmx_cdf2022_army_beret_grn";
    };

    class Crew : Rifleman {
        headGear = "gm_gc_army_headgear_crewhat_80_blk";
        vest = "gmx_cdf2022_army_vest_90_crew_oli";
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
        vest = "gmx_cdf2022_army_vest_90_medic_oli";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_oli";
    };

    class AR : Rifleman {
        vest = "gmx_cdf2022_army_vest_90_machinegunner_oli";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_oli";
    };

    class MMGG : AR {
        vest = "gmx_cdf2022_army_vest_90_machinegunner_oli";
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_oli";
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_oli";
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_oli";
    };

    class DHATAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_oli";
    };

    class SAMAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_oli";
    };

    class GMGAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_oli";
    };

    class MTRAG : AAR {
        vest = "gmx_cdf2022_army_vest_90_leader_oli";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "gmx_cdf2022_army_headgear_m92_glasses_oli";
        vest = "gmx_cdf2022_army_vest_90_demolition_oli";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "gmx_cdf2022_army_beret_grn";
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
        headGear = "gm_gc_headgear_zsh3_wht";
        vest = "gm_ge_army_vest_pilot_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
