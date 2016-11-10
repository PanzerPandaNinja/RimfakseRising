void smartMove() {

  if (leftSensorValue < 15 && rightSensorValue < 15 && frontSensorValue < 15){
    turnHardLeft();
    delay (200);
  }

  else if (rightSensorValue < CRASH_DISTANCE){
    turnLeft(); }

  else if (leftSensorValue < CRASH_DISTANCE){
    turnRight(); }
    
  else { 

    forwardWithCorrection();
    forwardSteer(); }
}



void forwardWithCorrection()
{

float maxSensorDistance = 70;
right_limited_cm= min(rightSensorValue, maxSensorDistance);
left_limited_cm= min(leftSensorValue, maxSensorDistance);

float  e = (float)( right_limited_cm - left_limited_cm);  // if we are close to the left, positive value, close to right is negative value.

float K = 3.0;      // Juster denne ved behov. Antar middleValue er i Cm Maks e = 70 og -70 ved 40 (driftValue), så tar annen logikk over. Så maks er egentlig 30.
leftPWM = PWM_SPEED + e*K;       // Positive error – Means we are close to left wall.
rightPWM = PWM_SPEED - e*K;     // Positive error – Means we are close to left wall. Negative e is close to right wall.

}








