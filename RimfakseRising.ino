
//#include <L29x.h>
#include <Adafruit_NeoPixel.h>
#include "config.h"


void setup() {
  //Startmodulprep
  pinMode(STARTMODULE_PIN,INPUT);
  attachInterrupt(STARTMODULE_PIN, changeStartmoduleState, CHANGE);
 
  //For debugging:
  //digitalWrite(STARTMODULE_PIN, HIGH);

 //lysstripe
	strip.begin();
	strip.show(); // Initialize all pixels to 'off'
  ledOff();
 
  //Motor
  pinMode(MOTOR_LEFT_1_PIN,OUTPUT);
  pinMode(MOTOR_LEFT_2_PIN,OUTPUT);
  pinMode(MOTOR_RIGHT_1_PIN,OUTPUT);
  pinMode(MOTOR_RIGHT_2_PIN,OUTPUT);
 
  Serial1.begin(115200);
}


void loop() {
  
  setSensorVar(); //setter sensorvariablene

  // FOR DEBUGGING
  serialSensors();
  //testDrive();
  //smartMove();//omgå startmodul
  //startmodule_state = WAITING; //DEBUG

    if (startmodule_state == WAITING)
  {
    //Serial1.println("WAIT");
    ledGreen();
    allStop();
  }
  else if (startmodule_state == RUNNING)
  {
    //Serial1.println("DRIVE");
    smartMove();
    police_light();
  }
  else if (startmodule_state == STOP)
  {
    //Serial1.println("STOP");
    ledRed();
    allStop();
  }

}






