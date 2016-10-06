class LVM_DE {
    class Rifleman {
        headGear = "H_Bandanna_sand";
        goggles = "";
        uniform = "MNP_CombatUniform_Militia_DF";
        vest = "MNP_Vest_OD_A";
        backpack = "B_Kitbag_cbr";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_Militia_DB";
        vest = "MNP_Vest_OD_B";
        headGear = "H_Cap_tan";
    };

    class Officer : Leader {
        headGear = "H_MilCap_gry";
        uniform = "MNP_CombatUniform_Militia_DA";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_TK_TankerHelmet";
        vest = "V_BandollierB_cbr";
        backpack = "B_AssaultPack_cbr";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_khk";
        uniform = "MNP_CombatUniform_Militia_DE";
        headGear = "H_Booniehat_tan";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_Militia_DC";
        headGear = "H_Watchcap_cbr";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_khk";
        headGear = "H_Booniehat_tan";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_khk";
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
        backpack = "B_Carryall_khk";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_khk";
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
        uniform = "MNP_CombatUniform_Militia_DC";
        backpack = "B_Carryall_khk";
        headGear = "H_Cap_headphones";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_MilCap_gry";
        goggles = "G_Bandanna_khk";
        uniform = "MNP_CombatUniform_Militia_DC";
        vest = "V_BandollierB_khk";
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
        headGear = "CUP_H_SLA_Pilot_Helmet";
        uniform = "MNP_CombatUniform_Militia_DC";
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
