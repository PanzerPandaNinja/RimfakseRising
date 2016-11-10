


void serialSensors(){

  Serial1.print(leftSensorValue);
  Serial1.print("\t");
  Serial1.print(rightSensorValue);
  Serial1.print("\t");
  Serial1.print(frontSensorValue);
  Serial1.print("\t");
  Serial1.print(leftPWM);
  Serial1.print("\t");
  Serial1.print(rightPWM);
  Serial1.println("\t");
  
  //Serial1.print("        leftWall: ");
  //Serial1.print(leftWallValue);
  //Serial1.print("        rightWall:");
  //Serial1.println(rightWallValue);
}


void testDrive(){
  Serial1.println("Forward");
  forward();
  delay(1000);
  Serial1.println("Reverse");
  reverse();
  delay(1000);
  Serial1.println("Right");
  turnRight();
  delay(1000);
  Serial1.println("Left");
  turnLeft();
  delay(1000);
  Serial1.println("HardRight");  
  turnHardRight();
  delay(1000);
  Serial1.println("HardLeft");
  turnHardLeft();
  delay(1000);
  Serial1.println("STOP!");
  allStop();
  delay(10000);
}


