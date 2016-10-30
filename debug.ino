


void serialSensors(){
  /*
  Serial.print(" Front: ");
  Serial.print(getAverageSensorDistanceInCm(SENSOR_FRONT_OUT_PIN));
  Serial.print("        Left: ");
  Serial.print(getAverageSensorDistanceInCm(SENSOR_LEFT_OUT_PIN));
  Serial.print("        Right:");
  Serial.println(getAverageSensorDistanceInCm(SENSOR_RIGHT_OUT_PIN));
*/

  //Serial.print(" Front: ");
  Serial.print(frontSensorValue);
  Serial.print("\t");
  Serial.print(leftSensorValue);
  Serial.print("\t");
  Serial.print(rightSensorValue);
  Serial.print("\t");
  Serial.print(analogRead(STARTMODULE_PIN));
  Serial.println("\t");

  //Serial.print("        leftWall: ");
  //Serial.print(leftWallValue);
  //Serial.print("        rightWall:");
  //Serial.println(rightWallValue);
}


void testDrive(){
  Serial.println("Forward");
  forward();
  delay(2000);
  Serial.println("Reverse");
  reverse();
  delay(2000);
  Serial.println("Right");
  turnRight();
  delay(2000);
  Serial.println("Left");
  turnLeft();
  delay(2000);
  Serial.println("HardRight");  
  turnHardRight();
  delay(2000);
  Serial.println("HardLeft");
  turnHardLeft();
  delay(2000);
  Serial.println("STOP!");
  allStop();
  delay(10000);
}


