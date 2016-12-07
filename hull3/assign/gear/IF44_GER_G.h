class IF44_GER_G {
    class Rifleman {
        primaryWeapon = "LIB_K98";
        primaryWeaponItems[] = {};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        addHandgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"LIB_shg24", 1},
            {"LIB_nb39", 1}
        };
        vestMagazines[] = {
            {"LIB_5Rnd_792x57", 8},
            {"LIB_5Rnd_792x57_t", 2}
        };
        backpackMagazines[] = {
            {"LIB_shg24", 1},
            {"LIB_nb39", 1},
            {"LIB_5Rnd_792x57", 6},
            {"LIB_5Rnd_792x57_t", 4}
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
        primaryWeapon = "LIB_MP40";
        primaryWeaponItems[] = {};
        vestMagazines[] = {
            {"LIB_32Rnd_9x19", 3},
            {"LIB_32Rnd_9x19", 2}
        };
        backpackMagazines[] = {
            {"LIB_shg24", 1},
            {"LIB_nb39", 1},
            {"LIB_32Rnd_9x19", 6},
            {"LIB_32Rnd_9x19", 2}
        };
        binocular = "LIB_Binocular_GER";
    };

    class Officer : Leader {
        binocular = "LIB_Binocular_GER";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class Crew : Rifleman {
        primaryWeapon = "";
        handgunWeapon = "LIB_P38";
        uniformMagazines[] = {
            {"LIB_8Rnd_9x19", 2},
            {"LIB_nb39", 1}
        };
        vestMagazines[] = {{"LIB_8Rnd_9x19", 4}};
        backpackMagazines[] = {};
    };

    class CO : Officer {
        primaryWeapon = "";
        handgunWeapon = "LIB_P38";
        vestMagazines[] = {
            {"LIB_8Rnd_9x19", 3},
            {"LIB_nb39", 2}
        };
        backpackMagazines[] = {
            {"LIB_8Rnd_9x19", 10},
            {"LIB_nb39", 1}
        };
    };

    class XO : CO {
        backpackMagazines[] = {
            {"LIB_nb39", 8},
            {"LIB_8Rnd_9x19", 10}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpackMagazines[] = {
            {"LIB_nb39", 4},
            {"LIB_5Rnd_792x57", 10}
        };
        binocular = "LIB_Binocular_GER";
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
        primaryWeapon = "LIB_MP44";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"LIB_30Rnd_792x33", 6}};
        backpackMagazines[] = {
            {"LIB_shg24", 1},
            {"LIB_nb39", 1},
            {"LIB_30Rnd_792x33", 6}
        };
    };

    class AAR : Rifleman {
        primaryWeapon = "LIB_G43";
        vestMagazines[] = {
            {"LIB_10Rnd_792x57", 2},
            {"LIB_shg24", 1}
        };
        backpackMagazines[] = {
            {"LIB_shg24", 1},
            {"LIB_nb39", 1},
            {"LIB_10Rnd_792x57", 2},
            {"LIB_10Rnd_792x57_T", 2}
        };
    };

    class RAT : Rifleman {
        secondaryWeapon = "LIB_PzFaust_30m";
        secondaryWeaponItems[] = {"LIB_1Rnd_PzFaust_30m"};
        backpackMagazines[] = {
            {"LIB_shg24", 1},
            {"LIB_nb39", 1},
            {"LIB_5Rnd_792x57", 10},
            {"LIB_rpg6", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "LIB_MG42";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"LIB_50Rnd_792x57_sS", 2}};
        backpackMagazines[] = {
            {"LIB_shg24", 1},
            {"LIB_nb39", 1},
            {"LIB_50Rnd_792x57_sS", 5},
            {"LIB_50Rnd_792x57", 3}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"LIB_shg24", 1},
            {"LIB_nb39", 1},
            {"LIB_5Rnd_792x57", 8},
            {"LIB_50Rnd_792x57_sS", 3},
            {"LIB_50Rnd_792x57", 3}
        };
        binocular = "LIB_Binocular_GER";
        uniformRadios[] = {};
    };

    class HMGG : Rifleman {
    };

    class HMGAG : HMGG {
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "LIB_RPzB";
        secondaryWeaponItems[] = {"LIB_1Rnd_RPzB"};
        backpackMagazines[] = {
            {"LIB_shg24", 1},
            {"LIB_nb39", 1},
            {"LIB_5Rnd_792x57", 10},
            {"LIB_1Rnd_RPzB", 3}
        };
    };

    class MATAG : Rifleman {
        binocular = "LIB_Binocular_GER";
        backpackMagazines[] = {
            {"LIB_shg24", 1},
            {"LIB_nb39", 1},
            {"LIB_5Rnd_792x57", 10},
            {"LIB_1Rnd_RPzB", 3}
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
        primaryWeapon = "LIB_K98ZF39";
        handgunWeapon = "LIB_P38";
        vestMagazines[] = {
            {"LIB_5Rnd_792x57", 8},
            {"LIB_8Rnd_9x19", 3}
        };
        backpackMagazines[] = {
            {"LIB_shg24", 1},
            {"LIB_nb39", 1},
            {"LIB_5Rnd_792x57", 8}
        };
        uniformRadios[] = {};
    };

    class SP : Rifleman {
        binocular = "LIB_Binocular_GER";
    };

    class VC : Crew {
        binocular = "LIB_Binocular_GER";
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
        weapons[] = {{"LIB_K98", 4}};
        magazines[] = {
            {"LIB_5Rnd_792x57", 15},
            {"LIB_32Rnd_9x19", 15},
            {"LIB_10Rnd_792x57", 10},
            {"LIB_30Rnd_792x33", 15},
            {"LIB_shg24", 5},
            {"LIB_nb39", 5}
        };
        items[] = {{"Toolkit", 1}};
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {{"LIB_K98", 4}};
        magazines[] = {
            {"LIB_5Rnd_792x57", 40},
            {"LIB_32Rnd_9x19", 20},
            {"LIB_10Rnd_792x57", 20},
            {"LIB_50Rnd_792x57_sS", 10},
            {"LIB_30Rnd_792x33", 10},
            {"DemoCharge_Remote_Mag", 5},
            {"LIB_shg24", 10},
            {"LIB_1Rnd_RPzB", 5},
            {"LIB_nb39", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Armored : Truck {
        weapons[] = {{"LIB_K98", 4}};
        magazines[] = {
            {"LIB_5Rnd_792x57", 40},
            {"LIB_32Rnd_9x19", 20},
            {"LIB_10Rnd_792x57", 20},
            {"LIB_50Rnd_792x57_sS", 10},
            {"LIB_30Rnd_792x33", 10},
            {"LIB_shg24", 10},
            {"LIB_1Rnd_RPzB", 5},
            {"LIB_nb39", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

};
