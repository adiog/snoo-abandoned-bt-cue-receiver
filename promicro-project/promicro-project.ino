#include <Arduino.h>

#define BTSerial Serial1

void setup()
{
    Serial.begin(9600);
    while (!Serial)
    {
    }

    BTSerial.begin(38400);
    while (!BTSerial)
    {
    }

}

void loop()
{
    if (BTSerial.available())
    {
        Serial.write(BTSerial.read());
    }

    if (Serial.available())
    {
        BTSerial.write(Serial.read());
    }
}

