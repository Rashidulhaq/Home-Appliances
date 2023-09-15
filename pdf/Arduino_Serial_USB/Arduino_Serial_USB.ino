/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  =>
  =>          USB HOWTO: http://tiny.cc/BlynkUSB
  =>

  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT DebugSerial
#define BLYNK_TEMPLATE_ID "TMPLs4P32VZ-"
#define BLYNK_TEMPLATE_NAME "HOME IOT"
#define BLYNK_AUTH_TOKEN "8TDE2lgxVWh2GPZGYK5yCzElfKH9_X6z"
/* Fill-in your Template ID (only if using Blynk.Cloud) */
//#define BLYNK_TEMPLATE_ID   "YourTemplateID"
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
  
  // Blynk will work through Serial
  // Do not read or write this serial manually in your sketch
  Serial.begin(9600);
  Blynk.begin(Serial, auth);
    //Serial.begin(9600);
  pinMode(Sensor1, INPUT);
  pinMode(Buzzer, OUTPUT);
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
