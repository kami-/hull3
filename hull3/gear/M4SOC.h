class M4SOC {
    class Rifleman {
        weapons[] = {"RH_M4sbr_b", "hgun_Pistol_heavy_01_F"};
        primaryAttachments[] = {"RH_t1","RH_peq2_top"};
        secondaryAttachments[] = {};
        magazines[] = {
            {"30Rnd_556x45_Stanag", 1},
            {"11Rnd_45ACP_Mag", 3}
        };
        helmet = "H_Bandanna_gry";
        uniform = "MNP_CombatUniform_Ranger_A";
        goggles = "G_Bandanna_blk";
        vest = "V_PlateCarrier2_rgr";
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_AssaultPack_blk";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 4},
            {"30Rnd_556x45_Stanag_Tracer_Red", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS"};
        code = "";
    };

    class Leader : Rifleman {
        weapons[] = {"RH_M4A1_ris_M203","hgun_Pistol_heavy_01_F"};
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 8},
            {"11Rnd_45ACP_Mag", 3},
            {"1Rnd_HE_Grenade_shell", 2},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 3},
            {"30Rnd_556x45_Stanag_Tracer_Red", 2},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class Officer : Leader {
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class Crew : Rifleman {
        weapons[] = {"RH_M4sbr_b", "hgun_Pistol_heavy_01_F"};
        primaryAttachments[] = {};
        helmet = "H_HelmetCrew_B";
        ruck = "";
        vest = "MNP_Vest_ACU_1";
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 4},
            {"30Rnd_556x45_Stanag_Tracer_Red", 2},
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
        weapons[] = {"RH_M4sbr_b", "hgun_Pistol_heavy_01_F"};
        goggles = "G_Bandanna_blk";
        helmet = "MNP_Boonie_ACU";
        uniform = "MNP_CombatUniform_Ranger_B";
        vest = "MNP_Vest_ACU_1";
        ruck = "B_Carryall_khk";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"Medikit", 1},
            {"FirstAidKit", 8}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class FTL : Leader {
        helmet = "H_Watchcap_blk";
    };

    class AR : Rifleman {
        weapons[] = {"M27", "hgun_Pistol_heavy_01_F"};
        uniform = "MNP_CombatUniform_Ranger_E";
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
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag_Tracer_Red", 2},
            {"100Rnd_556x45_Stanag", 4},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class RAT : Rifleman {
        weapons[] = {"RH_M4sbr_b", "hgun_Pistol_heavy_01_F", "AT4"};
        ruck = "B_AssaultPack_blk";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 4},
            {"30Rnd_556x45_Stanag_Tracer_Red", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2},
            {"AT4_HEAT", 1}
        };
    };

    class MMGG : Rifleman {
        weapons[] = {"hlc_lmg_M60E4", "hgun_Pistol_heavy_01_F"};
        magazines[] = {
            {"hlc_100Rnd_762x51_B_M60E4", 1},
            {"11Rnd_45ACP_Mag", 3}
        };
        vestMagazines[] = {
            {"hlc_100Rnd_762x51_B_M60E4", 1},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"hlc_100Rnd_762x51_B_M60E4", 1},
            {"hlc_100Rnd_762x51_T_M60E4", 1},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class MMGAG : Rifleman {
        ruck = "B_Carryall_khk";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"hlc_100Rnd_762x51_B_M60E4", 3},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "Rangefinder"};
    };

    class MATG : Rifleman {
        weapons[] = {"RH_M16A4_m", "hgun_Pistol_heavy_01_F", "launch_NLAW_F"};
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_Bergen_sgg";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"NLAW_F", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class MATAG : Rifleman {
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"NLAW_F", 2}
        };
        ruck = "B_Bergen_sgg";
        items[] = {"ACRE_PRC343", "Rangefinder", "ItemGPS"};
    };

    class MATAC : MATAG {
    };

    class HATG : Rifleman {
        weapons[] = {"RH_M16A4_m", "hgun_Pistol_heavy_01_F", "launch_B_Titan_short_F"};
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_Bergen_sgg";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"Titan_AT", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class HATAG : Rifleman {
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 8},
            {"Titan_AT", 1},
            {"Titan_AP", 1}
        };
        ruck = "B_Bergen_sgg";
        items[] = {"ACRE_PRC343", "ItemGPS", "Rangefinder"};
    };

    class HATAC : HATAG {
    };

    class ENG : Rifleman {
        weapons[] = {"RH_M4sbr_b"};
        uniform = "MNP_CombatUniform_Ranger_E";
        vest = "MNP_Vest_ACU_1";
        helmet = "H_Booniehat_mcamo";
        ruck = "B_Carryall_khk";
        ruckWeapons[] = {
            {"SatchelCharge_Remote_Mag", 1},
            {"DemoCharge_Remote_Mag", 2}
        };
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 4},
            {"30Rnd_556x45_Stanag_Tracer_Red", 2},
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
        helmet = "MNP_Helmet_Dslyecxi";
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
            {"RH_M4sbr_b", 2},
            {"SMG_01_F", 2},
            {"AT4", 2}
        };
        magazines[] = {
            {"30Rnd_556x45_Stanag", 20},
            {"30Rnd_556x45_Stanag_Tracer_Red", 10},
            {"100Rnd_556x45_Stanag", 6},
            {"100Rnd_556x45_Stanag_Tracer_Red", 4},
            {"30Rnd_45ACP_Mag_SMG_01", 10},
            {"hlc_100Rnd_762x51_B_M60E4", 3},
            {"hlc_100Rnd_762x51_T_M60E4", 2},
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
            {"RH_M4sbr_b", 5},
            {"SMG_01_F", 5},
            {"AT4", 5}
        };
        magazines[] = {
            {"30Rnd_556x45_Stanag", 50},
            {"30Rnd_556x45_Stanag_Tracer_Red", 25},
            {"100Rnd_556x45_Stanag", 15},
            {"100Rnd_556x45_Stanag_Tracer_Red", 5},
            {"30Rnd_45ACP_Mag_SMG_01", 10},
            {"hlc_100Rnd_762x51_B_M60E4", 6},
            {"hlc_100Rnd_762x51_T_M60E4", 4},
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
            {"30Rnd_556x45_Stanag", 20},
            {"30Rnd_556x45_Stanag_Tracer_Red", 10},
            {"100Rnd_556x45_Stanag", 6},
            {"100Rnd_556x45_Stanag_Tracer_Red", 4},
            {"30Rnd_45ACP_Mag_SMG_01", 5},
            {"hlc_100Rnd_762x51_B_M60E4", 3},
            {"hlc_100Rnd_762x51_T_M60E4", 2},
            {"NLAW_F", 2},
            {"1Rnd_Smoke_Grenade_shell", 20},
            {"HandGrenade", 10},
            {"SmokeShell", 5}
        };
    };
};
