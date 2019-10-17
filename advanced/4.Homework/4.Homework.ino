void setup() {
  // put your setup code here, to run once:
pinMode(6, OUTPUT);
pinMode(A0 ,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

int val = analogRead(A0);

Serial.println(map(val,0,1023,0,255));

int aaa=map(val,0,1023,0,255);

analogWrite(6,aaa);

}
