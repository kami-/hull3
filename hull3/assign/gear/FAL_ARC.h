class FAL_ARC {
    class Rifleman {
        primaryWeapon = "hlc_rifle_STG58F";
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
            {"hlc_20Rnd_762x51_B_fal", 6},
            {"hlc_20Rnd_762x51_T_fal", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_20Rnd_762x51_B_fal", 4},
            {"hlc_20Rnd_762x51_T_fal", 2}
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
        uniformMedicalItems[] = {{"ACE_fieldDressing", 10}};
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
        primaryWeapon = "hlc_rifle_osw_GL";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"hlc_20Rnd_762x51_B_fal", 6},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"hlc_20Rnd_762x51_T_fal", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_20Rnd_762x51_B_fal", 4},
            {"hlc_20Rnd_762x51_T_fal", 2},
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
        primaryWeapon = "hlc_smg_mp5a3";
        primaryWeaponItems[] = {};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"hlc_30Rnd_9x19_B_MP5", 4}};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS", "NVGoggles"};
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
        primaryWeapon = "hlc_rifle_STG58F";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"hlc_20Rnd_762x51_B_fal", 6},
            {"hlc_20Rnd_762x51_T_fal", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"hlc_20Rnd_762x51_B_fal", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        backpackMedicalItems[] = {
            {"ACE_fieldDressing", 30},
            {"ACE_morphine", 30},
            {"ACE_epinephrine", 30},
            {"ACE_bloodIV", 12}
        };
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        primaryWeapon = "hlc_lmg_minimi";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"hlc_200rnd_556x45_M_SAW", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_200rnd_556x45_M_SAW", 2},
            {"hlc_200rnd_556x45_T_SAW", 2}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_200rnd_556x45_M_SAW", 2},
            {"hlc_200rnd_556x45_T_SAW", 2}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "hlc_rifle_STG58F";
        primaryWeaponItems[] = {};
        secondaryWeapon = "CUP_launch_M136";
        vestMagazines[] = {
            {"hlc_20Rnd_762x51_B_fal", 6},
            {"hlc_20Rnd_762x51_T_fal", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_20Rnd_762x51_B_fal", 4},
            {"hlc_20Rnd_762x51_T_fal", 2}
        };
    };

    class MATG : RAT {
        secondaryWeapon = "CUP_launch_MAAWS";
        secondaryWeaponItems[] = {"CUP_MAAWS_HEAT_M", "CUP_optic_MAAWS_Scope"};
        backpackMagazines[] = {{"CUP_MAAWS_HEAT_M", 3}};
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"hlc_20Rnd_762x51_T_fal", 2},
            {"CUP_MAAWS_HEAT_M", 3}
        };
        binocular = "ACE_Vector";
    };

    class MATAC : MATAG {
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_M240";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", 4}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_20Rnd_762x51_T_fal", 2},
            {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", 4}
        };
        binocular = "ACE_Vector";
    };

    class HATG : MATG {
        secondaryWeapon = "launch_I_Titan_short_F";
        secondaryWeaponItems[] = {"Titan_AT"};
        backpackMagazines[] = {{"Titan_AT", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"hlc_20Rnd_762x51_T_fal", 2},
            {"Titan_AT", 2}
        };
    };

    class HATAC : HATAG {
    };

    class ENG : Rifleman {
        primaryWeapon = "hlc_rifle_STG58F";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"hlc_20Rnd_762x51_B_fal", 6},
            {"hlc_20Rnd_762x51_T_fal", 2}
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
        primaryWeapon = "srifle_EBR_F";
        handgunWeapon = "hgun_ACPC2_F";
        primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "bipod_03_F_blk"};
        vestMagazines[] = {
            {"20Rnd_762x51_Mag", 4},
            {"9Rnd_45ACP_Mag", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"20Rnd_762x51_Mag", 3}
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
            {"hlc_rifle_STG58F", 2},
            {"CUP_launch_M136", 5},
            {"hlc_rifle_STG58F", 2}
        };
        magazines[] = {
            {"hlc_20Rnd_762x51_B_fal", 15},
            {"hlc_20Rnd_762x51_B_fal", 15},
            {"hlc_200rnd_556x45_M_SAW", 10},
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
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"hlc_rifle_STG58F", 2},
            {"CUP_launch_M136", 10},
            {"hlc_rifle_STG58F", 2}
        };
        magazines[] = {
            {"hlc_20Rnd_762x51_B_fal", 40},
            {"hlc_20Rnd_762x51_B_fal", 20},
            {"hlc_200rnd_556x45_M_SAW", 20},
            {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", 10},
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
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Armored : Truck {
        weapons[] = {{"CUP_launch_M136", 10}};
        magazines[] = {
            {"hlc_20Rnd_762x51_B_fal", 40},
            {"hlc_20Rnd_762x51_B_fal", 20},
            {"hlc_200rnd_556x45_M_SAW", 20},
            {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
            {"CUP_MAAWS_HEAT_M", 5},
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
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

};
