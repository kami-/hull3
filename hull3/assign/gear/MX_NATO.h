class MX_NATO {
    class Rifleman {
        primaryWeapon = "arifle_MX_F";
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
            {"30Rnd_65x39_caseless_mag", 6},
            {"30Rnd_65x39_caseless_mag_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_mag", 4},
            {"30Rnd_65x39_caseless_mag_Tracer", 2}
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
        uniformMedicalItems[] = {{"ACE_elasticBandage", 3}};
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
        primaryWeapon = "arifle_MX_GL_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 6},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"30Rnd_65x39_caseless_mag_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_mag", 4},
            {"30Rnd_65x39_caseless_mag_Tracer", 2},
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
        primaryWeapon = "SMG_01_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"30Rnd_45ACP_Mag_SMG_01", 4}};
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
        primaryWeapon = "arifle_MXC_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 6},
            {"30Rnd_65x39_caseless_mag_Tracer", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"30Rnd_65x39_caseless_mag", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
        backpackMedicalItems[] = {
            {"ACE_elasticBandage", 15},
            {"ACE_morphine", 10},
            {"ACE_epinephrine", 10},
            {"ACE_bloodIV", 8}
        };
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        primaryWeapon = "arifle_MX_SW_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        vestMagazines[] = {{"100Rnd_65x39_caseless_mag", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"100Rnd_65x39_caseless_mag", 2},
            {"100Rnd_65x39_caseless_mag_Tracer", 4}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"100Rnd_65x39_caseless_mag", 2},
            {"100Rnd_65x39_caseless_mag_Tracer", 2}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "arifle_MXC_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        secondaryWeapon = "CUP_launch_M136";
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 6},
            {"30Rnd_65x39_caseless_mag_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_mag", 4},
            {"30Rnd_65x39_caseless_mag_Tracer", 2}
        };
    };

    class MATG : RAT {
        secondaryWeapon = "launch_NLAW_F";
        secondaryWeaponItems[] = {"NLAW_F"};
        backpackMagazines[] = {{"NLAW_F", 3}};
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"30Rnd_65x39_caseless_mag_Tracer", 2},
            {"NLAW_F", 3}
        };
        binocular = "ACE_Vector";
    };

    class MATAC : MATAG {
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_M240";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_mag_Tracer", 2},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
        binocular = "ACE_Vector";
    };

    class HATG : MATG {
        secondaryWeapon = "launch_B_Titan_short_F";
        secondaryWeaponItems[] = {"Titan_AT"};
        backpackMagazines[] = {{"Titan_AT", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"30Rnd_65x39_caseless_mag_Tracer", 2},
            {"Titan_AT", 2}
        };
    };

    class HATAC : HATAG {
    };

    class ENG : Rifleman {
        primaryWeapon = "arifle_MXC_F";
        primaryWeaponItems[] = {"acc_flashlight"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 6},
            {"30Rnd_65x39_caseless_mag_Tracer", 2}
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
        primaryWeapon = "arifle_MXM_F";
        handgunWeapon = "hgun_P07_F";
        primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "bipod_01_F_snd"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 4},
            {"16Rnd_9x21_Mag", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_mag", 3}
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
            {"arifle_MX_F", 2},
            {"CUP_launch_M136", 5},
            {"arifle_MXC_F", 2}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_mag", 15},
            {"30Rnd_65x39_caseless_mag", 15},
            {"100Rnd_65x39_caseless_mag", 10},
            {"1Rnd_Smoke_Grenade_shell", 5},
            {"UGL_FlareWhite_F", 5},
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
            {"arifle_MX_F", 2},
            {"CUP_launch_M136", 10},
            {"arifle_MXC_F", 2}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_mag", 40},
            {"30Rnd_65x39_caseless_mag", 20},
            {"100Rnd_65x39_caseless_mag", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
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
        weapons[] = {{"CUP_launch_M136", 10}};
        magazines[] = {
            {"30Rnd_65x39_caseless_mag", 40},
            {"30Rnd_65x39_caseless_mag", 20},
            {"100Rnd_65x39_caseless_mag", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
            {"NLAW_F", 5},
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
