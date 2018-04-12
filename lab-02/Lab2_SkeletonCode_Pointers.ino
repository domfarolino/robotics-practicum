// [ **** Partner 1, Partner 2 ****** ]
// [ **** Date **** ]
// *** Robotics Lab 2

// *** Include Servo Library
#include <Servo.h>

// *** Set Custom Names for each pin
#define RIGHT_SERVO_PIN 12
#define LEFT_SERVO_PIN 13
#define IR_LEFT_OUT_PIN 9
#define IR_LEFT_IN_PIN 10
#define IR_RIGHT_OUT_PIN 2
#define IR_RIGHT_IN_PIN 3

// *** Configure Variables
Servo rightServo;
Servo leftServo;
int IR_in;
const int FREQ = 38500; //frequency the ir sensor works at
const int SERVO_ZERO = 1500;


void setup() {
  // put your setup code here, to run once:
  
  // YOU Set the appropriate pin Modes. Uncomment and configure!
  // pinMode(_,_);  // Configure the IR led as output
  // pinMode(_,_);  // Configure the IR sensor pin as input
  // pinMode(_,_);  // Configure the IR led as output
  // pinMode(_,_);  // Configure the IR sensor pin as input

  // Open up the serial port
  Serial.begin(9600);

  //attach servos
  attachServos();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // Read IR sensors, decide whether they see an object
  // Make a decision about your movement

  
}

void attachServos(){
  rightServo.attach(RIGHT_SERVO_PIN);
  leftServo.attach(LEFT_SERVO_PIN);
}

void stopMovement(int* stopTime){
  rightServo.writeMicroseconds(1500);
  leftServo.writeMicroseconds(1500); 
  delay(*stopTime);
}

void moveForward(int* forwardTime){  
  rightServo.writeMicroseconds(SERVO_ZERO - 100);
  leftServo.writeMicroseconds(SERVO_ZERO + 100);
  delay(*forwardTime);
}

int irDetect(bool* right){
  // Uncomment and dereference pointer correctly:
  /*if( you want to run the right detector){
   *  tone(IR_RIGHT_OUT_PIN, FREQ, 8);
   *  delay(1);
   *  int ir = digitalRead(IR_RIGHT_IN_PIN);
   * }
   * else{
   *  tone(IR_LEFT_OUT_PIN, FREQ, 8);
   *  delay(1);
   *  int ir = digitalRead(IR_LEFT_IN_PIN);
   * }
   * delay(1);
   * return ir;
   */
  
  }


