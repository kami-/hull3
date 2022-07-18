class MissionParams {
    // Date YYYY-MM-DD
    date[] = {
        {2035, 6, 1}, // New Moon
        {2035, 6, 12} // Full Moon
    };

    // Time HH24:mm
    time[] = {
        {4, 50}, // Dawn
        {5, 50}, // Early Morning
        {9, 0}, // Morning
        {12, 0}, // Noon
        {15, 0}, // Afternoon
        {17, 50}, // Evening
        {18, 50}, // Dusk
        {0, 0} // Night
    };

    // Fog Strength, Decay, Base
    fog[] = {
        {0, 0, 0}, // Light
        {0.2, 0, 0}, // Medium
        {0.4, 0, 0} // Heavy
    };

    // Overcast, Rain, Rainbow, Lightnings, Wind Strength, Wind Gusts, Waves, Snow
    weather[] = {
        {-1},                                                          // Random

        {0,       0,       0,    0,       1,     0,       0,    0},    // Clear (Calm)
        {0,       0,       0,    0,       5,     0,    0.25,    0},    // Clear (Light Winds)
        {0,       0,       0,    0,       10,    0,    0.50,    0},    // Clear (Stong Winds)

        {0.48,    0,       0,    0,       1,     0,       0,    0},    // Overcast (Calm)
        {0.48,    0,       0,    0,       5,     0,    0.25,    0},    // Overcast (Light Winds)
        {0.48,    0,       0,    0,       10,    0,    0.50,    0},    // Overcast (Strong Winds)

        {1,       0.33,    0,    0.25,    5,     0,    0.25,    0},    // Rain (Light Winds)
        {1,       0.66,    0,    0.50,    10,    0,    0.50,    0},    // Rain (Strong Winds)
        {1,       1,       0,    1,       20,    0,       1,    0},    // Storm

        {1,       0.33,    0,    0.25,    5,     0,    0.25,    1},    // Snow (Light Winds)
        {1,       0.66,    0,    0.50,    10,    0,    0.50,    1},    // Snow (Strong Winds)
        {1,       1,       0,    1,       20,    0,       1,    1}     // Snow Storm
    };

    snow[] = {
        "a3\data_f\rainnormal_ca.paa",  // rainDropTexture
        1,      // texDropCount
        0.01,   // minRainDensity
        15,     // effectRadius
        0.1,    // windCoef
        2,      // dropSpeed
        0.5,    // rndSpeed
        0.5,    // rndDir
        0.02,   // dropWidth
        0.02,   // dropHeight
        {
            0.1,    // R
            0.1,    // G
            0.1,    // B
            1,      // A
        },
        0.1,    // lumSunFront
        0.1,    // lumSunBack
        5.5,    // refractCoef
        0.3,    // refractSaturation
        true,   // snow
        false   // dropColorStrong
    };
};