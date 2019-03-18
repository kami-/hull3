class CUP_SLA_DE {
    class Rifleman {
        headGear = "CUP_H_SLA_Helmet_DES";
        goggles = "";
        uniform = "CUP_U_O_SLA_Desert";
        vest = "CUP_V_O_SLA_6B3_1_DES_ARM";
        backpack = "CUP_B_CivPack_WDL";
    };

    class Leader : Rifleman {
        vest = "CUP_V_O_SLA_6B3_5_DES_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_SLA_Beret";
        goggles = "G_Aviator";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_SLA_TankerHelmet";
        uniform = "CUP_U_O_SLA_Overalls_Tank";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "CUP_B_SLA_Medicbag";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "CUP_B_HikingPack_Civ";
    };

    class FTL : Leader {
        vest = "CUP_V_O_SLA_6B3_4_DES_ARM";
    };

    class AR : Rifleman {
        vest = "CUP_V_O_SLA_6B3_3_DES_ARM";
    };

    class AAR : Rifleman {
        backpack = "CUP_B_HikingPack_Civ";
    };

    class RAT : Rifleman {
        vest = "CUP_V_O_SLA_6B3_2_DES_ARM";
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
        headGear = "CUP_H_SLA_Boonie_DES";
        goggles = "G_Bandanna_oli";
        vest = "CUP_V_O_SLA_6B3_2_DES_ARM";
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
        uniform = "CUP_U_O_SLA_Overalls_Pilot";
        headGear = "CUP_H_SLA_Pilot_Helmet";
        vest = "CUP_V_O_TK_CrewBelt_ARM";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };

};
