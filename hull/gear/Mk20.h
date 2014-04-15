class Mk20 {
    class Rifleman {
        weapons[] = {"arifle_Mk20_F", "hgun_ACPC2_F"};
        primaryAttachments[] = { "optic_ACO_grn", "acc_flashlight" };
        secondaryAttachments[] = {};
        magazines[] = {
            { "30Rnd_556x45_Stanag", 1 },
            { "9Rnd_45ACP_Mag", 3 },
        };
        helmet = "H_HelmetIA";
        uniform = "U_I_CombatUniform";
        goggles = "";
        vest = "V_PlateCarrierIA1_dgtl";
        vestMagazines[] = {
            { "30Rnd_556x45_Stanag", 8 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 }
        };
        ruck = "B_TacticalPack_oli";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 6 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 }
        };
        items[] = { "ItemGPS","ACRE_PRC343" };
        code = "";
    };

    class Leader : Rifleman {
        weapons[] = {"arifle_Mk20_GL_F","hgun_ACPC2_F"};
        vestMagazines[] = {
            { "30Rnd_556x45_Stanag", 8 },
            { "1Rnd_HE_Grenade_shell", 2 },
            { "1Rnd_Smoke_Grenade_shell", 2 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 }
        };
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 3 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", 3 },
            { "1Rnd_HE_Grenade_shell", 4 },
            { "1Rnd_Smoke_Grenade_shell", 2 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 }
        };
        items[] = {"ACRE_PRC343", "Binocular"};
    };

    class Officer : Leader {
        vestMagazines[] = {
            { "30Rnd_556x45_Stanag", 8 },
            { "1Rnd_HE_Grenade_shell", 2 },
            { "1Rnd_Smoke_Grenade_shell", 2 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 },
            { "ACRE_PRC148", 1 }
        };
        items[] = {"ACRE_PRC343", "Binocular", "ItemGPS"};
    };

    class Crew : Rifleman {
        weapons[] = { "arifle_Mk20C_F", "hgun_ACPC2_F" };
        primaryAttachments[] = { "optic_ACO_grn" };
        helmet = "H_HelmetCrew_I";
        ruck = "";
        vest = "V_PlateCarrierIA1_dgtl";
        vestMagazines[] = {
            {"30Rnd_556x45_Stanag", 6},
            { "SmokeShell", 2 },
            { "HandGrenade", 2 },
            { "ACRE_PRC148", 1 }
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
        ruck = "B_Carryall_oli";
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 6 },
            { "Medikit", 1 },
            { "FirstAidKit", 8 },
            { "ACRE_PRC148", 1 }
        };
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        weapons[] = { "LMG_Mk200_F", "hgun_ACPC2_F" };
        magazines[] = {
            { "200Rnd_65x39_cased_Box", 1 },
            { "9Rnd_45ACP_Mag", 3 },
        };
        vestMagazines[] = {
            { "200Rnd_65x39_cased_Box", 1 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 },
            { "ACRE_PRC148", 1 }
        };
        ruckMagazines[] = {
            { "200Rnd_65x39_cased_Box", 1 },
            { "200Rnd_65x39_cased_Box_Tracer", 1 },
            { "SmokeShell", 2 },
        };
    };

    class AAR : Rifleman {
        ruck = "B_Carryall_oli";
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 6 },
            { "200Rnd_65x39_cased_Box", 3 },
            { "SmokeShell", 2 },
        };
    };

    class RAT : Rifleman {
      
    };

    class MMGG : Rifleman {
        weapons[] = { "LMG_Mk200_F", "hgun_ACPC2_F" };
        magazines[] = {
            { "200Rnd_65x39_cased_Box", 1 },
            { "9Rnd_45ACP_Mag", 3 },
        };
        vestMagazines[] = {
            { "200Rnd_65x39_cased_Box", 1 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 },
            { "ACRE_PRC148", 1 }
        };
        ruckMagazines[] = {
            { "200Rnd_65x39_cased_Box", 1 },
            { "200Rnd_65x39_cased_Box_Tracer", 1 },
            { "SmokeShell", 2 },
        };
    };

    class MMGAG : Rifleman {
        ruck = "B_Carryall_oli";
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 6 },
            { "200Rnd_65x39_cased_Box", 3 },
            { "SmokeShell", 2 },
        };
    };

    class HMGG : Rifleman {
      
    };

    class HMGAG : Rifleman {
     
    };

    class HMGAC : Rifleman {
      
    };

    class MATG : Rifleman {
        weapons[] = { "arifle_Mk20_F", "hgun_ACPC2_F", "launch_NLAW_F" };
        vestMagazines[] = {
            { "30Rnd_556x45_Stanag", 8 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 },
            { "ACRE_PRC148", 1 }
        };
        ruck = "B_Carryall_oli";
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 6 },
            { "NLAW_F", 2 },
        };
    };

    class MATAG : Rifleman {
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 6 },
            { "NLAW_F", 2 },
        };
        ruck = "B_Carryall_oli";
        items[] = { "ACRE_PRC343", "Rangefinder", "ItemGPS" };
    };

    class MATAC : Rifleman {
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 6 },
            { "NLAW_F", 2 },
        };
        ruck = "B_Carryall_oli";
        items[] = { "ACRE_PRC343", "Rangefinder", "ItemGPS" };
    };

    class HATG : Rifleman {
        weapons[] = { "arifle_Mk20_F", "hgun_ACPC2_F", "launch_B_Titan_short_F" };
        vestMagazines[] = {
            { "30Rnd_556x45_Stanag", 8 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 },
            { "ACRE_PRC148", 1 }
        };
        ruck = "B_Carryall_oli";
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 6 },
            { "Titan_AT", 2 },
        };
    };

    class HATAG : Rifleman {
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 8 },
            { "Titan_AT", 1 },
            { "Titan_AP", 1 }
        };
        ruck = "B_FieldPack_oli";
        items[] = { "ACRE_PRC343", "Rangefinder", "ItemGPS" };
    };

    class HATAC : Rifleman {
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 8 },
            { "Titan_AT", 1 },
            { "Titan_AP", 1 }
        };
        ruck = "B_FieldPack_oli";
        items[] = { "ACRE_PRC343", "Rangefinder", "ItemGPS" };
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
        weapons[] = { "SMG_01_F", "hgun_ACPC2_F" };
        magazines[] = {
            { "30Rnd_45ACP_Mag_SMG_01", 1 },
            { "9Rnd_45ACP_Mag", 3 }
        };
        primaryAttachments[] = { "optic_Aco_smg" };
        helmet = "H_PilotHelmetHeli_I";
        uniform = "U_I_HeliPilotCoveralls";
        vestMagazines[] = {
            { "30Rnd_45ACP_Mag_SMG_01", 6 },
            { "SmokeShell", 2 },
            { "ACRE_PRC148", 1 }
        };
        items[] = { "ACRE_PRC343", "NVGoggles" };
    };

    class PCM : Crew {
        weapons[] = { "SMG_01_F", "hgun_ACPC2_F" };
        magazines[] = {
            { "30Rnd_45ACP_Mag_SMG_01", 1 },
            { "9Rnd_45ACP_Mag", 3 }
        };
        primaryAttachments[] = { "optic_Aco_smg" };
        helmet = "H_CrewHelmetHeli_I";
        vestMagazines[] = {
            { "30Rnd_45ACP_Mag_SMG_01", 6 },
            { "SmokeShell", 2 },
            { "ACRE_PRC148", 1 }
        };
        items[] = { "ACRE_PRC343", "NVGoggles" };
    };
    class ENG : Rifleman {
        ruck = "B_Carryall_oli";
        ruckWeapons[] = {
            { "SatchelCharge_Remote_Mag", 2 },
            { "MineDetector", 1 }
        };
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 6 },
            { "SmokeShell", 2 },
        };
    };
    class ENGA : Rifleman {
        ruck = "B_Carryall_oli";
        ruckWeapons[] = {
            { "SatchelCharge_Remote_Mag", 2 },
            {"MineDetector",1}
        };
        ruckMagazines[] = {
            { "30Rnd_556x45_Stanag", 6 },
            { "SmokeShell", 2 },
        };
        
    };
};