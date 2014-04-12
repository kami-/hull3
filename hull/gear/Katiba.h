class Katiba {
    class Rifleman {
        weapons[] = {"arifle_Katiba_F", "hgun_Rook40_F"};
        primaryAttachments[] = { "optic_ACO_grn", "acc_flashlight" };
        secondaryAttachments[] = {};
        magazines[] = {
            { "30Rnd_65x39_caseless_green", 1 },
            { "16Rnd_9x21_Mag", 3 },
        };
        helmet = "H_HelmetO_ocamo";
        uniform = "U_O_CombatUniform_ocamo";
        goggles = "";
        vest = "V_HarnessO_brn";
        vestMagazines[] = {
            { "30Rnd_65x39_caseless_green", 8 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 }
        };
        ruck = "B_FieldPack_ocamo";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 6 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 }
        };
        items[] = { "ItemGPS","ACRE_PRC343" };
        code = "";
    };

    class Leader : Rifleman {
        weapons[] = {"arifle_Katiba_GL_F","hgun_Rook40_F"};
        vestMagazines[] = {
            { "30Rnd_65x39_caseless_green", 8 },
            { "1Rnd_HE_Grenade_shell", 2 },
            { "1Rnd_Smoke_Grenade_shell", 2 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 }
        };
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 3 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", 3 },
            { "1Rnd_HE_Grenade_shell", 4 },
            { "1Rnd_Smoke_Grenade_shell", 2 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 }
        };
        items[] = {"ACRE_PRC343", "Binocular"};
    };

    class Officer : Leader {
        vestMagazines[] = {
            { "30Rnd_65x39_caseless_green", 8 },
            { "1Rnd_HE_Grenade_shell", 2 },
            { "1Rnd_Smoke_Grenade_shell", 2 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 },
            { "ACRE_PRC148", 1 }
        };
        items[] = {"ACRE_PRC343", "Binocular", "ItemGPS"};
    };

    class Crew : Rifleman {
        weapons[] = { "arifle_Katiba_C_F", "hgun_Rook40_F" };
        primaryAttachments[] = { "optic_ACO_grn" };
        helmet = "H_HelmetCrew_O";
        ruck = "";
        vest = "V_HarnessO_brn";
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_green", 6},
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
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 6 },
            { "Medikit", 1 },
            { "FirstAidKit", 8 }
            
        };
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        weapons[] = { "LMG_Zafir_F", "hgun_Rook40_F" };
        magazines[] = {
            { "150Rnd_762x51_Box", 1 },
            { "16Rnd_9x21_Mag", 3 },
        };
        vestMagazines[] = {
            {"150Rnd_762x51_Box", 1},
            { "SmokeShell", 2 },
            { "HandGrenade", 2 }
        };
        ruckMagazines[] = {
            { "150Rnd_762x51_Box", 2 },
            { "150Rnd_762x51_Box_Tracer", 2 },
            { "SmokeShell", 2 },
        };
    };

    class AAR : Rifleman {
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 6 },
            { "150Rnd_762x51_Box", 4 },
            { "SmokeShell", 2 },
        };
    };

    class RAT : Rifleman {
      
    };

    class MMGG : Rifleman {
        weapons[] = { "LMG_Mk200_F", "hgun_Rook40_F" };
        magazines[] = {
            { "200Rnd_65x39_cased_Box", 1 },
            { "16Rnd_9x21_Mag", 3 },
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
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 6 },
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
        weapons[] = { "arifle_Katiba_F", "hgun_Rook40_F", "launch_RPG32_F" };
        vestMagazines[] = {
            { "30Rnd_65x39_caseless_green", 8 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 },
            { "ACRE_PRC148", 1 }
        };
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 6 },
            { "RPG32_F", 2 }
        };
    };

    class MATAG : Rifleman {
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 6 },
            { "RPG32_F", 1 },
            { "RPG32_HE_F", 1 }
        };
        ruck = "B_Carryall_ocamo";
        items[] = { "ACRE_PRC343", "Rangefinder", "ItemGPS" };
    };

    class MATAC : Rifleman {
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 6 },
            { "RPG32_F", 1 },
            { "RPG32_HE_F", 1 }
        };
        ruck = "B_Carryall_ocamo";
        items[] = { "ACRE_PRC343", "Rangefinder", "ItemGPS" };
    };

    class HATG : Rifleman {
        weapons[] = { "arifle_Katiba_F", "hgun_Rook40_F", "launch_O_Titan_short_F" };
        vestMagazines[] = {
            { "30Rnd_65x39_caseless_green", 8 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 },
            { "ACRE_PRC148", 1 }
        };
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 6 },
            { "Titan_AT", 2 },
        };
    };

    class HATAG : Rifleman {
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 8 },
            { "Titan_AT", 1 },
            { "Titan_AP", 1 }
        };
        ruck = "B_Carryall_ocamo";
        items[] = { "ACRE_PRC343", "Rangefinder", "ItemGPS" };
    };

    class HATAC : Rifleman {
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 8 },
            { "Titan_AT", 1 },
            { "Titan_AP", 1 }
        };
        ruck = "B_Carryall_ocamo";
        items[] = { "ACRE_PRC343", "Rangefinder", "ItemGPS" };
    };

    class SN : Rifleman {
        weapons[] = { "srifle_DMR_01_F", "hgun_Rook40_F" };
        primaryAttachments[] = { "optic_MRCO" };
        vestMagazines[] = {
            { "10Rnd_762x51_Mag", 8 },
            { "SmokeShell", 2 },
            { "HandGrenade", 2 },
            { "ACRE_PRC148", 1 }
        };
        ruckMagazines[] = {
            { "10Rnd_762x51_Mag", 6 },
            { "SmokeShell", 2 }
        };
    };

    class SP : Rifleman {
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 6 },
            { "200Rnd_65x39_cased_Box", 3 },
            { "SmokeShell", 2 },
        };
        items[] = { "ACRE_PRC343", "Rangefinder", "ItemGPS" };
    };

    class VC : Crew {
        
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        weapons[] = { "SMG_02_F", "hgun_Rook40_F" };
        magazines[] = {
            { "30Rnd_9x21_Mag", 1 },
            { "16Rnd_9x21_Mag", 3 }
        };
        primaryAttachments[] = { "optic_ACO_grn_smg" };
        helmet = "H_PilotHelmetHeli_O";
        uniform = "U_O_PilotCoveralls";
        vestMagazines[] = {
            { "30Rnd_9x21_Mag", 6 },
            { "SmokeShell", 2 },
            { "ACRE_PRC148", 1 }
        };
        items[] = { "ACRE_PRC343", "NVGoggles" };
    };

    class PCM : Crew {
        weapons[] = { "SMG_02_F", "hgun_Rook40_F" };
        magazines[] = {
            { "30Rnd_9x21_Mag", 1 },
            { "16Rnd_9x21_Mag", 3 }
        };
        primaryAttachments[] = { "optic_ACO_grn_smg" };
        helmet = "H_CrewHelmetHeli_O";
        vestMagazines[] = {
            { "30Rnd_9x21_Mag", 6 },
            { "SmokeShell", 2 },
            { "ACRE_PRC148", 1 }
        };
        items[] = { "ACRE_PRC343", "NVGoggles" };
    };
    class ENG : Rifleman {
        ruck = "B_Carryall_ocamo";
        ruckWeapons[] = {
            { "SatchelCharge_Remote_Mag", 2 },
            { "MineDetector", 1 }
        };
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 6 },
            { "SmokeShell", 2 },
        };
    };
    class ENGA : Rifleman {
        ruck = "B_Carryall_ocamo";
        ruckWeapons[] = {
            { "30Rnd_65x39_caseless_green", 2 },
            {"MineDetector",1}
        };
        ruckMagazines[] = {
            { "30Rnd_65x39_caseless_green", 6 },
            { "SmokeShell", 2 },
        };
        
    };
};