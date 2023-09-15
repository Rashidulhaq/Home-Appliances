
#define BLYNK_PRINT DebugSerial

/* Fill-in your Template ID (only if using Blynk.Cloud) */

#define BLYNK_TEMPLATE_ID "TMPLs4P32VZ-"
#define BLYNK_TEMPLATE_NAME "HOME IOT"
#define BLYNK_AUTH_TOKEN "8TDE2lgxVWh2GPZGYK5yCzElfKH9_X6z"


#include <SoftwareSerial.h>
SoftwareSerial DebugSerial(2, 3); // RX, TX

#include <BlynkSimpleStream.h>

char auth[] = "8TDE2lgxVWh2GPZGYK5yCzElfKH9_X6z";

void setup()
{
  // Debug console
  DebugSerial.begin(9600);

  // Blynk will work through Serial
  // Do not read or write this serial manually in your sketch
  Serial.begin(9600);
  Blynk.begin(Serial, auth);
}

void loop()
{
  Blynk.run();
}
