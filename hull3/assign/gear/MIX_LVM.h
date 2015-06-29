class MIX_LVM {
    class Rifleman {
        primaryWeapon = "hlc_rifle_g3a3";
        primaryWeaponItems[] = {};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        addHandgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"hlc_20rnd_762x51_b_G3", 6},
            {"HandGrenade", 1},
            {"hlc_20rnd_762x51_T_G3", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_20rnd_762x51_b_G3", 4},
            {"hlc_20rnd_762x51_T_G3", 2}
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
        primaryWeapon = "RH_M16A1gl";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"RH_30Rnd_556x45_M855A1", 6},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"30Rnd_556x45_Stanag_Tracer_Yellow", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"RH_30Rnd_556x45_M855A1", 4},
            {"30Rnd_556x45_Stanag_Tracer_Yellow", 2},
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
        primaryWeapon = "hlc_smg_mp5a2";
        primaryWeaponItems[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"hlc_30Rnd_9x19_B_MP5", 4}};
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
        primaryWeapon = "hlc_rifle_akm";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"hlc_30Rnd_762x39_b_ak", 6},
            {"hlc_30Rnd_762x39_t_ak", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"hlc_30Rnd_762x39_b_ak", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
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
        primaryWeapon = "hlc_rifle_rpk";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"hlc_75Rnd_762x39_m_rpk", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_75Rnd_762x39_m_rpk", 2},
            {"hlc_45Rnd_762x39_t_rpk", 4}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_75Rnd_762x39_m_rpk", 2},
            {"hlc_45Rnd_762x39_t_rpk", 2}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "hlc_rifle_akm";
        primaryWeaponItems[] = {};
        secondaryWeapon = "CUP_launch_RPG18";
        vestMagazines[] = {
            {"hlc_30Rnd_762x39_b_ak", 6},
            {"hlc_30Rnd_762x39_t_ak", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_30Rnd_762x39_b_ak", 4},
            {"hlc_30Rnd_762x39_t_ak", 2}
        };
    };

    class MATG : RAT {
        secondaryWeapon = "CUP_launch_RPG7V";
        secondaryWeaponItems[] = {"CUP_PG7VL_M"};
        backpackMagazines[] = {{"CUP_PG7VL_M", 3}};
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"hlc_20rnd_762x51_T_G3", 2},
            {"CUP_PG7VL_M", 3}
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
            {"hlc_20rnd_762x51_T_G3", 2},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
        binocular = "ACE_Vector";
    };

    class HATG : MATG {
        secondaryWeapon = "CUP_launch_M47";
        secondaryWeaponItems[] = {"CUP_Dragon_EP1_M"};
        backpackMagazines[] = {{"hlc_30Rnd_762x39_t_ak", 2}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {{"CUP_Dragon_EP1_M", 1}};
    };

    class HATAC : HATAG {
    };

    class ENG : Rifleman {
        primaryWeapon = "hlc_rifle_akm";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"hlc_30Rnd_762x39_b_ak", 6},
            {"hlc_30Rnd_762x39_t_ak", 2}
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
        handgunWeapon = "hgun_Rook40_F";
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
        binocular = "ACE_Vector";
        vestMagazines[] = {
            {"hlc_30Rnd_762x39_b_ak", 4},
            {"hlc_30Rnd_762x39_t_ak", 2}
        };
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
            {"hlc_rifle_g3a3", 2},
            {"CUP_launch_RPG18", 5},
            {"hlc_rifle_akm", 2}
        };
        magazines[] = {
            {"hlc_20rnd_762x51_b_G3", 15},
            {"RH_30Rnd_556x45_M855A1", 15},
            {"hlc_30Rnd_762x39_b_ak", 15},
            {"hlc_75Rnd_762x39_m_rpk", 10},
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
            {"hlc_rifle_g3a3", 2},
            {"CUP_launch_RPG18", 10},
            {"hlc_rifle_akm", 2}
        };
        magazines[] = {
            {"hlc_20rnd_762x51_b_G3", 40},
            {"RH_30Rnd_556x45_M855A1", 15},
            {"hlc_30Rnd_762x39_b_ak", 20},
            {"hlc_75Rnd_762x39_m_rpk", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
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
            {"hlc_20rnd_762x51_b_G3", 40},
            {"hlc_30Rnd_762x39_b_ak", 20},
            {"RH_30Rnd_556x45_M855A1", 15},
            {"hlc_75Rnd_762x39_m_rpk", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
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
