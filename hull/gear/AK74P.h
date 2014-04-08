class AK74P {
    class Rifleman {
        weapons[] = {"ACE_AKS74P"};
        magazines[] = {
            {"30Rnd_545x39_AK", 9},
            {"HandGrenade_East", 2},
            {"SmokeShell", 1}
        };
        ruck = "ACE_Rucksack_EAST";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"30Rnd_545x39_AK", 6},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
        items[] = {"ACRE_PRC343"};
        ifak[] = {1, 1, 1};
        code = "";
    };

    class Leader : Rifleman {
        weapons[] = {"ACE_AKS74P_GL"};
        magazines[] = {
            {"30Rnd_545x39_AK", 6},
            {"ACE_30Rnd_545x39_T_AK", 3},
            {"HandGrenade_East", 1},
            {"SmokeShell", 2},
            {"1Rnd_HE_GP25", 4},
            {"1Rnd_SMOKE_GP25", 2},
            {"1Rnd_SmokeRed_GP25", 1},
            {"1Rnd_SmokeGreen_GP25", 1}
        };
        ruckMagazines[] = {
            {"30Rnd_545x39_AK", 3},
            {"ACE_30Rnd_545x39_T_AK", 3},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1},
            {"1Rnd_SMOKE_GP25", 2},
            {"1Rnd_SmokeRed_GP25", 1},
            {"1Rnd_SmokeGreen_GP25", 1}
        };
        items[] = {"ACRE_PRC343", "Binocular"};
    };

    class Officer : Leader {
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "Binocular_Vector", "ItemGPS"};
    };

    class Crew : Rifleman {
        weapons[] = {"AKS_74_U"};
        magazines[] = {
            {"30Rnd_545x39_AK", 6},
            {"SmokeShell", 1},
            {"SmokeShellGreen", 1}
        };
        ruck = "ACE_Rucksack_EAST";
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343"};
    };

    class CO : Officer {
    };
    
    class DC : Officer {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        magazines[] = {
            {"30Rnd_545x39_AK", 6},
            {"SmokeShell", 2},
            {"SmokeShellGreen", 2}
        };
        ruck = "ACE_Rucksack_EAST";
        ruckMagazines[] = {
            {"ACE_30Rnd_545x39_T_AK", 2},
            {"SmokeShell", 2},
            {"SmokeShellGreen", 2},
            {"ACE_Morphine", 15},
            {"ACE_LargeBandage", 15},
            {"ACE_Epinephrine", 10},
            {"ACE_Medkit", 8}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148"};
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        weapons[] = {"RPK_74"};
        magazines[] = {
            {"ACE_75Rnd_545x39_T_RPK", 6},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
        ruck = "ACE_Rucksack_EAST";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"HandGrenade_East", 2},
            {"SmokeShell", 2}
        };
    };

    class AAR : Rifleman {
        ruckMagazines[] = {
            {"ACE_75Rnd_545x39_T_RPK", 4},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
    };

    class RAT : Rifleman {
        weapons[] = {"ACE_AKS74P", "ACE_RPG7V_PGO7"};
        ruckMagazines[] = {
            {"PG7V", 2}
        };
    };

    class MMGG : Rifleman {
        weapons[] = {"PK"};
        magazines[] = {
            {"100Rnd_762x54_PK", 5},
            {"SmokeShell", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148"};
    };

    class MMGAG : Rifleman {
        magazines[] = {
            {"30Rnd_545x39_AK", 8},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
        ruckMagazines[] = {
            {"30Rnd_545x39_AK", 2},
            {"ACE_30Rnd_545x39_T_AK", 2},
            {"100Rnd_762x54_PK", 3}
        };
        items[] = {"ACRE_PRC343", "Binocular_Vector"};
    };

    class HMGG : Rifleman {
        weapons[] = {"ACE_AKS74P", "ACE_DSHKMProxy"};
        magazines[] = {
            {"30Rnd_545x39_AK", 6},
            {"SmokeShell", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148"};
    };

    class HMGAG : Rifleman {
        weapons[] = {"ACE_AKS74P", "ACE_DSHKMTripodProxy"};
        magazines[] = {
            {"30Rnd_545x39_AK",  8},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
        ruck = "ACE_BackPack_ACR";
        ruckMagazines[] = {
            {"30Rnd_545x39_AK", 2},
            {"ACE_30Rnd_545x39_T_AK", 2},
            {"ACE_DSHKM_CSWDM", 1}
        };
        items[] = {"ACRE_PRC343", "Binocular_Vector"};
    };

    class HMGAC : Rifleman {
        magazines[] = {
            {"30Rnd_545x39_AK", 8},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
        ruck = "ACE_BackPack_ACR";
        ruckMagazines[] = {
            {"30Rnd_545x39_AK", 2},
            {"ACE_30Rnd_545x39_T_AK", 2},
            {"ACE_DSHKM_CSWDM", 4}
        };
    };

    class MATG : Rifleman {
        weapons[] = {"ACE_AKS74P", "ACE_RPG29"};
        magazines[] = {
            {"30Rnd_545x39_AK", 6},
            {"ACE_RPG29_PG29", 2},
            {"SmokeShell", 1},
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148"};
    };

    class MATAG : Rifleman {
        magazines[] = {
            {"30Rnd_545x39_AK",  8},
            {"ACE_RPG29_PG29", 1},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
        ruck = "ACE_Backpack_RPG";
        ruckMagazines[] = {
            {"30Rnd_545x39_AK", 2},
            {"ACE_30Rnd_545x39_T_AK", 2},
            {"ACE_RPG29_PG29", 2}
        };
        items[] = {"ACRE_PRC343", "Binocular_Vector"};
    };

    class MATAC : Rifleman {
        magazines[] = {
            {"30Rnd_545x39_AK", 8},
            {"ACE_RPG29_PG29", 1},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
        ruck = "ACE_Backpack_RPG";
        ruckMagazines[] = {
            {"30Rnd_545x39_AK", 2},
            {"ACE_30Rnd_545x39_T_AK", 2},
            {"ACE_RPG29_PG29", 2}
        };
    };

    class HATG : Rifleman {
        weapons[] = {"ACE_AKS74P", "MetisLauncher"};
        magazines[] = {
            {"30Rnd_545x39_AK", 6},
            {"AT13", 2},
            {"SmokeShell", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148"};
    };

    class HATAG : Rifleman {
        weapons[] = {"ACE_AKS74P"};
        magazines[] = {
            {"30Rnd_545x39_AK",  8},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
        ruckMagazines[] = {
            {"AT13", 2},
            {"ACE_30Rnd_545x39_T_AK", 2}
        };
        items[] = {"ACRE_PRC343", "Binocular_Vector"};
    };

    class HATAC : Rifleman {
        weapons[] = {"ACE_AKS74P"};
        magazines[] = {
            {"30Rnd_545x39_AK", 8},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
        ruckMagazines[] = {
            {"AT13", 2},
            {"ACE_30Rnd_545x39_T_AK", 2}
        };
    };

    class SN : Rifleman {
        weapons[] = {"ACE_SVD_Bipod", "MakarovSD"};
        magazines[] = {
            {"10Rnd_762x54_SVD",  2},
            {"8Rnd_9x18_MakarovSD",  5},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "Binocular_Vector"};
    };

    class SP : Rifleman {
        magazines[] = {
            {"30Rnd_545x39_AK", 8},
            {"HandGrenade_East", 1},
            {"SmokeShell", 1}
        };
        ruckMagazines[] = {
            {"30Rnd_545x39_AK", 2},
            {"ACE_30Rnd_545x39_T_AK", 2}
        };
    };

    class VC : Crew {
        items[] = {"ACRE_PRC343", "ACRE_PRC117F"};
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        items[] = {"ACRE_PRC343", "ACRE_PRC117F"};
    };

    class PCM : Crew {
    };
    class ENG : Rifleman {
        weapons[] = {"AKS_74_U"};
        magazines[] = {
            {"30Rnd_545x39_AK", 6},
            {"SmokeShell", 1},
            {"SmokeShellGreen", 1}
        };
        ruck = "ACE_BackPack_ACR";
        ruckMagazines[] = {
            {"pipebomb", 2},
            {"mine", 3}
        };
        items[] = {"ACRE_PRC343","ACRE_PRC148"};
    };
    class ENGA : Rifleman {
        weapons[] = {"AKS_74_U"};
        magazines[] = {
            {"30Rnd_545x39_AK", 6},
            {"SmokeShell", 1},
            {"SmokeShellGreen", 1}
        };
        ruck = "ACE_BackPack_ACR";
        ruckMagazines[] = {
            {"pipebomb", 2},
            {"mine", 3}
        };
        items[] = {"ACRE_PRC343"};
    };
};