#include<Ultrasonic.h>

#define TRIG_PIN 14
#define ECHO_PIN 12

Ultrasonic ultrasonic(TRIG_PIN,ECHO_PIN);

void setup(){
  Serial.begin(9600);

}

void loop(){
  int distance = ultrasonic.read();

  Serial.print("Jarak :");
  Serial.println(distance);
  Serial.print("cm");

  if(deteksiOrang()){
  //Trigger Alarm
  Serial.print("Alarm Trigerred");
  }
  
}



int deteksiOrang(){
  int distance = ultrasonic.read();
  if(distance < 10){
    return 1; //ada sesuatu
  }
  return 0; //ga ada
}

