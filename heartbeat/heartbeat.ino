int seconds = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(20);
  digitalWrite(13, LOW);
  Serial.print(seconds);
  Serial.print(" sec have elapsed ");
  Serial.print(millis());
  Serial.println(" millisec have actually elapsed.");
  seconds += 1;
  delay(980);

}
