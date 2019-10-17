void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

int val = analogRead(A0);
Serial.println("analog value : " + map(val,0,1023,0.255));

analogWrite(13,val);

}
