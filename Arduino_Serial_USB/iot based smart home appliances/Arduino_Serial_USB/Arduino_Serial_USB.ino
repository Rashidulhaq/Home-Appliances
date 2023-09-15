
#define BLYNK_PRINT DebugSerial
#define BLYNK_TEMPLATE_ID "TMPLs4P32VZ-"
#define BLYNK_TEMPLATE_NAME "HOME IOT"
#define BLYNK_AUTH_TOKEN "8TDE2lgxVWh2GPZGYK5yCzElfKH9_X6z"
/* Fill-in your Template ID (only if using Blynk.Cloud) */
//#define BLYNK_TEMPLATE_ID   "TMPLs4P32VZ-"
#define Sensor1 5
#define Buzzer 4


// You could use a spare Hardware Serial on boards that have it (like Mega)
#include <SoftwareSerial.h>
SoftwareSerial DebugSerial(2, 3); // RX, TX

#include <BlynkSimpleStream.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "8TDE2lgxVWh2GPZGYK5yCzElfKH9_X6z";


void setup()
{
  // Debug console
  DebugSerial.begin(9600);
  pinMode(Sensor1, INPUT);
  pinMode(Buzzer, OUTPUT);
   Serial.begin(9600);
  Blynk.begin(Serial, auth);
}

void loop()
{
    bool value1 = digitalRead(Sensor1);
  Serial.println(value1);

  if (value1 == 0 ) {
    digitalWrite(Buzzer, HIGH);
  } else {
    digitalWrite(Buzzer, LOW);
  }
  
  Blynk.run();
}
