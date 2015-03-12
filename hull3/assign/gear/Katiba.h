class Katiba {
    class Rifleman {
        weapons[] = {"arifle_Katiba_F", "hgun_Rook40_F"};
        primaryAttachments[] = {"acc_flashlight"};
        secondaryAttachments[] = {};
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 1},
            {"16Rnd_9x21_Mag", 3}
        };
        helmet = "H_HelmetO_ocamo";
        uniform = "U_O_CombatUniform_ocamo";
        goggles = "";
        vest = "V_HarnessO_brn";
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_FieldPack_ocamo";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS"};
        code = "";
    };

    class Leader : Rifleman {
        weapons[] = {"arifle_Katiba_GL_F","hgun_Rook40_F"};
        primaryAttachments[] = {"acc_flashlight"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 8},
            {"1Rnd_HE_Grenade_shell", 2},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_green", 3},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 3},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class Officer : Leader {
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 8},
            {"1Rnd_HE_Grenade_shell", 2},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class Crew : Rifleman {
        weapons[] = {"arifle_Katiba_C_F", "hgun_Rook40_F"};
        helmet = "H_HelmetCrew_O";
        ruck = "";
        vest = "V_HarnessO_brn";
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS"};
    };

    class CO : Officer {
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ACRE_PRC119", "ItemGPS", "Binocular"};
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"Medikit", 1},
            {"FirstAidKit", 8}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        weapons[] = {"LMG_Zafir_F", "hgun_Rook40_F"};
        magazines[] = {
            {"150Rnd_762x51_Box", 1},
            {"16Rnd_9x21_Mag", 3}
        };
        vestMagazines[] = {
            {"150Rnd_762x51_Box", 1},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"150Rnd_762x51_Box", 2},
            {"150Rnd_762x51_Box_Tracer", 2},
            {"SmokeShell", 2}
        };
    };

    class AAR : Rifleman {
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"150Rnd_762x51_Box", 4},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class RAT : Rifleman {
        weapons[] = {"arifle_Katiba_F", "hgun_Rook40_F", "launch_RPG18_F"};
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"RPG18_HEAT", 1}
        };
    };

    class MATG : Rifleman {
        weapons[] = {"arifle_Katiba_F", "hgun_Rook40_F", "launch_RPG32_F"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"RPG32_F", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class MATAG : Rifleman {
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"RPG32_F", 1},
            {"RPG32_HE_F", 1}
        };
        ruck = "B_Carryall_ocamo";
        items[] = {"ACRE_PRC343", "Rangefinder", "ItemGPS"};
    };

    class MATAC : MATAG {
    };

    class HATG : Rifleman {
        weapons[] = {"arifle_Katiba_F", "hgun_Rook40_F", "launch_O_Titan_short_F"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"Titan_AT", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class HATAG : Rifleman {
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_green", 8},
            {"Titan_AT", 1},
            {"Titan_AP", 1}
        };
        ruck = "B_Carryall_ocamo";
        items[] = {"ACRE_PRC343", "ItemGPS", "Rangefinder"};
    };

    class HATAC : HATAG {
    };

    class ENG : Rifleman {
        ruck = "B_Carryall_ocamo";
        ruckWeapons[] = {
            {"SatchelCharge_Remote_Mag", 1},
            {"DemoCharge_Remote_Mag", 2}
        };
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class ENGA : ENG {
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class SN : Rifleman {
        weapons[] = {"srifle_DMR_01_F", "hgun_Rook40_F"};
        primaryAttachments[] = {"optic_MRCO"};
        vestMagazines[] = {
            {"10Rnd_762x51_Mag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"10Rnd_762x51_Mag", 6},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class SP : Rifleman {
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
            {"200Rnd_65x39_cased_Box", 3},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Rangefinder"};
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        weapons[] = {"SMG_02_F", "hgun_Rook40_F"};
        magazines[] = {
            {"30Rnd_9x21_Mag", 1},
            {"16Rnd_9x21_Mag", 3}
        };
        helmet = "H_PilotHelmetHeli_O";
        uniform = "U_O_PilotCoveralls";
        vestMagazines[] = {
            {"30Rnd_9x21_Mag", 6},
            {"SmokeShell", 2}
        };
        ruck = "B_Parachute";
        ruckWeapons[] = {
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC119", "ItemGPS", "NVGoggles"};
    };

    class PCM : Crew {
        weapons[] = {"SMG_02_F", "hgun_Rook40_F"};
        magazines[] = {
            {"30Rnd_9x21_Mag", 1},
            {"16Rnd_9x21_Mag", 3}
        };
        helmet = "H_CrewHelmetHeli_O";
        vestMagazines[] = {
            {"30Rnd_9x21_Mag", 6},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC119", "ItemGPS", "NVGoggles"};
    };

    class Vehicle {
        weapons[] = {
            {"arifle_Katiba_F", 2},
            {"SMG_01_F", 2},
            {"launch_RPG18_F", 2}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 20},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 10},
            {"30Rnd_45ACP_Mag_SMG_01", 10},
            {"150Rnd_762x51_Box", 6},
            {"150Rnd_762x51_Box_Tracer", 4},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 5},
            {"RPG18_HEAT", 2}
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
            {"arifle_Katiba_F", 5},
            {"SMG_01_F", 5},
            {"launch_RPG18_F", 5}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 50},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 25},
            {"30Rnd_45ACP_Mag_SMG_01", 10},
            {"150Rnd_762x51_Box", 20},
            {"150Rnd_762x51_Box_Tracer", 10},
            {"SatchelCharge_Remote_Mag", 4},
            {"RPG32_F", 5},
            {"RPG18_HEAT", 5},
            {"1Rnd_Smoke_Grenade_shell", 20},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
    };

    class Armored : Vehicle {
        weapons[] = {
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_green", 20},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 10},
            {"30Rnd_45ACP_Mag_SMG_01", 5},
            {"150Rnd_762x51_Box", 6},
            {"150Rnd_762x51_Box_Tracer", 5},
            {"RPG32_F", 2},
            {"1Rnd_Smoke_Grenade_shell", 20},
            {"HandGrenade", 10},
            {"SmokeShell", 5}
        };
    };
};