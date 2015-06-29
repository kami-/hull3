class Katiba_CN {
    class Rifleman {
        primaryWeapon = "arifle_Katiba_F";
        primaryWeaponItems[] = {"acc_flashlight"};
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
            {"30Rnd_65x39_caseless_green", 6},
            {"30Rnd_65x39_caseless_green_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_green", 4},
            {"30Rnd_65x39_caseless_green_Tracer", 2}
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
        primaryWeapon = "arifle_Katiba_GL_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"30Rnd_65x39_caseless_green_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_green", 4},
            {"30Rnd_65x39_caseless_green_Tracer", 2},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"UGL_FlareWhite_F", 2}
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
        primaryWeapon = "SMG_02_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        assignItems[] = {"ItemGPS"};
        vestMagazines[] = {{"30Rnd_9x21_Mag", 4}};
        backpackMagazines[] = {};
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
        primaryWeapon = "arifle_Katiba_C_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"30Rnd_65x39_caseless_green_Tracer", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"30Rnd_65x39_caseless_green_Tracer", 2}
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
        primaryWeapon = "LMG_Zafir_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        vestMagazines[] = {{"150Rnd_762x51_Box", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"150Rnd_762x51_Box", 2},
            {"150Rnd_762x51_Box_Tracer", 4}
        };
    };

    class AAR : Rifleman {
        binocular = "Binocular";
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"150Rnd_762x51_Box", 2},
            {"150Rnd_762x51_Box_Tracer", 2}
        };
    };

    class RAT : Rifleman {
        primaryWeapon = "arifle_Katiba_C_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        secondaryWeapon = "CUP_launch_RPG18";
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"30Rnd_65x39_caseless_green_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_green", 4},
            {"30Rnd_65x39_caseless_green_Tracer", 2}
        };
    };

    class MATG : RAT {
        secondaryWeapon = "CUP_launch_RPG7V";
        backpackMagazines[] = {{"CUP_PG7VR_M", 2}};
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"30Rnd_65x39_caseless_green_Tracer", 2},
            {"CUP_PG7VR_M", 2}
        };
        binocular = "ACE_Vector";
    };

    class MATAC : MATAG {
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_Pecheneg";
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
            {"30Rnd_65x39_caseless_green_Tracer", 2},
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
            {"30Rnd_65x39_caseless_green_Tracer", 2},
            {"CUP_AT13_M", 1}
        };
    };

    class HATAC : HATAG {
    };

    class ENG : Rifleman {
        primaryWeapon = "arifle_Katiba_C_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"30Rnd_65x39_caseless_green_Tracer", 2}
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
        primaryWeapon = "srifle_DMR_01_F";
        handgunWeapon = "hgun_Rook40_F";
        primaryWeaponItems[] = {"optic_MRCO"};
        vestMagazines[] = {
            {"10Rnd_762x51_Mag", 4},
            {"16Rnd_9x21_Mag", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"10Rnd_762x51_Mag", 3}
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
            {"arifle_Katiba_F", 2},
            {"CUP_launch_RPG18", 5},
            {"arifle_Katiba_C_F", 2}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 30},
            {"150Rnd_762x51_Box", 10},
            {"1Rnd_Smoke_Grenade_shell", 5},
            {"UGL_FlareWhite_F", 5},
            {"ACE_HandFlare_White", 5},
            {"HandGrenade", 5},
            {"SmokeShell", 5}
        };
        items[] = {
            {"ItemGPS", 1},
            {"Toolkit", 1}
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
            {"arifle_Katiba_F", 2},
            {"CUP_launch_RPG18", 10},
            {"arifle_Katiba_C_F", 2}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 60},
            {"150Rnd_762x51_Box", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
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
            {"30Rnd_65x39_caseless_green", 60},
            {"150Rnd_762x51_Box", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
            {"CUP_PG7VR_M", 5},
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
