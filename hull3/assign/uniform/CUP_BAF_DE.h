class CUP_BAF_DE {
    class Rifleman {
        headGear = "CUP_H_BAF_Helmet_1_DDPM";
        goggles = "";
        uniform = "CUP_U_B_BAF_DDPM_S2_UnRolled";
        vest = "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2_ARM";
        backpack = "CUP_B_Bergen_BAF";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_BAF_Helmet_4_DDPM";
        uniform = "CUP_U_B_BAF_DDPM_S1_RolledUp";
        vest = "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_BAF_Officer_Beret_PRR_U";
        vest = "CUP_V_BAF_Osprey_Mk2_DDPM_Officer_ARM";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_BAF_Crew_Helmet_DDPM";
        uniform = "CUP_U_B_BAF_DDPM_S1_RolledUp";
        vest = "CUP_V_BAF_Osprey_Mk2_DDPM_Crewman_ARM";
        backpack = "B_AssaultPack_cbr";
        goggles = "CUP_FR_NeckScarf2";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_BAF_Helmet_3_DDPM";
        uniform = "CUP_U_B_BAF_DDPM_S2_UnRolled";
        vest = "CUP_V_BAF_Osprey_Mk2_DDPM_Medic_ARM";
        backpack = "CUP_B_Bergen_BAF";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "CUP_H_BAF_Helmet_2_DDPM";
        uniform = "CUP_U_B_BAF_DDPM_Tshirt";
        vest = "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1_ARM";
    };

    class AAR : Rifleman {
    };

    class RAT : Rifleman {
        vest = "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1_ARM";
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
        uniform = "CUP_U_B_BAF_DDPM_Tshirt";
        vest = "CUP_V_BAF_Osprey_Mk2_DDPM_Sapper_ARM";
        backpack = "CUP_B_Bergen_BAF";
        headGear = "CUP_H_BAF_Helmet_4_DDPM";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_BAF_Helmet_1_DDPM";
        goggles = "CUP_FR_NeckScarf2";
        uniform = "CUP_U_B_BAF_DDPM_S1_RolledUp";
        vest = "CUP_V_BAF_Osprey_Mk2_DDPM_Scout_ARM";
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
        uniform = "CUP_U_B_BAF_DDPM_S1_RolledUp";
        vest = "CUP_V_BAF_Osprey_Mk2_DDPM_Pilot_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};
