class Default {
    class Rifleman {
        primaryWeapon = "";
        primaryWeaponItems[] = {};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        addHandgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {};
        vestMagazines[] = {};
        backpackMagazines[] = {};
        basicAssignItems[] = {};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {{"ACE_Flashlight_KSF1", 1}};
        vestItems[] = {};
        backpackItems[] = {};
        uniformRadios[] = {};
        vestRadios[] = {};
        backpackRadios[] = {};
        uniformMedicalItems[] = {};
        vestMedicalItems[] = {};
        backpackMedicalItems[] = {};
        code = "";
        // These will override the uniform template, if not empty
        headGear = "";
        uniform = "";
        goggles = "";
        vest = "";
        backpack = "";
    };

    class Vehicle {
        weapons[] = {};
        magazines[] = {};
        items[] = {};
        radios[] = {};
        medicalItems[] = {};
        code = "";
    };
};