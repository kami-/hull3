class RK62_FIN {
    class Rifleman {
        primaryWeapon = "hlc_rifle_RK62";
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
            {"30Rnd_762x39_Mag_F", 6},
            {"30Rnd_762x39_Mag_Tracer_F", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_762x39_Mag_F", 4},
            {"30Rnd_762x39_Mag_Tracer_F", 2}
        };
        basicAssignItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {{"ACE_Flashlight_KSF1", 1}};
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
        primaryWeapon = "hlc_rifle_RK62";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"30Rnd_762x39_Mag_F", 4},
            {"30Rnd_762x39_Mag_Tracer_F", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_762x39_Mag_F", 6},
            {"30Rnd_762x39_Mag_Tracer_F", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {"ItemGPS"};
        binocular = "ACE_VectorDay";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "hlc_rifle_RK62";
        primaryWeaponItems[] = {};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"30Rnd_762x39_Mag_F", 4}};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"SmokeShell", 8},
            {"SmokeShellRed", 8}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "hlc_rifle_RK62";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"30Rnd_762x39_Mag_F", 6},
            {"30Rnd_762x39_Mag_Tracer_F", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"30Rnd_762x39_Mag_F", 2}
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
        primaryWeapon = "CUP_lmg_PKM";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 4}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 8}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 6}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "hlc_rifle_RK62";
        primaryWeaponItems[] = {};
        secondaryWeapon = "CUP_launch_NLAW";
        vestMagazines[] = {
            {"30Rnd_762x39_Mag_F", 6},
            {"30Rnd_762x39_Mag_Tracer_F", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_762x39_Mag_F", 4},
            {"30Rnd_762x39_Mag_Tracer_F", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_PKM";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 4}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 4}
        };
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "hlc_rifle_RK62";
        backpack = "O_HMG_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        backpack = "O_HMG_01_support_F";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "launch_NLAW_F";
        secondaryWeaponItems[] = {"NLAW_F"};
        backpackMagazines[] = {{"NLAW_F", 3}};
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"NLAW_F", 3}
        };
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        uniformRadios[] = {"ACRE_PRC343"};
        assignItems[] = {};
    };

    class HATG : MATG {
        secondaryWeapon = "launch_I_Titan_short_F";
        secondaryWeaponItems[] = {"Titan_AT"};
        backpackMagazines[] = {{"Titan_AT", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"Titan_AT", 2}
        };
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
    };

    class HATAC : Rifleman {
        uniformRadios[] = {"ACRE_PRC343"};
        assignItems[] = {};
    };

    class DHATG : Rifleman {
        primaryWeapon = "hlc_rifle_RK62";
        backpack = "O_AT_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "O_HMG_01_support_F";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
        secondaryWeapon = "launch_I_Titan_F";
        secondaryWeaponItems[] = {"Titan_AA"};
        backpackMagazines[] = {{"Titan_AA", 2}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"Titan_AA", 2}
        };
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class SAMAC : SAMAG {
        uniformRadios[] = {"ACRE_PRC343"};
        assignItems[] = {};
    };

    class GMGG : Rifleman {
        primaryWeapon = "hlc_rifle_RK62";
        backpack = "O_GMG_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "O_HMG_01_support_F";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        backpack = "O_Mortar_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "O_Mortar_01_support_F";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        primaryWeapon = "hlc_rifle_RK62";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"30Rnd_762x39_Mag_F", 6},
            {"30Rnd_762x39_Mag_Tracer_F", 2}
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
        handgunWeapon = "hgun_P07_F";
        primaryWeaponItems[] = {"CUP_optic_PSO_1"};
        vestMagazines[] = {
            {"CUP_10Rnd_762x54_SVD_M", 4},
            {"16Rnd_9x21_Mag", 3}
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
        binocular = "ACE_VectorDay";
        vestMagazines[] = {
            {"30Rnd_762x39_Mag_F", 4},
            {"30Rnd_762x39_Mag_Tracer_F", 2}
        };
    };

    class VC : Crew {
        binocular = "ACE_VectorDay";
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
            {"hlc_rifle_RK62", 4},
            {"CUP_launch_NLAW", 5}
        };
        magazines[] = {
            {"30Rnd_762x39_Mag_F", 15},
            {"30Rnd_762x39_Mag_Tracer_F", 15},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 20},
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
            {"hlc_rifle_RK62", 4},
            {"CUP_launch_NLAW", 10}
        };
        magazines[] = {
            {"30Rnd_762x39_Mag_F", 40},
            {"30Rnd_762x39_Mag_Tracer_F", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 40},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
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
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Armored : Truck {
        weapons[] = {{"CUP_launch_NLAW", 10}};
        magazines[] = {
            {"30Rnd_762x39_Mag_F", 40},
            {"30Rnd_762x39_Mag_Tracer_F", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 40},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"NLAW_F", 5},
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
