// <Partner 1> <Partner 2>
// mm/dd/yy
// <Instructor name>

/**
 * Robotics Lab 1
 * Part 1: Maneuvering
 */

#include <Servo.h>

/**
 * Declare variables
 * representing our servos
 */
Servo servoLeft;
Servo servoRight;

/**
 * Main setup() block that gets called
 * when our robot boots up and after the
 * `reset` button is pressed
 */
void setup() {
  /**
   * Associate our declared servo
   * variables with pins on the shield
   * (these numbers should be present on the shield)
   */
  servoLeft.attach(13);
  servoRight.attach(12);

  /**
   * Place your subsequent function calls here to
   * make the robot either:
   *
   * a.)
   *  - Go forward
   *  - Turn left in place
   *  - Turn right in place
   *  - Go backward
   *
   * b.)
   *  - Maneuver in a triangle, stopping at the
   *    same place it started
   */

 /**
  * Stop sending our servos signals from our code
  * by "detaching" or disassociating our declared
  * variables with the pins on the shield.
  */
  servoLeft.detach();
  servoRight.detach(); 
}

/**
 * Define some of your own functions here!
 */

/**
 * This is the main loop() function that gets called
 * repeatedly while your robot is powered on. We won't
 * be using this function in part 1, as the operation
 * we're attempting to perform should only happen once.
 */
void loop() {

}
