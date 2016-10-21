/*
    forward();
    reverse();
    turnRight();
    turnLeft();
    turnHardRight();
    turnHardLeft();
    allStop();

     frontSensorValue
     rightSensorValue
     leftSensorValue
 */


void smartMove() {
  //forward();
  if (frontSensorValue < (CRASH_DISTANCE-5)) {
    turnHardLeft();
  }
  
  else if (rightSensorValue < CRASH_DISTANCE){
    turnLeft();
  }
    else if (rightSensorValue < (CRASH_DISTANCE+20)){
    rightWallValue++;
      if (rightWallValue < 1050) {
      turnLeft();
      rightWallValue = 0;
  }
  }
  
  else if (leftSensorValue < CRASH_DISTANCE){
    turnRight();
  }


  else if (leftSensorValue < (CRASH_DISTANCE+20)){
    leftWallValue++;
    if (leftWallValue < 1050) {
      turnRight();
      leftWallValue = 0;
  } 
  }
  
  else {
    forward();
  }
}









