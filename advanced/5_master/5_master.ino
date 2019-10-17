#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

  int val = analogRead(A0);
  int aaa = map(val, 0, 1023, 0, 255);

  Wire.beginTransmission(8);
  Wire.write(aaa);
  Wire.endTransmission();

}
