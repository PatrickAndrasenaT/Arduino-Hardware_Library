const int s1 = A0;
const int s2 = A1;
const int s3 = A2;
const int s4 = A3;
const int s5 = A4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sr1 = digitalRead (s1);
  int sr2 = digitalRead (s2);
  int sr3 = digitalRead (s3);
  int sr4 = digitalRead (s4);
  int sr5 = digitalRead (s5);

  Serial.print("S1 =  ");
  Serial.println(sr1);

  Serial.print("S2 = ");
  Serial.println(sr2);

  Serial.print("S3 =  ");
  Serial.println(sr3);

  Serial.print("S4 =  ");
  Serial.println(sr4);

  Serial.print("s5 = ");
  Serial.println(sr5);

}
