class MissionParams {
    // Date YYYY-MM-DD
    date[] = {
        {2014, 1, 24}, // New Moon
        {2014, 1, 31} // Full Moon
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

    // Overcast, Fog, Rain
    weather[] = {
        {0, 0, 0}, // Clear
        {0.6, 0.1, 0}, // Overcast
        {0.6, 0.4125, 0}, // Light Fog
        {0.60, 0.85, 0}, // Heavy Fog
        {1.00, 0.4125, 1} // Storm
    };
};