class Katiba_IRN {
    class Rifleman {
        primaryWeapon = "arifle_Katiba_F";
        primaryWeaponItems[] = {"RH_SFM952V"};
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
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_green", 4},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
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
        primaryWeapon = "arifle_Katiba_GL_F";
        primaryWeaponItems[] = {"RH_SFM952V"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_green", 4},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"UGL_FlareWhite_F", 2}
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
        primaryWeapon = "SMG_02_F";
        primaryWeaponItems[] = {"RH_SFM952V"};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
        vestMagazines[] = {{"30Rnd_9x21_Mag", 4}};
        backpackMagazines[] = {};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"1Rnd_Smoke_Grenade_shell", 8},
            {"1Rnd_SmokeRed_Grenade_shell", 8}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "arifle_Katiba_C_F";
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
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
        primaryWeapon = "LMG_Zafir_F";
        primaryWeaponItems[] = {"RH_SFM952V"};
        vestMagazines[] = {{"150Rnd_762x54_Box", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"150Rnd_762x54_Box", 2},
            {"150Rnd_762x54_Box_Tracer", 4}
        };
    };

    class AAR : Rifleman {
        binocular = "Binocular";
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"150Rnd_762x54_Box", 2},
            {"150Rnd_762x54_Box_Tracer", 2}
        };
    };

    class RAT : Rifleman {
        primaryWeapon = "arifle_Katiba_C_F";
        secondaryWeapon = "CUP_launch_RPG7V";
        secondaryWeaponItems[] = {"CUP_PG7V_M"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_65x39_caseless_green", 4},
            {"CUP_PG7V_M", 2}
        };
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
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
        binocular = "ACE_VectorDay";
    };

     class HMGG : Rifleman {
        primaryWeapon = "arifle_Katiba_C_F";
        backpack = "O_HMG_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };
    
    class HMGAG : HMGG {
        backpack = "O_HMG_01_support_F";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };
    
    class HMGAC : Rifleman {
    };
   
    class MATG : RAT {
        primaryWeapon = "arifle_Katiba_C_F";
        secondaryWeapon = "CUP_launch_RPG7V";
        secondaryWeaponItems[] = {"CUP_PG7VL_M","CUP_optic_PGO7V3"};
        backpackMagazines[] = {
            {"CUP_PG7VL_M", 2},
            {"CUP_PG7VR_M", 1},
            {"CUP_OG7_M", 1}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"CUP_PG7VL_M", 2},
            {"CUP_PG7VR_M", 1},
            {"CUP_OG7_M", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
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

    class DHATG : Rifleman {
        primaryWeapon = "arifle_Katiba_C_F";
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
        primaryWeapon = "arifle_Katiba_C_F";
        secondaryWeapon = "CUP_launch_Igla";
        secondaryWeaponItems[] = {"CUP_Igla_M"};
        backpackMagazines[] = {{"CUP_Igla_M", 1}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_Igla_M", 1}
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
        binocular = "Binocular";
        assignItems[] = {};
    };

    class GMGG : Rifleman {
        primaryWeapon = "arifle_Katiba_C_F";
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
        primaryWeapon = "arifle_Katiba_C_F";
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
        primaryWeapon = "arifle_Katiba_C_F";
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
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
            {"10Rnd_762x54_Mag", 4},
            {"16Rnd_9x21_Mag", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"10Rnd_762x54_Mag", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "ACE_VectorDay";
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
            {"arifle_Katiba_F", 2},
            {"CUP_launch_RPG18", 2},
            {"arifle_Katiba_C_F", 2}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 30},
            {"150Rnd_762x54_Box", 10},
            {"1Rnd_Smoke_Grenade_shell", 5},
            {"UGL_FlareWhite_F", 5},
            {"ACE_HandFlare_White", 5},
            {"CUP_PG7V_M", 2},
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
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"arifle_Katiba_F", 2},
            {"CUP_launch_RPG18", 4},
            {"arifle_Katiba_C_F", 2}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 60},
            {"150Rnd_762x54_Box", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"CUP_PG7V_M", 5},
            {"CUP_PG7VR_M", 5},
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
        weapons[] = {{"CUP_launch_RPG18", 4}};
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 60},
            {"150Rnd_762x54_Box", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
            {"CUP_PG7VR_M", 5},
            {"CUP_PG7V_M", 5},
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