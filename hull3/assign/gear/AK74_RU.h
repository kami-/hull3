class AK74_RU {
    class Rifleman {
        primaryWeapon = "hlc_rifle_ak74";
        primaryWeaponItems[] = {};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        addHandgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"HandGrenade", 1},
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"hlc_30Rnd_545x39_T_AK", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_30Rnd_545x39_B_AK", 4},
            {"hlc_30Rnd_545x39_T_AK", 2}
        };
        basicAssignItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {};
        vestItems[] = {};
        backpackItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        vestRadios[] = {};
        backpackRadios[] = {};
        uniformMedicalItems[] = {{"ACE_elasticBandage", 10}};
        vestMedicalItems[] = {};
        backpackMedicalItems[] = {};
        code = "";
        headGear = "";
        uniform = "";
        goggles = "";
        vest = "";
        backpack = "";
    };

    class Leader : Rifleman {
        primaryWeapon = "hlc_rifle_aks74_GL";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 4},
            {"hlc_VOG25_AK", 4},
            {"hlc_GRD_White", 2},
            {"hlc_GRD_red", 2},
            {"hlc_30Rnd_545x39_T_AK", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"hlc_30Rnd_545x39_T_AK", 2},
            {"hlc_GRD_White", 2},
            {"hlc_GRD_red", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {"ItemGPS"};
        binocular = "ACE_Vector";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "hlc_rifle_aks74u";
        primaryWeaponItems[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"hlc_30Rnd_545x39_B_AK", 4}};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS"};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {};
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "hlc_rifle_ak74";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"hlc_30Rnd_545x39_T_AK", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"hlc_30Rnd_545x39_B_AK", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        backpackMedicalItems[] = {
            {"ACE_elasticBandage", 30},
            {"ACE_morphine", 30},
            {"ACE_epinephrine", 30},
            {"ACE_bloodIV", 12}
        };
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        primaryWeapon = "hlc_rifle_rpk74n";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"hlc_45Rnd_545x39_t_rpk", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_45Rnd_545x39_t_rpk", 6}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_45Rnd_545x39_t_rpk", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "hlc_rifle_ak74";
        primaryWeaponItems[] = {};
        secondaryWeapon = "CUP_launch_RPG18";
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"hlc_30Rnd_545x39_T_AK", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_30Rnd_545x39_B_AK", 4},
            {"hlc_30Rnd_545x39_T_AK", 2}
        };
    };

    class MATG : RAT {
        secondaryWeapon = "CUP_launch_RPG7V";
        backpackMagazines[] = {
            {"CUP_PG7VR_M", 2},
            {"CUP_OG7_M", 1}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"hlc_30Rnd_545x39_T_AK", 2},
            {"CUP_PG7VR_M", 2},
            {"CUP_OG7_M", 1}
        };
        binocular = "ACE_Vector";
    };

    class MATAC : MATAG {
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_PKM";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_30Rnd_545x39_T_AK", 2},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
        binocular = "ACE_Vector";
    };

    class HATG : MATG {
        secondaryWeapon = "CUP_launch_Metis";
        secondaryWeaponItems[] = {"CUP_AT13_M"};
        backpackMagazines[] = {{"CUP_AT13_M", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_AT13_M", 1}
        };
    };

    class HATAC : HATAG {
    };

    class ENG : Rifleman {
        primaryWeapon = "hlc_rifle_ak74";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"hlc_30Rnd_545x39_T_AK", 2}
        };
        backpackMagazines[] = {
            {"Toolkit", 1},
            {"MineDetector", 1},
            {"DemoCharge_Remote_Mag", 3},
            {"SLAMDirectionalMine_Wire_Mag", 2}
        };
        assignItems[] = {"ItemGPS"};
        vestItems[] = {
            {"ACE_DefusalKit", 1},
            {"ACE_M26_Clacker", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class ENGA : ENG {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SN : Rifleman {
        primaryWeapon = "CUP_srifle_SVD";
        handgunWeapon = "CUP_hgun_Makarov";
        primaryWeaponItems[] = {"CUP_optic_PSO_1"};
        vestMagazines[] = {
            {"CUP_10Rnd_762x54_SVD_M", 4},
            {"CUP_8Rnd_9x18_Makarov_M", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_10Rnd_762x54_SVD_M", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "ACE_Vector";
    };

    class VC : Crew {
        binocular = "ACE_Vector";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {
            {"hlc_rifle_ak74", 2},
            {"CUP_launch_RPG18", 5},
            {"hlc_rifle_aks74", 2}
        };
        magazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 30},
            {"hlc_45Rnd_545x39_t_rpk", 10},
            {"hlc_GRD_White", 5},
            {"ACE_HandFlare_White", 5},
            {"HandGrenade", 5},
            {"SmokeShell", 5}
        };
        items[] = {
            {"Toolkit", 1},
            {"ItemGPS", 1}
        };
        radios[] = {
            {"ACRE_PRC343", 2},
            {"ACRE_PRC152", 2}
        };
        medicalItems[] = {{"ACE_elasticBandage", 6}};
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"hlc_rifle_ak74", 2},
            {"CUP_launch_RPG18", 10},
            {"hlc_rifle_aks74", 2}
        };
        magazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 60},
            {"hlc_45Rnd_545x39_t_rpk", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"hlc_GRD_White", 10},
            {"CUP_RPG18_M", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1},
            {"ItemGPS", 1}
        };
        radios[] = {
            {"ACRE_PRC343", 2},
            {"ACRE_PRC152", 2}
        };
        medicalItems[] = {{"ACE_elasticBandage", 6}};
    };

    class Armored : Truck {
        weapons[] = {{"CUP_launch_RPG18", 10}};
        magazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 60},
            {"hlc_45Rnd_545x39_t_rpk", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"hlc_GRD_White", 10},
            {"CUP_RPG18_M", 10},
            {"CUP_PG7VL_M", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1},
            {"ItemGPS", 1}
        };
        radios[] = {
            {"ACRE_PRC343", 2},
            {"ACRE_PRC152", 2}
        };
        medicalItems[] = {{"ACE_elasticBandage", 6}};
    };

};
