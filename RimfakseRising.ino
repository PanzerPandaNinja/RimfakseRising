
//#include <L29x.h>
#include <Adafruit_NeoPixel.h>
#include "config.h"


void setup() {
  //For debugging
  //digitalWrite(STARTMODULE_PIN, HIGH);

   //Startmodulprep
   pinMode(STARTMODULE_PIN,INPUT);
   attachInterrupt(STARTMODULE_PIN, changeStartmoduleState, CHANGE);
 
 //lysstripe
	strip.begin();
	strip.show(); // Initialize all pixels to 'off'
 
  //Motor
  pinMode(MOTOR_LEFT_1_PIN,OUTPUT);
  pinMode(MOTOR_LEFT_2_PIN,OUTPUT);
  pinMode(MOTOR_RIGHT_1_PIN,OUTPUT);
  pinMode(MOTOR_RIGHT_2_PIN,OUTPUT);

 
  Serial.begin(115200);
}


void loop() {
  // FOR DEBUGGING
  serialSensors();
  //testDrive();
  startmodule_state = WAITING; //DEBUG

  
  setSensorVar(); //setter sensorvariablene
  police_light(); //blinker 

  
  //carDrive();//omgå startmodul

    if (startmodule_state == WAITING)
  {
    //Serial.println("WAIT");
    //oneNeo(3,0,0,100);
    carWait();
  }
  else if (startmodule_state == RUNNING)
  {
    Serial.println("DRIVE");
    carDrive();
    //oneNeo(3,0,100,0);
    police_light();
  }
  else if (startmodule_state == STOP)
  {
    Serial.println("STOP");
    ledOff();
    //oneNeo(3,100,0,0);
    carStop();
  }

}






