class Tavor {
    class Rifleman {
        weapons[] = {"arifle_TRG21_F", "hgun_ACPC2_F"};
        primaryAttachments[] = {"acc_flashlight"};
        secondaryAttachments[] = {};
        magazines[] = {
            {"30Rnd_556x45_Stanag", 1},
            {"9Rnd_45ACP_Mag", 3}
        };
        helmet = "H_Cap_blk_Raven";
        uniform = "U_BG_Guerilla2_2";
        goggles = "G_Bandanna_blk";
        vest = "V_TacVestIR_blk";
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_TacticalPack_oli";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS"};
        code = "";
    };

    class Leader : Rifleman {
        primaryAttachments[] = {"acc_flashlight"};
        uniform = "U_BG_leader";
        weapons[] = {"arifle_TRG21_GL_F","hgun_ACPC2_F"};
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 8},
            {"1Rnd_HE_Grenade_shell", 2},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 3},
            {"30Rnd_556x45_Stanag_Tracer_Yellow", 3},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class Officer : Leader {
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 8},
            {"1Rnd_HE_Grenade_shell", 2},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class Crew : Rifleman {
        weapons[] = {"arifle_TRG20_F", "hgun_ACPC2_F"};
        helmet = "H_HelmetCrew_I";
        ruck = "";
        vest = "V_PlateCarrierIA1_dgtl";
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
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
        ruck = "B_Carryall_oli";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"Medikit", 1},
            {"FirstAidKit", 8}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };
    class FTL : Leader {
        helmet = "H_Bandanna_gry";
        goggles = "G_Bandanna_sport";
        uniform = "MNP_CombatUniform_Rebel_A";
    };

    class AR : Rifleman {
        uniform = "U_BG_Guerrilla_6_1";
        goggles = "G_Balaclava_oli";
        weapons[] = {"LMG_Mk200_F", "hgun_ACPC2_F"};
        magazines[] = {
            {"200Rnd_65x39_cased_Box", 1},
            {"9Rnd_45ACP_Mag", 3}
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
    };

    class AAR : Rifleman {
        uniform = "U_BG_Guerilla2_1";
        helmet = "H_Booniehat_oli";
        goggles = "G_Bandanna_oli";
        ruck = "B_Carryall_oli";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"200Rnd_65x39_cased_Box", 3},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class RAT : Rifleman {
        goggles = "G_Bandanna_beast";
        uniform = "U_BG_Guerilla3_1";
        weapons[] = {"arifle_TRG21_F", "hgun_ACPC2_F", "launch_RPG18_F"};
        ruck = "B_Carryall_oli";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"RPG18_HEAT", 1}
        };
    };

    class MATG : Rifleman {
        weapons[] = {"arifle_TRG21_F", "hgun_ACPC2_F", "launch_RPG32_F"};
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_FieldPack_oli";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"RPG32_F", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class MATAG : Rifleman {
        uniform = "U_BG_Guerilla1_1";
        goggles = "G_Balaclava_oli";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"RPG32_F", 2}
        };
        ruck = "B_Carryall_oli";
        items[] = {"ACRE_PRC343", "ItemGPS", "Rangefinder"};
    };

    class MATAC : MATAG {
        uniform = "MNP_CombatUniform_Militia_E";
        goggles = "G_Aviator";
        helmet = "H_Booniehat_tan";

    };

    class HATG : Rifleman {
        uniform = "MNP_CombatUniform_Rebel_A";
        weapons[] = {"arifle_TRG21_F", "hgun_ACPC2_F", "launch_B_Titan_short_F"};
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2},
            {"ACRE_PRC148", 1}
        };
        ruck = "B_Carryall_oli";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            {"Titan_AT", 2}
        };
    };

    class HATAG : Rifleman {
        uniform = "MNP_CombatUniform_Rebel_A";
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 8},
            {"Titan_AT", 1},
            {"Titan_AP", 1}
        };
        ruck = "B_FieldPack_oli";
        items[] = {"ACRE_PRC343", "ItemGPS", "Rangefinder"};
    };

    class HATAC : HATAG {
        uniform = "MNP_CombatUniform_Rebel_A";
    };

    class ENG : Rifleman {
        uniform = "MNP_CombatUniform_Rebel_A";
        ruck = "B_Carryall_oli";
        ruckWeapons[] = {
            {"SatchelCharge_Remote_Mag", 1},
            {"DemoCharge_Remote_Mag", 2}
        };
        ruckMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
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
        weapons[] = {"SMG_01_F", "hgun_ACPC2_F"};
        magazines[] = {
            {"30Rnd_45ACP_Mag_SMG_01", 1},
            {"9Rnd_45ACP_Mag", 3}
        };
        helmet = "H_PilotHelmetHeli_I";
        uniform = "U_I_HeliPilotCoveralls";
        vestMagazines[] = {
            {"30Rnd_45ACP_Mag_SMG_01", 6},
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
        weapons[] = {"SMG_01_F", "hgun_ACPC2_F"};
        magazines[] = {
            {"30Rnd_45ACP_Mag_SMG_01", 1},
            {"9Rnd_45ACP_Mag", 3}
        };
        helmet = "H_CrewHelmetHeli_I";
        vestMagazines[] = {
            {"30Rnd_45ACP_Mag_SMG_01", 6},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC119", "ItemGPS", "NVGoggles"};
    };

    class Vehicle {
        weapons[] = {
            {"arifle_TRG21_F", 2},
            {"SMG_01_F", 2},
            {"launch_RPG18_F", 2}
        };
        magazines[] = {
            {"30Rnd_556x45_Stanag", 20},
            {"30Rnd_556x45_Stanag_Tracer_Yellow", 10},
            {"200Rnd_65x39_cased_Box", 10},
            {"200Rnd_65x39_cased_Box_Tracer", 5},
            {"30Rnd_45ACP_Mag_SMG_01", 10},
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
            {"arifle_TRG21_F", 5},
            {"SMG_01_F", 5},
            {"launch_RPG18_F", 5}
        };
        magazines[] = {
            {"30Rnd_556x45_Stanag", 50},
            {"30Rnd_556x45_Stanag_Tracer_Yellow", 25},
            {"30Rnd_45ACP_Mag_SMG_01", 10},
            {"200Rnd_65x39_cased_Box", 20},
            {"200Rnd_65x39_cased_Box_Tracer", 10},
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
            {"30Rnd_556x45_Stanag", 20},
            {"30Rnd_556x45_Stanag_Tracer_Yellow", 10},
            {"30Rnd_45ACP_Mag_SMG_01", 5},
            {"200Rnd_65x39_cased_Box", 10},
            {"200Rnd_65x39_cased_Box_Tracer", 5},
            {"RPG32_F", 2},
            {"1Rnd_Smoke_Grenade_shell", 20},
            {"HandGrenade", 10},
            {"SmokeShell", 5}
        };
    };
};