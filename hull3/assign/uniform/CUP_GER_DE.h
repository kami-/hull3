class CUP_GER_DE {
    class Rifleman {
        headGear = "CUP_H_Ger_M92_Cover_Trop";
        goggles = "";
        uniform = "CUP_U_B_GER_Tropentarn_5";
        vest = "CUP_V_B_GER_PVest_Trop_RFL_ARM";
        backpack = "CUP_B_GER_Pack_Tropentarn";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_GER_Tropentarn_6";
        vest = "CUP_V_B_GER_PVest_Trop_TL_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_Ger_Beret_INF_Grn";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_DES";
        uniform = "CUP_U_B_GER_Overalls_Tank";
        vest = "CUP_V_B_GER_Tactical_Trop_ARM";
        backpack = "CUP_B_GER_Medic_Tropentarn";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        vest = "CUP_V_B_GER_PVest_Trop_Med_ARM";
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG";
    };

    class FTL : Leader {
        vest = "CUP_V_B_GER_PVest_Trop_Gren_ARM";
    };

    class AR : Rifleman {
        uniform = "CUP_U_B_GER_Tropentarn_2";
        vest = "CUP_V_B_GER_PVest_Trop_MG_ARM";
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG";
    };

    class AAR : Rifleman {
        uniform = "CUP_U_B_GER_Tropentarn_7";
    };

    class RAT : Rifleman {
        uniform = "CUP_U_B_GER_Tropentarn_3";
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG";
    };

    class MMGG : AR {
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
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
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
        uniform = "CUP_U_B_GER_Tropentarn_1";
        vest = "CUP_V_B_GER_PVest_Fleck_TL_ARM";
        headGear = "CUP_H_Ger_M92_Cover_Trop_GG";
    };

    class ENGA : ENG {
        vest = "CUP_V_B_GER_PVest_Fleck_RFL_ARM";
    };

    class SN : Rifleman {
        headGear = "CUP_H_Ger_Boonie2_desert";
        uniform = "CUP_U_B_GER_Tropentarn_1";
        vest = "CUP_V_B_GER_PVest_Fleck_RFL_LT_ARM";
        backpack = "CUP_B_GER_Medic_Tropentarn";
    };

    class SP : SN {
        headGear = "CUP_H_Ger_Boonie_desert";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_PilotHelmetHeli_B";
        uniform = "CUP_U_B_GER_Fleck_Overalls_Tank";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_B";
    };

};
