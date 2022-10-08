#include <Wire.h>

void setup()
{
Wire.begin();

Serial.begin(9600);
while (!Serial);
}

void loop()
{
  byte address;

  for (address = 1; address < 127; ++address)
  {
    Wire.beginTransmission(address);

    if (Wire.endTransmission() == 0)
    {
      Serial.print("address of I2C device is: 0x");
      if (address < 16)
        Serial.print("0");
      Serial.print(address, HEX);
    }

  }

delay(5000);
}
