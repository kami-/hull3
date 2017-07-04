class G36_GER {
    class Rifleman {
        primaryWeapon = "hlc_rifle_G36KA1KSK";
        primaryWeaponItems[] = {"RH_compM2l", "RH_SFM952V"};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        addHandgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"HandGrenade", 1},
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"hlc_30rnd_556x45_EPR_G36", 6},
            {"hlc_30rnd_556x45_Tracers_G36", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_30rnd_556x45_EPR_G36", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2}
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
        primaryWeapon = "HLC_Rifle_G36KSKAG36";
        primaryWeaponItems[] = {"RH_compM2l", "RH_SFM952V"};
        vestMagazines[] = {
            {"hlc_30rnd_556x45_EPR_G36", 6},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"hlc_30rnd_556x45_Tracers_G36", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_30rnd_556x45_EPR_G36", 4},
            {"hlc_30rnd_556x45_Tracers_G36", 2},
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
        primaryWeapon = "hlc_rifle_G36C";
        primaryWeaponItems[] = {};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"hlc_30rnd_556x45_EPR_G36", 4}};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
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
        primaryWeapon = "hlc_rifle_G36C";
        primaryWeaponItems[] = {"RH_compM21", "RH_SFM952V"};
        vestMagazines[] = {
            {"hlc_30rnd_556x45_EPR_G36", 6},
            {"hlc_30rnd_556x45_Tracers_G36", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"hlc_30rnd_556x45_EPR_G36", 2}
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
        primaryWeapon = "hlc_lmg_MG3";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"hlc_100Rnd_762x51_T_MG3", 2}};
        backpackMagazines[] = {
            {"hlc_100Rnd_762x51_M_MG3", 2},
            {"hlc_100Rnd_762x51_T_MG3", 2}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_100Rnd_762x51_M_MG3", 2},
            {"hlc_100Rnd_762x51_T_MG3", 2}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "hlc_rifle_G36KA1KSK";
        secondaryWeapon = "CUP_launch_M72A6";
        vestMagazines[] = {
            {"hlc_30rnd_556x45_EPR_G36", 6},
            {"hlc_30rnd_556x45_Tracers_G36", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_30rnd_556x45_EPR_G36", 4},
            {"hlc_30rnd_556x45_Tracers_G36", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "hlc_lmg_MG3";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"hlc_250Rnd_762x51_T_MG3", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_250Rnd_762x51_T_MG3", 2}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"hlc_250Rnd_762x51_T_MG3", 2}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "hlc_rifle_G36KA1KSK";
        backpack = "CUP_B_M2_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        backpack = "CUP_B_M2_MiniTripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        primaryWeapon = "hlc_rifle_G36KA1KSK";
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
        primaryWeapon = "hlc_rifle_G36KA1KSK";
        secondaryWeapon = "CUP_launch_Javelin";
        secondaryWeaponItems[] = {"CUP_Javelin_M"};
        backpackMagazines[] = {{"CUP_Javelin_M", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_Javelin_M", 1}
        };
    };

    class HATAC : HATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class DHATG : Rifleman {
        primaryWeapon = "hlc_rifle_G36KA1KSK";
        backpack = "CUP_B_Tow_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "CUP_B_TOW_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
        primaryWeapon = "hlc_rifle_G36KA1KSK";
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
            {"ACE_Chemlight_HiRed", 2},
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
        primaryWeapon = "hlc_rifle_G36KA1KSK";
        backpack = "CUP_B_Mk19_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "CUP_B_Mk19_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        primaryWeapon = "hlc_rifle_G36KA1KSK";
        backpack = "CUP_B_M252_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "CUP_B_M252_Bipod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        primaryWeapon = "hlc_rifle_G36KA1KSK";
        vestMagazines[] = {
            {"hlc_30rnd_556x45_EPR_G36", 6},
            {"hlc_30rnd_556x45_Tracers_G36", 2}
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
        primaryWeapon = "CUP_srifle_L129A1_HG";
        handgunWeapon = "CUP_hgun_Glock17";
        primaryWeaponItems[] = {"RH_ta31rco", "RH_SFM952V", "RH_HBLM"};
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_L129_M", 4},
            {"CUP_17Rnd_9x19_glock17", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_762x51_L129_M", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        primaryWeapon = "hlc_rifle_G36KA1KSK";
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
            {"hlc_rifle_G36KA1KSK", 4},
            {"CUP_launch_M72A6", 5}
        };
        magazines[] = {
            {"hlc_30rnd_556x45_EPR_G36", 15},
            {"hlc_30rnd_556x45_EPR_G36", 15},
            {"hlc_100Rnd_762x51_M_MG3", 10},
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
            {"hlc_rifle_G36KA1KSK", 4},
            {"CUP_launch_M72A6", 10}
        };
        magazines[] = {
            {"hlc_30rnd_556x45_EPR_G36", 40},
            {"hlc_30rnd_556x45_EPR_G36", 20},
            {"hlc_100Rnd_762x51_M_MG3", 20},
            {"hlc_250Rnd_762x51_T_MG3", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"CUP_MAAWS_HEAT_M", 5},
            {"CUP_Javelin_M", 5},
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
        weapons[] = {{"CUP_launch_M72A6", 10}};
        magazines[] = {
            {"hlc_30rnd_556x45_EPR_G36", 40},
            {"hlc_30rnd_556x45_EPR_G36", 20},
            {"hlc_100Rnd_762x51_M_MG3", 20},
            {"hlc_250Rnd_762x51_T_MG3", 10},
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
