void forward() {

analogWrite(MOTOR_LEFT_1_PIN , PWM_SPEED);
analogWrite(MOTOR_LEFT_2_PIN , 0);
analogWrite(MOTOR_RIGHT_1_PIN , 0);
analogWrite(MOTOR_RIGHT_2_PIN , PWM_SPEED);

}

void reverse() {
analogWrite(MOTOR_LEFT_1_PIN , 0);
analogWrite(MOTOR_LEFT_2_PIN , PWM_SPEED);
analogWrite(MOTOR_RIGHT_1_PIN , PWM_SPEED);
analogWrite(MOTOR_RIGHT_2_PIN , 0);


}

void turnRight() {
analogWrite(MOTOR_LEFT_1_PIN , 0);
analogWrite(MOTOR_LEFT_2_PIN , 0);
analogWrite(MOTOR_RIGHT_1_PIN , 0);
analogWrite(MOTOR_RIGHT_2_PIN , PWM_SPEED);
}

void turnHardRight() {
analogWrite(MOTOR_LEFT_1_PIN , 0);
analogWrite(MOTOR_LEFT_2_PIN , PWM_SPEED);
analogWrite(MOTOR_RIGHT_1_PIN , 0);
analogWrite(MOTOR_RIGHT_2_PIN , PWM_SPEED);
}

void turnLeft() {

analogWrite(MOTOR_LEFT_1_PIN , PWM_SPEED);
analogWrite(MOTOR_LEFT_2_PIN , 0);
analogWrite(MOTOR_RIGHT_1_PIN , 0);
analogWrite(MOTOR_RIGHT_2_PIN , 0);
}

void turnHardLeft() {
analogWrite(MOTOR_LEFT_1_PIN , PWM_SPEED);
analogWrite(MOTOR_LEFT_2_PIN , 0);
analogWrite(MOTOR_RIGHT_1_PIN , PWM_SPEED);
analogWrite(MOTOR_RIGHT_2_PIN , 0);
  

}

void allStop() {
analogWrite(MOTOR_LEFT_1_PIN , 0);
analogWrite(MOTOR_LEFT_2_PIN , 0);
analogWrite(MOTOR_RIGHT_1_PIN , 0);
analogWrite(MOTOR_RIGHT_2_PIN , 0);
}

void runmotor() {
  if (motorRuns) {
    currentMillis = millis();
    runmotorfor = currentMillis;
    prevMillis = currentMillis;
    Serial1.print(currentMillis);
    Serial1.print("     ");
    Serial1.print(prevMillis);
    Serial1.print("     ");
    Serial1.println(runmotorfor);
  }
}





















/*
 * Old motorcontrol
 * 
 * 
void forward() {
  motor1.rotPos(straightSpeed);
  motor2.rotNeg(straightSpeed);
}

void reverse() {
  motor1.rotNeg(straightSpeed);
  motor2.rotPos(straightSpeed);
}

void turnRight() {
  motor1.rotPos(turnSpeed);
  motor2.rotPos(turnSpeed);
}

void turnLeft() {
  motor1.rotNeg(turnSpeed);
  motor2.rotNeg(turnSpeed);
}

void allStop() {
  motor1.stop();
  motor2.stop();
}

void runmotor() {
  if (motorRuns) {
    currentMillis = millis();
    runmotorfor = currentMillis;
    prevMillis = currentMillis;
    Serial1.print(currentMillis);
    Serial1.print("     ");
    Serial1.print(prevMillis);
    Serial1.print("     ");
    Serial1.println(runmotorfor);
  }
}
*/


