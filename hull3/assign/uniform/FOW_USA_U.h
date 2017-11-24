class FOW_USA_U {
    class Rifleman {
        headGear = "fow_h_us_m1";
        goggles = "";
        uniform = "fow_u_us_m37_01_private";
        vest = "fow_v_us_garand";
        backpack = "fow_b_us_m1928";
    };

    class Leader : Rifleman {
        headGear = "fow_h_us_m1_nco";
        uniform = "fow_u_us_m37_02_private";
        vest = "fow_v_us_carbine_nco";
    };

    class Officer : Leader {
        headGear = "fow_h_us_m1_officer";
        uniform = "fow_u_us_m37_01_private";
    };

    class Crew : Rifleman {
        headGear = "H_LIB_US_Helmet_Tank";
        uniform = "fow_u_us_pilot_01";
        vest = "fow_v_us_45";
        backpack = "fow_b_us_m1944";
    };

    class CO : Officer {
    };

    class XO : CO {
        vest = "fow_v_us_thompson_nco";
        backpack = "fow_b_us_radio";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "fow_h_us_m1_medic";
        vest = "fow_v_us_carbine";
        backpack = "fow_b_us_m1944";
        uniform = "fow_u_us_m37_02_private";
    };

    class FTL : Leader {
        vest = "fow_v_us_thompson";
    };

    class AR : Rifleman {
        headGear = "fow_h_us_m1_closed";
        uniform = "fow_u_us_m37_01_private";
        vest = "fow_v_us_bar";
    };

    class AAR : Rifleman {
        backpack = "fow_b_us_m1928";
        vest = "fow_v_us_grenade";
    };

    class RAT : Rifleman {
        headGear = "fow_h_us_m1_folded";
        vest = "fow_v_us_carbine";
    };

    class MMGG : AR {
        backpack = "fow_b_us_m1944";
    };

    class MMGAG : AAR {
        vest = "fow_v_us_asst_mg";
    };

    class HMGG : AR {
        vest = "fow_v_us_carbine";
        backpack = "fow_b_usa_m1919_weapon";
    };

    class HMGAG : AAR {
        vest = "fow_v_us_asst_mg";
        backpack = "fow_b_usa_m1919_support";
    };

    class HMGAC : AAR {
        vest = "fow_v_us_garand";
        backpack = "fow_b_usa_m1919_weapon";
    };

    class MATG : RAT {
        vest = "fow_v_us_carbine";
        backpack = "fow_b_us_rocket_bag";
    };

    class MATAG : AAR {
        vest = "fow_v_us_thompson";
        backpack = "fow_b_us_rocket_bag";
    };

    class MATAC : MATAG {
        vest = "fow_v_us_garand";
        backpack = "fow_b_us_rocket_bag";
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
        vest = "fow_v_us_carbine";
        backpack = "fow_b_us_m2_mortar_weapon";
    };

    class MTRAG : AAR {
        vest = "fow_v_us_thompson";
        backpack = "fow_b_us_m2_mortar_support";
    };

    class MTRAC : AAR {
        vest = "fow_v_us_garand";
        backpack = "fow_b_us_m2_mortar_weapon";
    };

    class ENG : Rifleman {
        uniform = "fow_u_us_m37_01_private";
        vest = "fow_v_us_carbine_eng";
        backpack = "fow_b_us_m1944";
        headGear = "fow_h_us_m1";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "fow_h_us_m1";
        uniform = "fow_u_us_m37_02_private";
        vest = "fow_v_us_garand";
        backpack = "fow_b_us_bandoleer";
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
        headGear = "fow_h_us_flight_helmet";
        uniform = "fow_u_us_pilot_02";
        vest = "fow_v_us_45";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
