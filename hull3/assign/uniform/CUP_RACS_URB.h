class CUP_RACS_DE {
    class Rifleman {
        headGear = "CUP_H_RACS_Helmet_DPAT";
        goggles = "";
        uniform = "CUP_U_I_RACS_Urban_1";
        vest = "CUP_V_I_RACS_Carrier_Vest";
        backpack = "B_AssaultPack_cbr";
    };

    class Leader : Rifleman {
        vest = "CUP_V_I_RACS_Carrier_Vest_3";
        headGear = "CUP_H_RACS_Helmet_Goggles_DPAT";
    };

    class Officer : Leader {
        headGear = "CUP_H_RACS_Helmet_Headset_DPAT";
        vest = "CUP_V_I_RACS_Carrier_Vest_2";
    };

    class Crew : Rifleman {
        headGear = "AAF_D_HelmetCrew_B";
        uniform = "CUP_U_I_RACS_Urban_2";
        vest = "CUP_V_I_RACS_Carrier_Rig_3";
        backpack = "B_AssaultPack_cbr";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "AAF_D_Carryall_B";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "AAF_D_Carryall_B";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        backpack = "AAF_D_Carryall_B";
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
        backpack = "AAF_D_Carryall_B";
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
        headGear = "AAF_D_Cap_Headphones_B";
        goggles = "G_Bandanna_tan";
        uniform = "CUP_U_I_RACS_Urban_2";
        vest = "CUP_V_I_RACS_Carrier_Vest_2";
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
        uniform = "CUP_U_B_USMC_PilotOverall";
        headGear = "CUP_H_USMC_Helmet_Pilot";
        vest = "CUP_V_B_PilotVest";
        backpack = "B_Parachute";
        goggles = "G_Aviator";
    };

    class PCM : P {
    };

};
