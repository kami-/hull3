class AK74_RU {
    class Rifleman {
        primaryWeapon = "hlc_rifle_ak12";
        primaryWeaponItems[] = {"optic_Aco"};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "hgun_Rook40_F";
        addHandgunItems[] = {};
        uniformWeapons[] = {
        };
        vestWeapons[] = {
        };
        backpackWeapons[] = {
        };
        uniformMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 20},
            {"16Rnd_9x21_Mag", 3}
        };
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 20},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        backpackMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 20},
            {"hlc_30Rnd_545x39_t_ak", 20},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        uniformItems[] = {
        };
        vestItems[] = {
        };
        backpackItems[] = {
        };
        uniformRadios[] = {"ACRE_PRC343"};
        vestRadios[] = {};
        backpackRadios[] = {};
        uniformMedical[] = {
        };
        vestMedical[] = {
        };
        backpackMedical[] = {
        };
        code = "";
    };

    class Leader : Rifleman {
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
    };

    class RAT : Rifleman {
    };

    class MATG : Rifleman {
    };

    class MMGG : Rifleman {
    };

    class MMGAG : Rifleman {
    };

    class MATAG : Rifleman {
    };

    class MATAC : MATAG {
    };

    class HATG : Rifleman {
    };

    class HATAG : Rifleman {
    };

    class HATAC : HATAG {
    };

    class ENG : Rifleman {
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
    };

    class SP : Rifleman {
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
    };

    class PCM : Crew {
    };

    class Vehicle {
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
    };

    class Armored : Vehicle {
    };
};