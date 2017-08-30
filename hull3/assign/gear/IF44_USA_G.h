class IF44_USA_G {
    class Rifleman {
        primaryWeapon = "LIB_M1_Garand";
        primaryWeaponItems[] = {};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"LIB_US_Mk_2", 1},
            {"LIB_US_M18", 1}
        };
        vestMagazines[] = {
            {"LIB_8Rnd_762x63", 8},
            {"LIB_8Rnd_762x63", 2}
        };
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 1},
            {"LIB_US_M18", 1},
            {"LIB_8Rnd_762x63", 6},
            {"LIB_8Rnd_762x63", 4}
        };
        basicAssignItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {};
        vestItems[] = {};
        backpackItems[] = {};
        uniformRadios[] = {};
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
        primaryWeapon = "LIB_M1A1_Thompson";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"LIB_30Rnd_45ACP", 3},
            {"LIB_30Rnd_45ACP", 2}
        };
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 1},
            {"LIB_US_M18", 1},
            {"LIB_30Rnd_45ACP", 6},
            {"LIB_30Rnd_45ACP", 2}
        };
        binocular = "Binocular";
    };

    class Officer : Leader {
        primaryWeapon = "LIB_M1_Carbine";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"LIB_15Rnd_762x33", 3},
            {"LIB_15Rnd_762x33", 2}
        };
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 1},
            {"LIB_US_M18", 1},
            {"LIB_15Rnd_762x33", 6}
        };
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class Crew : Rifleman {
        primaryWeapon = "";
        handgunWeapon = "LIB_Colt_M1911";
        uniformMagazines[] = {
            {"LIB_7Rnd_45ACP", 2},
            {"LIB_US_M18", 1}
        };
        vestMagazines[] = {{"LIB_7Rnd_45ACP", 4}};
        backpackMagazines[] = {};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"LIB_US_M18", 8},
            {"LIB_15Rnd_762x33", 6}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpackMagazines[] = {
            {"LIB_US_M18", 4},
            {"LIB_8Rnd_762x63", 10}
        };
        binocular = "Binocular";
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
        primaryWeapon = "LIB_M1918A2_BAR";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"LIB_20Rnd_762x63", 6}};
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 1},
            {"LIB_US_M18", 1},
            {"LIB_20Rnd_762x63", 6}
        };
    };

    class AAR : Rifleman {
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 1},
            {"LIB_US_M18", 1},
            {"LIB_8Rnd_762x63", 10},
            {"LIB_rpg6", 2}
        };
    };

    class MMGG : Rifleman {
    };

    class MMGAG : Rifleman {
    };

    class HMGG : Rifleman {
    };

    class HMGAG : HMGG {
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "LIB_M1A1_Bazooka";
        secondaryWeaponItems[] = {"LIB_1Rnd_60mm_M6"};
        backpackMagazines[] = {
            {"LIB_8Rnd_762x63", 6},
            {"LIB_1Rnd_60mm_M6", 3}
        };
    };

    class MATAG : Rifleman {
        binocular = "Binocular";
        backpackMagazines[] = {
            {"LIB_8Rnd_762x63", 6},
            {"LIB_1Rnd_60mm_M6", 3}
        };
    };

    class MATAC : MATAG {
    };

    class HATG : MATG {
    };

    class HATAG : MATAG {
    };

    class HATAC : HATAG {
    };

    class DHATG : Rifleman {
    };

    class DHATAG : HMGG {
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
    };

    class SAMAG : Rifleman {
    };

    class SAMAC : SAMAG {
    };

    class GMGG : Rifleman {
    };

    class GMGAG : HMGG {
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
    };

    class MTRAG : MTRG {
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        backpackMagazines[] = {
            {"Toolkit", 1},
            {"DemoCharge_Remote_Mag", 3},
            {"DemoCharge_Remote_Mag", 2}
        };
        vestItems[] = {
            {"ACE_DefusalKit", 1},
            {"ACE_M26_Clacker", 1}
        };
        uniformRadios[] = {};
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        primaryWeapon = "LIB_M1903A4_Springfield";
        handgunWeapon = "LIB_Colt_M1911";
        vestMagazines[] = {
            {"LIB_5Rnd_762x63", 8},
            {"LIB_7Rnd_45ACP", 3}
        };
        backpackMagazines[] = {
            {"LIB_US_Mk_2", 1},
            {"LIB_US_M18", 1},
            {"LIB_5Rnd_762x63", 8}
        };
        uniformRadios[] = {};
    };

    class SP : Rifleman {
        binocular = "Binocular";
    };

    class VC : Crew {
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
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
            {"LIB_M1_Garand", 4},
            {"LIB_M1_Carbine", 2}
        };
        magazines[] = {
            {"LIB_8Rnd_762x63", 15},
            {"LIB_30Rnd_45ACP", 15},
            {"LIB_20Rnd_762x63", 10},
            {"LIB_15Rnd_762x33", 15},
            {"LIB_5Rnd_762x63", 15},
            {"LIB_US_Mk_2", 5},
            {"LIB_US_M18", 5}
        };
        items[] = {{"Toolkit", 1}};
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"LIB_M1_Garand", 4},
            {"LIB_M1_Carbine", 4}
        };
        magazines[] = {
            {"LIB_8Rnd_762x63", 40},
            {"LIB_30Rnd_45ACP", 20},
            {"LIB_20Rnd_762x63", 20},
            {"LIB_15Rnd_762x33", 15},
            {"LIB_5Rnd_762x63", 15},
            {"DemoCharge_Remote_Mag", 5},
            {"LIB_US_Mk_2", 10},
            {"LIB_US_M18", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Armored : Truck {
        weapons[] = {{"LIB_M1_Garand", 4}};
        magazines[] = {
            {"LIB_8Rnd_762x63", 40},
            {"LIB_30Rnd_45ACP", 20},
            {"LIB_20Rnd_762x63", 20},
            {"LIB_15Rnd_762x33", 15},
            {"LIB_5Rnd_762x63", 15},
            {"LIB_US_Mk_2", 10},
            {"LIB_US_M18", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

};
