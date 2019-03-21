class CUP_SLA_PAR {
    class Rifleman {
        headGear = "H_Booniehat_oli";
        goggles = "";
        uniform = "CUP_U_O_Partisan_VSR_Mixed1";
        vest = "CUP_V_CDF_6B3_1_Green_ARM";
        backpack = "CUP_B_CivPack_WDL";
    };

    class Leader : Rifleman {
        vest = "CUP_V_CDF_6B3_5_Green_ARM";
        uniform = "CUP_U_O_Partisan_TTsKO";
        headGear = "CUP_H_SLA_SLCap";
    };

    class Officer : Leader {
        headGear = "CUP_H_SLA_SLCap";
        uniform = "CUP_U_O_Partisan_TTsKO_Mixed";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_SLA_TankerHelmet";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "CUP_B_SLA_Medicbag";
    };

    class CO : Officer {
        goggles = "G_Aviator";
        headGear = "CUP_H_SLA_BeretRed";
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "CUP_B_HikingPack_Civ";
    };

    class FTL : Leader {
        vest = "CUP_V_CDF_6B3_4_Green_ARM";
    };

    class AR : Rifleman {
        headGear = "H_Bandanna_khk";
        vest = "CUP_V_CDF_6B3_3_Green_ARM";
        uniform = "CUP_U_O_Partisan_VSR_Mixed2";
    };

    class AAR : Rifleman {
        backpack = "CUP_B_HikingPack_Civ";
        uniform = "CUP_U_O_Partisan_VSR_Mixed2";
    };

    class RAT : Rifleman {
        vest = "CUP_V_CDF_6B3_2_Green_ARM";
    };

    class MMGG : AR {
        backpack = "CUP_B_HikingPack_Civ";
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
        backpack = "CUP_B_HikingPack_Civ";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "CUP_B_HikingPack_Civ";
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
        backpack = "CUP_B_HikingPack_Civ";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_SLA_Boonie";
        goggles = "G_Bandanna_oli";
        vest = "CUP_V_CDF_6B3_2_Green_ARM";
        backpack = "CUP_B_CivPack_WDL";
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
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };

};
