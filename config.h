/*     MOTOR     */
const int MOTOR_LEFT_1_PIN = 21;
const int MOTOR_LEFT_2_PIN = 20;
const int MOTOR_RIGHT_1_PIN = 22;
const int MOTOR_RIGHT_2_PIN = 23;

int globalCount = 0;
unsigned long runmotorfor = 0;
unsigned long currentMillis = 0;
unsigned long prevMillis = 0;
bool motorRuns = 0;
bool motorRunsright = 0;

int PWM_SPEED = 130;


/*        Sensors       */
const int SENSOR_FRONT_OUT_PIN = 17;
const int SENSOR_LEFT_OUT_PIN = 16;
const int SENSOR_RIGHT_OUT_PIN = 15;

const int STARTMODULE_PIN = 14;
const int LED_SLOW_BLINK = 750; //ms
const int LED_FAST_BLINK = 200; //ms
 
/*         Led          */
#define PIN 2
Adafruit_NeoPixel strip = Adafruit_NeoPixel(3, PIN, NEO_GRB + NEO_KHZ800);
bool changecolor = 1;
int lysteller = 0;

const int LED_PIN = 13;  //Onboard LED


/*      Variables      */
int frontSensorValue = 0;
int rightSensorValue = 0;
int leftSensorValue = 0;
int pos = 0;
int leftWallValue = 0;
int rightWallValue = 0;
int frontValue = 0;

/*     Constants     */

const int SENSOR_AVERAGE_COUNT = 5; //Readings from sensors are smoothed out using an average of the last X readings.

const int SENSOR_MIN_DISTANCE = 10; //cm
const int SENSOR_MAX_DISTANCE = 150; //cm

const int SLOW_TO_FAST_DISTANCE = 70; //cm. If distance in front shorter than this, go SLOW. If equal or over, go FAST.
const int CRASH_DISTANCE = 50; //cm - below this indicates that we've stuck up against a wall or opponent.

 enum startmoduleStates {
  WAITING,
  RUNNING,
  STOP
 };

volatile startmoduleStates startmodule_state = WAITING;


