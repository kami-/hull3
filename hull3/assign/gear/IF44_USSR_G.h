class IF44_USSR_G {
    class Rifleman {
        primaryWeapon = "LIB_M9130";
        primaryWeaponItems[] = {};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"LIB_rg42", 1},
            {"LIB_RDG", 1}
        };
        vestMagazines[] = {
            {"LIB_5Rnd_762x54", 8},
            {"LIB_5Rnd_762x54_t30", 2}
        };
        backpackMagazines[] = {
            {"LIB_rg42", 1},
            {"LIB_RDG", 1},
            {"LIB_5Rnd_762x54", 6},
            {"LIB_5Rnd_762x54_t30", 4}
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
        primaryWeapon = "LIB_PPSh41_m";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"LIB_35Rnd_762x25", 3},
            {"LIB_35Rnd_762x25_t", 2}
        };
        backpackMagazines[] = {
            {"LIB_rg42", 1},
            {"LIB_RDG", 1},
            {"LIB_35Rnd_762x25", 6},
            {"LIB_35Rnd_762x25_t", 2}
        };
        binocular = "LIB_Binocular_SU";
    };

    class Officer : Leader {
        binocular = "LIB_Binocular_SU";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class Crew : Rifleman {
        primaryWeapon = "";
        handgunWeapon = "LIB_M1895";
        uniformMagazines[] = {
            {"LIB_7Rnd_762x38", 2},
            {"LIB_RDG", 1}
        };
        vestMagazines[] = {{"LIB_7Rnd_762x38", 4}};
        backpackMagazines[] = {};
    };

    class CO : Officer {
        primaryWeapon = "";
        handgunWeapon = "LIB_TT33";
        vestMagazines[] = {
            {"LIB_8Rnd_762x25", 3},
            {"LIB_RDG", 2}
        };
        backpackMagazines[] = {
            {"LIB_8Rnd_762x25", 10},
            {"LIB_RDG", 1}
        };
    };

    class XO : CO {
        backpackMagazines[] = {
            {"LIB_RDG", 8},
            {"LIB_8Rnd_762x25", 10}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "LIB_M44";
        backpackMagazines[] = {
            {"LIB_RDG", 4},
            {"LIB_5Rnd_762x54", 10}
        };
        binocular = "LIB_Binocular_SU";
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
        primaryWeapon = "LIB_SVT_40";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"LIB_10Rnd_762x54", 6}};
        backpackMagazines[] = {
            {"LIB_rg42", 1},
            {"LIB_RDG", 1},
            {"LIB_10Rnd_762x54", 2},
            {"LIB_10Rnd_762x54_t30", 4}
        };
    };

    class AAR : Rifleman {
        primaryWeapon = "LIB_PPSh41_d";
        vestMagazines[] = {
            {"LIB_71Rnd_762x25", 2},
            {"LIB_rg42", 1}
        };
        backpackMagazines[] = {
            {"LIB_rg42", 1},
            {"LIB_RDG", 1},
            {"LIB_71Rnd_762x25", 2},
            {"LIB_71Rnd_762x25_t", 2}
        };
    };

    class RAT : Rifleman {
        primaryWeapon = "LIB_M9130";
        backpackMagazines[] = {
            {"LIB_rg42", 1},
            {"LIB_RDG", 1},
            {"LIB_5Rnd_762x54", 10},
            {"LIB_rpg6", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "LIB_DP28";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"LIB_47Rnd_762x54", 2}};
        backpackMagazines[] = {
            {"LIB_rg42", 1},
            {"LIB_RDG", 1},
            {"LIB_47Rnd_762x54", 5},
            {"LIB_47Rnd_762x54d", 3}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"LIB_rg42", 1},
            {"LIB_RDG", 1},
            {"LIB_5Rnd_762x54", 8},
            {"LIB_47Rnd_762x54", 3},
            {"LIB_47Rnd_762x54d", 3}
        };
        binocular = "LIB_Binocular_SU";
        uniformRadios[] = {};
    };

    class HMGG : Rifleman {
    };

    class HMGAG : HMGG {
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
    };

    class MATAG : Rifleman {
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
        primaryWeapon = "LIB_M44";
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
        primaryWeapon = "LIB_M9130PU";
        handgunWeapon = "LIB_M1895";
        vestMagazines[] = {
            {"LIB_5Rnd_762x54", 8},
            {"LIB_7Rnd_762x38", 3}
        };
        backpackMagazines[] = {
            {"LIB_rg42", 1},
            {"LIB_RDG", 1},
            {"LIB_5Rnd_762x54", 8}
        };
        uniformRadios[] = {};
    };

    class SP : Rifleman {
        binocular = "LIB_Binocular_SU";
    };

    class VC : Crew {
        binocular = "LIB_Binocular_SU";
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
            {"LIB_M9130", 4},
            {"LIB_M44", 2}
        };
        magazines[] = {
            {"LIB_5Rnd_762x54", 15},
            {"LIB_35Rnd_762x25", 15},
            {"LIB_71Rnd_762x25", 10},
            {"LIB_10Rnd_762x54", 15},
            {"LIB_rg42", 5},
            {"LIB_RDG", 5}
        };
        items[] = {{"Toolkit", 1}};
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"LIB_M9130", 4},
            {"LIB_M44", 4}
        };
        magazines[] = {
            {"LIB_5Rnd_762x54", 40},
            {"LIB_35Rnd_762x25", 20},
            {"LIB_71Rnd_762x25", 20},
            {"LIB_47Rnd_762x54", 10},
            {"LIB_10Rnd_762x54", 10},
            {"DemoCharge_Remote_Mag", 5},
            {"LIB_rg42", 10},
            {"LIB_RDG", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Armored : Truck {
        weapons[] = {{"LIB_M9130", 4}};
        magazines[] = {
            {"LIB_5Rnd_762x54", 40},
            {"LIB_35Rnd_762x25", 20},
            {"LIB_71Rnd_762x25", 20},
            {"LIB_47Rnd_762x54", 10},
            {"LIB_10Rnd_762x54", 10},
            {"LIB_rg42", 10},
            {"LIB_RDG", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

};
