


void serialSensors(){
  /*
  Serial1.print(" Front: ");
  Serial1.print(getAverageSensorDistanceInCm(SENSOR_FRONT_OUT_PIN));
  Serial1.print("        Left: ");
  Serial1.print(getAverageSensorDistanceInCm(SENSOR_LEFT_OUT_PIN));
  Serial1.print("        Right:");
  Serial1.println(getAverageSensorDistanceInCm(SENSOR_RIGHT_OUT_PIN));
*/

  //Serial1.print(" Front: ");
  Serial1.print(leftSensorValue);
  Serial1.print("\t");
  Serial1.print(frontSensorValue);
  Serial1.print("\t");
  Serial1.print(rightSensorValue);
  Serial1.print("\t");
  Serial1.print(analogRead(STARTMODULE_PIN));
  Serial1.println("\t");

  //Serial1.print("        leftWall: ");
  //Serial1.print(leftWallValue);
  //Serial1.print("        rightWall:");
  //Serial1.println(rightWallValue);
}


void testDrive(){
  Serial1.println("Forward");
  forward();
  delay(2000);
  Serial1.println("Reverse");
  reverse();
  delay(2000);
  Serial1.println("Right");
  turnRight();
  delay(2000);
  Serial1.println("Left");
  turnLeft();
  delay(2000);
  Serial1.println("HardRight");  
  turnHardRight();
  delay(2000);
  Serial1.println("HardLeft");
  turnHardLeft();
  delay(2000);
  Serial1.println("STOP!");
  allStop();
  delay(10000);
}


