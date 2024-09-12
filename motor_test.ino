#define ENA 11
#define ENB 10
#define IN1 7
#define IN2 6
#define IN3 5
#define IN4 4

void setup() {
  // put your setup code here, to run once:
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  //turn on the motors for one second
  analogWrite (ENA, 255);
  analogWrite (ENB, 255);
  delay (500);
  //turn off the motors for one-half second
  analogWrite (ENA, 0);
  analogWrite (ENB, 0);
  delay (100);
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  //turn on the motors for one second
  analogWrite (ENA, 255);
  analogWrite (ENB, 255);
  delay (500);
  //turn off the motors for one-half second
  analogWrite (ENA, 0);
  analogWrite (ENB, 0);
  delay (100);
  
}