void forward() {

digitalWrite(MOTOR_LEFT_1_PIN , HIGH);
digitalWrite(MOTOR_LEFT_2_PIN , LOW);
digitalWrite(MOTOR_RIGHT_1_PIN , LOW);
digitalWrite(MOTOR_RIGHT_2_PIN , HIGH);

}

void reverse() {
digitalWrite(MOTOR_LEFT_1_PIN , LOW);
digitalWrite(MOTOR_LEFT_2_PIN , HIGH);
digitalWrite(MOTOR_RIGHT_1_PIN , HIGH);
digitalWrite(MOTOR_RIGHT_2_PIN , LOW);
  

}

void turnRight() {
digitalWrite(MOTOR_LEFT_1_PIN , LOW);
digitalWrite(MOTOR_LEFT_2_PIN , LOW);
digitalWrite(MOTOR_RIGHT_1_PIN , LOW);
digitalWrite(MOTOR_RIGHT_2_PIN , HIGH);
}

void turnHardRight() {
digitalWrite(MOTOR_LEFT_1_PIN , LOW);
digitalWrite(MOTOR_LEFT_2_PIN , HIGH);
digitalWrite(MOTOR_RIGHT_1_PIN , LOW);
digitalWrite(MOTOR_RIGHT_2_PIN , HIGH);
}

void turnLeft() {

digitalWrite(MOTOR_LEFT_1_PIN , HIGH);
digitalWrite(MOTOR_LEFT_2_PIN , LOW);
digitalWrite(MOTOR_RIGHT_1_PIN , LOW);
digitalWrite(MOTOR_RIGHT_2_PIN , LOW);
}

void turnHardLeft() {
digitalWrite(MOTOR_LEFT_1_PIN , HIGH);
digitalWrite(MOTOR_LEFT_2_PIN , LOW);
digitalWrite(MOTOR_RIGHT_1_PIN , HIGH);
digitalWrite(MOTOR_RIGHT_2_PIN , LOW);
  

}

void allStop() {
digitalWrite(MOTOR_LEFT_1_PIN , LOW);
digitalWrite(MOTOR_LEFT_2_PIN , LOW);
digitalWrite(MOTOR_RIGHT_1_PIN , LOW);
digitalWrite(MOTOR_RIGHT_2_PIN , LOW);
}

void runmotor() {
  if (motorRuns) {
    currentMillis = millis();
    runmotorfor = currentMillis;
    prevMillis = currentMillis;
    Serial.print(currentMillis);
    Serial.print("     ");
    Serial.print(prevMillis);
    Serial.print("     ");
    Serial.println(runmotorfor);
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
    Serial.print(currentMillis);
    Serial.print("     ");
    Serial.print(prevMillis);
    Serial.print("     ");
    Serial.println(runmotorfor);
  }
}
*/


