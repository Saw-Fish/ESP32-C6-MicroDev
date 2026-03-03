/* The true ESP32 chip ID is essentially its MAC address.
This sketch provides an alternate chip ID that matches
the output of the ESP.getChipId() function on ESP8266
(i.e. a 32-bit integer matching the last 3 bytes of
the MAC address. This is less unique than the
MAC address chip ID, but is helpful when you need
an identifier that can be no more than a 32-bit integer
(like for switch...case).

created 2020-06-07 by cweinhofer
with help from Cicicok */

uint32_t chipId = 0;
int chipFlag = 0;
char boardVersion[]= "V0.1";

void setup() {
  Serial.begin(115200);
}

void loop() {

if (chipFlag == 0)
{
  for (int i = 0; i < 17; i = i + 8) {
    chipId |= ((ESP.getEfuseMac() >> (40 - i)) & 0xff) << i;
  }
  Serial.println("");
  Serial.println("");
  Serial.println("------------------------------------------");
  Serial.print("   ESP32 C6 Micro Dev ");
  Serial.println(boardVersion);
  Serial.println("------------------------------------------");
  Serial.printf("    ESP32 Chip model = %s Rev %d\n", ESP.getChipModel(), ESP.getChipRevision());
  Serial.printf("    This chip has %d cores\n", ESP.getChipCores());
  Serial.print("    Chip ID: ");
  Serial.println(chipId);

  chipFlag = 1;

  delay(3000);
}
}
