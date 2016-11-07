void smartMove() {
 
  middleValue = rightSensorValue-leftSensorValue;
  
  if (middleValue < driftValue){ turnLeft(); }

  else if (middleValue > driftValue){ turnRight(); }
    
  else if (frontSensorValue < (CRASH_DISTANCE)) {
    frontValue++;
      if (frontValue > 500) {
        turnHardLeft();
        frontValue = 0;
      }
    }
    
  else { forward(); }
}



/*
 * 

void smartMove() {
  //forward();
  if (frontSensorValue < (CRASH_DISTANCE-5)) {
    frontValue++;
      if (frontValue > 700) {
        turnHardLeft();
        frontValue = 0;
      }
    }
  else if (rightSensorValue < CRASH_DISTANCE){
    turnLeft(); }

  else if (leftSensorValue < CRASH_DISTANCE){
    turnRight(); }
  
  else {
    forward();
  }
}





 * 
 */





