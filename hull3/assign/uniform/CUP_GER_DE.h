class CUP_GER_DE {
    class Rifleman {
        headGear = "CUP_H_Ger_M92_Cover_Trop";
        goggles = "";
        uniform = "CUP_U_B_GER_Tropentarn_1";
        vest = "CUP_V_B_GER_PVest3_Des";
        backpack = "CUP_B_GER_Pack_Tropentarn";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_GER_Tropentarn_2";
        vest = "CUP_V_B_GER_PVest2_Des";
    };

    class Officer : Leader {
        headGear = "CUP_H_Ger_Beret_Grn";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_USMC_ACVC_DES";
        uniform = "CUP_U_B_GER_Overalls_Tank";
        vest = "CUP_V_B_GER_Tactical_Trop";
        backpack = "CUP_B_GER_Medic_Tropentarn";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
    };

    class FTL : Leader {
        goggles = "CUP_G_PMC_RadioHeadset";
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        uniform = "CUP_U_B_GER_Tropentarn_2";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        goggles = "CUP_G_PMC_RadioHeadset";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        goggles = "CUP_G_PMC_RadioHeadset";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
    };

    class MATAG : AAR {
        goggles = "CUP_G_PMC_RadioHeadset";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
    };

    class HATAG : AAR {
        goggles = "CUP_G_PMC_RadioHeadset";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        goggles = "CUP_G_PMC_RadioHeadset";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        goggles = "CUP_G_PMC_RadioHeadset";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        goggles = "CUP_G_PMC_RadioHeadset";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        goggles = "CUP_G_PMC_RadioHeadset";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        goggles = "CUP_G_PMC_RadioHeadset";
        uniform = "CUP_U_B_GER_Tropentarn_2";
    };

    class ENGA : ENG {
        goggles = "";
    };

    class SN : Rifleman {
        headGear = "CUP_H_Ger_Boonie_desert";
        uniform = "CUP_U_B_GER_Tropentarn_2";
        vest = "CUP_V_B_GER_Tactical_Trop";
        bacpack = "CUP_B_GER_Medic_Tropentarn";
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
        uniform = "CUP_U_B_GER_Fleck_Overalls_Pilot";
        backpack = "B_Parachute";
    };

    class PCM : P {
        headGear = "H_CrewHelmetHeli_B";
    };

};
