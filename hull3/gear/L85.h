class L85 {
    class Rifleman {
        weapons[] = {"kio_l85a2", "hgun_Pistol_heavy_01_F"};
        primaryAttachments[] = {"acc_flashlight"};
        secondaryAttachments[] = {};
        magazines[] = {
            {"L85_30Rnd_556x45_Stanag", 1},
            {"11Rnd_45ACP_Mag", 3}
        };
        helmet = "H_HelmetSpecB_paint2";
        uniform = "U_B_CombatUniform_mcam";
        goggles = "G_Bandanna_tan";
        vest = "V_PlateCarrier2_rgr";
        vestMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_TacticalPack_blk";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 4},
            {"L85_30Rnd_556x45_Stanag_Tracer", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS"};
        code = "";
    };

    class Leader : Rifleman {
        weapons[] = {"kio_l85a2","hgun_Pistol_heavy_01_F"};
        vestMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 8},
            {"11Rnd_45ACP_Mag", 3},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 3},
            {"L85_30Rnd_556x45_Stanag_Tracer", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class Officer : Leader {
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class Crew : Rifleman {
        weapons[] = {"kio_l85a2", "hgun_Pistol_heavy_01_F"};
        primaryAttachments[] = {};
        helmet = "H_HelmetCrew_B";
        ruck = "";
        vest = "V_PlateCarrier2_rgr";
        vestMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 4},
            {"L85_30Rnd_556x45_Stanag_Tracer", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
    };

    class CO : Officer {
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ACRE_PRC119", "ItemGPS", "Binocular"};
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        weapons[] = {"kio_l85a2", "hgun_Pistol_heavy_01_F"};
        helmet = "H_HelmetB_light_sand";
        uniform = "U_B_CTRG_3";
        vest = "V_PlateCarrier2_rgr";
        ruck = "B_Carryall_mcamo";
        ruckMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 6},
            {"Medikit", 1},
            {"FirstAidKit", 8}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class FTL : Leader {
        uniform = "U_B_CTRG_3";
    };

    class AR : Rifleman {
        uniform = "U_B_CTRG_3";
        weapons[] = {"M27", "hgun_Pistol_heavy_01_F"};
        primaryAttachments[] = {"RH_t1"};
        magazines[] = {
            {"100Rnd_556x45_Stanag", 1},
            {"11Rnd_45ACP_Mag", 3}
        };
        vestMagazines[] = {
            {"100Rnd_556x45_Stanag", 1},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"100Rnd_556x45_Stanag", 2},
            {"100Rnd_556x45_Stanag_Tracer_Red", 2},
            {"SmokeShell", 2}
        };
    };

    class AAR : Rifleman {
        ruck = "B_Kitbag_mcamo";
        uniform = "U_B_CTRG_3";
        ruckMagazines[] = {
            {"L85_30Rnd_556x45_Stanag_Tracer", 2},
            {"100Rnd_556x45_Stanag", 4},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class RAT : Rifleman {
        weapons[] = {"kio_l85a2", "hgun_Pistol_heavy_01_F", "AT4"};
        uniform = "U_B_CTRG_3";
        ruck = "B_AssaultPack_rgr";
        ruckMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 4},
            {"L85_30Rnd_556x45_Stanag_Tracer", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2},
            {"AT4_HEAT", 1}
        };
    };

    class MMGG : Rifleman {
        weapons[] = {"LMG_Mk200_F", "hgun_Pistol_heavy_01_F"};
        magazines[] = {
            {"200Rnd_65x39_cased_Box", 1},
            {"11Rnd_45ACP_Mag", 3}
        };
        vestMagazines[] = {
            {"200Rnd_65x39_cased_Box", 1},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"200Rnd_65x39_cased_Box", 1},
            {"200Rnd_65x39_cased_Box_Tracer", 1},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class MMGAG : Rifleman {
        ruck = "B_Carryall_mcamo";
        ruckMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 6},
            {"200Rnd_65x39_cased_Box", 3},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "Rangefinder", "ItemGPS"};
    };

    class MATG : Rifleman {
        weapons[] = {"kio_l85a2", "hgun_Pistol_heavy_01_F", "launch_NLAW_F"};
        vestMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_Bergen_sgg";
        ruckMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 6},
            {"NLAW_F", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class MATAG : Rifleman {
        ruckMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 6},
            {"NLAW_F", 2}
        };
        ruck = "B_Bergen_sgg";
        items[] = {"ACRE_PRC343", "Rangefinder", "ItemGPS"};
    };

    class MATAC : MATAG {
    };

    class HATG : Rifleman {
        weapons[] = {"kio_l85a2", "hgun_Pistol_heavy_01_F", "launch_B_Titan_short_F"};
        vestMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_Bergen_sgg";
        ruckMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 6},
            {"Titan_AT", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class HATAG : Rifleman {
        ruckMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 8},
            {"Titan_AT", 1},
            {"Titan_AP", 1}
        };
        ruck = "B_Bergen_sgg";
        items[] = {"ACRE_PRC343", "ItemGPS", "Rangefinder"};
    };

    class HATAC : HATAG {
    };

    class ENG : Rifleman {
        weapons[] = {"kio_l85a2"};
        uniform = "U_B_CTRG_3";
        vest = "V_PlateCarrier1_rgr";
        helmet = "H_Booniehat_mcamo";
        ruck = "B_Carryall_mcamo";
        ruckWeapons[] = {
            {"SatchelCharge_Remote_Mag", 1},
            {"DemoCharge_Remote_Mag", 2}
        };
        ruckMagazines[] = {
            {"L85_30Rnd_556x45_Stanag", 4},
            {"L85_30Rnd_556x45_Stanag_Tracer", 2},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class ENGA : ENG {
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class VC : Crew {
        items[] = {"ACRE_PRC343", "ACRE_PRC119", "ItemGPS", "Rangefinder"};
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        weapons[] = {"SMG_01_F"};
        magazines[] = {
            {"30Rnd_45ACP_Mag_SMG_01", 1}
        };
        primaryAttachments[] = {};
        helmet = "H_PilotHelmetHeli_B";
        uniform = "U_B_HeliPilotCoveralls";
        vestMagazines[] = {
            {"30Rnd_45ACP_Mag_SMG_01", 4},
            {"SmokeShellBlue", 2},
            {"Chemlight_blue", 2},
            {"B_IR_Grenade", 1}
        };
        ruck = "B_Parachute";
        ruckWeapons[] = {
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC119", "ItemGPS", "NVGoggles"};
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {
            {"kio_l85a2", 2},
            {"SMG_01_F", 2},
            {"AT4", 2}
        };
        magazines[] = {
            {"L85_30Rnd_556x45_Stanag", 20},
            {"L85_30Rnd_556x45_Stanag_Tracer", 10},
            {"100Rnd_556x45_Stanag", 6},
            {"100Rnd_556x45_Stanag_Tracer_Red", 4},
            {"30Rnd_45ACP_Mag_SMG_01", 10},
            {"200Rnd_65x39_cased_Box", 3},
            {"200Rnd_65x39_cased_Box_Tracer", 2},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 5},
            {"AT4_HEAT", 2}
        };
        items[] = {
            {"ACRE_PRC343", 5},
            {"ACRE_PRC148", 5}
        };
        code = "";
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"kio_l85a2", 5},
            {"SMG_01_F", 5},
            {"AT4", 5}
        };
        magazines[] = {
            {"L85_30Rnd_556x45_Stanag", 50},
            {"L85_30Rnd_556x45_Stanag_Tracer", 25},
            {"100Rnd_556x45_Stanag", 15},
            {"100Rnd_556x45_Stanag_Tracer_Red", 5},
            {"30Rnd_45ACP_Mag_SMG_01", 10},
            {"200Rnd_65x39_cased_Box", 6},
            {"200Rnd_65x39_cased_Box_Tracer", 4},
            {"SatchelCharge_Remote_Mag", 4},
            {"NLAW_F", 5},
            {"AT4_HEAT", 5},
            {"1Rnd_Smoke_Grenade_shell", 20},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
    };

    class Armored : Vehicle {
        weapons[] = {
        };
        magazines[] = {
            {"L85_30Rnd_556x45_Stanag", 20},
            {"L85_30Rnd_556x45_Stanag_Tracer", 10},
            {"100Rnd_556x45_Stanag", 6},
            {"100Rnd_556x45_Stanag_Tracer_Red", 4},
            {"30Rnd_45ACP_Mag_SMG_01", 5},
            {"200Rnd_65x39_cased_Box", 3},
            {"200Rnd_65x39_cased_Box_Tracer", 2},
            {"NLAW_F", 2},
            {"1Rnd_Smoke_Grenade_shell", 20},
            {"HandGrenade", 10},
            {"SmokeShell", 5}
        };
    };
};
