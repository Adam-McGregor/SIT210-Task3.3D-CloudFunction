int LED = D5;

void setup()
{
    pinMode(LED, OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", waveHandler);
}

void waveHandler(const char *event, const char *data)
{
    if (String(data) == "wave")
    {
        for (int i = 0; i < 3; i++)
        {
            digitalWrite(LED, HIGH);
            delay(500);
            digitalWrite(LED, LOW);
            delay(500);
        }
    }
    else if (String(data) == "pat")
    {
        digitalWrite(LED, HIGH);
        delay(1500);
        digitalWrite(LED, LOW);
    }
}