#include <Servo.h>

Servo myservo; 

int val;    

void setup() {
  Serial.begin(9600);
  myservo.attach(3);  
}

void loop() {

   int reading=analogRead(A1);  
   float voltage = reading * 5.0;
   voltage /= 1024.0;
   float temperatureC = (voltage - 0.5) * 100 ; 
                                              
   Serial.println(temperatureC);


  if(temperatureC>21){
    myservo.write(0);
  }else {
    myservo.write(179);  
  }
  
  delay(1000);                           

