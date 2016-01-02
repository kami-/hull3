class CSAT {
    class Rifleman {
        headGear = "H_HelmetO_ocamo";
        goggles = "";
        uniform = "U_O_CombatUniform_ocamo";
        vest = "MNP_Vest_NZ_2";
        backpack = "AAF_D_Kitbag_B";
    };

    class Leader : Rifleman {
        vest = "MNP_Vest_NZ_1";
    };

    class Officer : Leader {
        headGear = "H_MilCap_ocamo";
        uniform = "U_O_OfficerUniform_ocamo";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_O";
        uniform = "U_O_CombatUniform_ocamo";
        vest = "V_BandollierB_cbr";
        backpack = "B_AssaultPack_rgr";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "AAF_D_Carryall_B";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        backpack = "AAF_D_Carryall_B";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "AAF_D_Carryall_B";
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
        backpack = "AAF_D_Carryall_B";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "AAF_D_Carryall_B";
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
        backpack = "AAF_D_Carryall_B";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_MilCap_ocamo";
        goggles = "G_Bandanna_tan";
        uniform = "U_O_SpecopsUniform_ocamo";
        vest = "V_HarnessO_brn";
        backpack = "B_AssaultPack_ocamo";
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
        headGear = "H_PilotHelmetHeli_O";
        uniform = "U_O_PilotCoveralls";
        vest = "V_Rangemaster_belt";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};