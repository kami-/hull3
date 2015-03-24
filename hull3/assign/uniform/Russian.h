class Russian {
    class Rifleman {
        headGear = "MNP_Helmet_RU_LT";
        goggles = "G_Bandanna_oli";
        uniform = "MNP_CombatUniform_RU_Med";
        vest = "MNP_Vest_RU_T";
        backpack = "B_FieldPack_oli";
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
};