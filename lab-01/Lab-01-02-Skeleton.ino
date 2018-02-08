// <Partner 1> <Partner 2>
// mm/dd/yy
// <Instructor name>

/**
 * Robotics Lab 1
 * Part 2: Infraresd Sensor Data Collection
 */

#include <Servo.h>

/**
 * Set custom names for each pin we'll
 * be interacting with in this part of the lab
 */
#define RIGHT_SERVO_PIN 12
#define LEFT_SERVO_PIN 13

int IR_IN_PIN = 8;
int IR_OUT_PIN = 9;

/**
 * Declare our servo-representing
 * global variables
 */
Servo servoLeft;
Servo servoRight;

int IR_in;
const int FREQ = 38500; // Frequency that the IR sensor operates at
const int SERVO_ZERO = 1500;

/**
 * Main setup() block of code. Again, you sbould
 * put code that you only want to run once here.
 */
void setup() {
  // You set the appropriate pin modes. Uncomment and configure!
  // pinMode(_,_);  // Configure the IR led as an output
  // pinMode(_,_);  // Configure the IR sensor pin as an input (the signal pin from the powerpoint)

  // Open up the serial port
  Serial.begin(9600);

  // Attach servos
  attachServos();
}

/**
 * This is the main loop() function that
 * gets called repeatedly after execution.
 * We'll want some logic here to react to the
 * result of our irDetect() function
 */
void loop() {
  // ...
}

void attachServos() {
  rightServo.attach(RIGHT_SERVO_PIN);
  leftServo.attach(LEFT_SERVO_PIN);
}

/**
 * This function checks for an object registering on the
 * infrared receiver. A return value of 0 indicates that
 * an object has been detected, while 1 indicates no object
 * has been detected
 */
int irDetect() {
  tone(IR_OUT_PIN, FREQ, 8);
  delay(1);
  int ir = digitalRead(IR_IN_PIN);
  delay(1);
  return ir;
}

