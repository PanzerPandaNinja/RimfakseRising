/*
 * Methods for controlling the car.
 * The car has parts it controls, like motor, steering and sensors.
 

void carWait()
{
  //ledBlink(LED_SLOW_BLINK);
  allStop();
}

void carDrive()
{
  //Figure out best direction to go. Continously calculate what the best speed and direction is.
 smartMove();

}

void carStop()
{
  ledBlink(LED_FAST_BLINK);
  allStop();
}

*/
