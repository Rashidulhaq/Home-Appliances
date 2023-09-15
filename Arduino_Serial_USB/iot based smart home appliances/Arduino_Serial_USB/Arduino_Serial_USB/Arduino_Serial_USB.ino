#define Sensor1 5
#define Buzzer 4


void setup() {
  Serial.begin(9600);
  pinMode(Sensor1, INPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop() {
  bool value1 = digitalRead(Sensor1);
  Serial.println(value1);

  if (value1 == 0 ) {
    digitalWrite(Buzzer, HIGH);
  } else {
    digitalWrite(Buzzer, LOW);
  }
}
