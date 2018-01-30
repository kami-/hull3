class M14_US {
    class Rifleman {
        primaryWeapon = "hlc_rifle_M14";
        primaryWeaponItems[] = {};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"HandGrenade", 1},
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"hlc_20Rnd_762x51_B_M14", 6},
            {"hlc_20Rnd_762x51_T_M14", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_20Rnd_762x51_B_M14", 4},
            {"hlc_20Rnd_762x51_T_M14", 2}
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
        primaryWeapon = "hlc_rifle_M14";
        handgunWeapon = "CUP_hgun_Colt1911";
        vestMagazines[] = {
            {"hlc_20Rnd_762x51_B_M14", 4},
            {"hlc_20Rnd_762x51_T_M14", 2},
            {"CUP_7Rnd_45ACP_1911", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_20Rnd_762x51_B_M14", 6},
            {"hlc_20Rnd_762x51_T_M14", 2}
        };
        assignItems[] = {};
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "";
        handgunWeapon = "CUP_hgun_Colt1911";
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"CUP_7Rnd_45ACP_1911", 4}};
        backpackMagazines[] = {};
        assignItems[] = {};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        vestMagazines[] = {
            {"hlc_20Rnd_762x51_B_M14", 4},
            {"hlc_20Rnd_762x51_T_M14", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"hlc_20Rnd_762x51_B_M14", 2}
        };
        assignItems[] = {};
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
        primaryWeapon = "hlc_lmg_m60";
        handgunWeapon = "CUP_hgun_Colt1911";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"hlc_100Rnd_762x51_T_M60E4", 2},
            {"CUP_7Rnd_45ACP_1911", 3}
        };
        backpackMagazines[] = {{"hlc_100Rnd_762x51_T_M60E4", 5}};
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_100Rnd_762x51_T_M60E4", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "CUP_glaunch_M79";
        secondaryWeapon = "CUP_launch_M72A6";
        handgunWeapon = "CUP_hgun_Colt1911";
        vestMagazines[] = {
            {"CUP_1Rnd_HE_M203", 10},
            {"CUP_1Rnd_HEDP_M203", 4},
            {"CUP_7Rnd_45ACP_1911", 6}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"1Rnd_Smoke_Grenade_shell", 4},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"UGL_FlareWhite_F", 4}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "hlc_lmg_m60";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"hlc_100Rnd_762x51_M_M60E4", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_100Rnd_762x51_M_M60E4", 4}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_100Rnd_762x51_M_M60E4", 4}
        };
        binocular = "Binocular";
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        backpack = "CUP_B_M2_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        backpack = "CUP_B_M2_MiniTripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "Binocular";
        assignItems[] = {};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "CUP_launch_MAAWS";
        secondaryWeaponItems[] = {"CUP_MAAWS_HEAT_M", "CUP_optic_MAAWS_Scope"};
        backpackMagazines[] = {
            {"CUP_MAAWS_HEAT_M", 2},
            {"CUP_MAAWS_HEDP_M", 1}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"CUP_MAAWS_HEAT_M", 2},
            {"CUP_MAAWS_HEDP_M", 1}
        };
        binocular = "Binocular";
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HATG : MATG {
        secondaryWeapon = "CUP_launch_M47";
        secondaryWeaponItems[] = {"CUP_Dragon_EP1_M"};
        backpackMagazines[] = {{"CUP_Dragon_EP1_M", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_Dragon_EP1_M", 1}
        };
    };

    class HATAC : HATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class DHATG : Rifleman {
        backpack = "CUP_B_Tow_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "CUP_B_TOW_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        binocular = "Binocular";
        assignItems[] = {};
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
        secondaryWeapon = "CUP_launch_FIM92Stinger";
        secondaryWeaponItems[] = {"CUP_Stinger_M"};
        backpackMagazines[] = {{"CUP_Stinger_M", 1}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_Stinger_M", 1}
        };
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "Binocular";
        assignItems[] = {};
    };

    class SAMAC : SAMAG {
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "Binocular";
        assignItems[] = {};
    };

    class GMGG : Rifleman {
        backpack = "CUP_B_Mk19_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "CUP_B_Mk19_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        binocular = "Binocular";
        assignItems[] = {};
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        backpack = "CUP_B_M252_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "CUP_B_M252_Bipod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_HandFlare_Red", 2},
            {"SmokeShell", 1}
        };
        binocular = "Binocular";
        assignItems[] = {};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        vestMagazines[] = {
            {"hlc_20Rnd_762x51_B_M14", 6},
            {"hlc_20Rnd_762x51_T_M14", 2}
        };
        backpackMagazines[] = {
            {"Toolkit", 1},
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
        primaryWeapon = "hlc_rifle_M21";
        handgunWeapon = "CUP_hgun_Colt1911";
        primaryWeaponItems[] = {"hlc_optic_artel_m14"};
        vestMagazines[] = {
            {"hlc_20Rnd_762x51_B_M14", 4},
            {"CUP_7Rnd_45ACP_1911", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_20Rnd_762x51_B_M14", 3}
        };
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "Binocular";
    };

    class VC : Crew {
        binocular = "Binocular";
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
            {"hlc_rifle_M14", 4},
            {"CUP_launch_M72A6", 5}
        };
        magazines[] = {
            {"hlc_20Rnd_762x51_B_M14", 15},
            {"hlc_20Rnd_762x51_B_M14", 15},
            {"hlc_100Rnd_762x51_T_M60E4", 10},
            {"1Rnd_Smoke_Grenade_shell", 5},
            {"CUP_1Rnd_HE_M203", 10},
            {"UGL_FlareWhite_F", 5},
            {"ACE_HandFlare_White", 5},
            {"HandGrenade", 5},
            {"SmokeShell", 5}
        };
        items[] = {{"Toolkit", 1}};
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
            {"hlc_rifle_M14", 4},
            {"CUP_launch_M72A6", 10}
        };
        magazines[] = {
            {"hlc_20Rnd_762x51_B_M14", 40},
            {"hlc_20Rnd_762x51_B_M14", 20},
            {"hlc_100Rnd_762x51_T_M60E4", 50},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
            {"CUP_1Rnd_HE_M203", 30},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"CUP_MAAWS_HEAT_M", 5},
            {"CUP_Dragon_EP1_M", 5},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1}
        };
        radios[] = {
            {"ACRE_PRC343", 2},
            {"ACRE_PRC152", 2}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Armored : Truck {
        weapons[] = {{"CUP_launch_M72A6", 10}};
        magazines[] = {
            {"hlc_20Rnd_762x51_B_M14", 40},
            {"hlc_20Rnd_762x51_B_M14", 20},
            {"hlc_100Rnd_762x51_T_M60E4", 30},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"CUP_1Rnd_HE_M203", 20},
            {"UGL_FlareWhite_F", 10},
            {"CUP_MAAWS_HEAT_M", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1}
        };
        radios[] = {
            {"ACRE_PRC343", 2},
            {"ACRE_PRC152", 2}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

};
