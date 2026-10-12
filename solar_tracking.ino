#include <Servo.h>

// LDR sensor pins
const int TOP_LDR_PIN = A0;
const int BOTTOM_LDR_PIN = A1;

// Servo signal pin
const int SERVO_PIN = 9;

// Servo movement limits
const int MIN_ANGLE = 60;
const int MAX_ANGLE = 160;
const int START_ANGLE = 90;

// Tracking settings
const int LIGHT_THRESHOLD = 40;
const int STEP_SIZE = 1;

// Change to -1 if movement is reversed
const int SERVO_DIRECTION = 1;

Servo solarServo;
int servoAngle = START_ANGLE;

// Read multiple samples to reduce noise
int readAverage(int pin) {
  long total = 0;

  for (int i = 0; i < 8; i++) {
    total += analogRead(pin);
    delay(2);
  }

  return total / 8;
}

void setup() {
  Serial.begin(9600);

  solarServo.attach(SERVO_PIN);
  solarServo.write(servoAngle);

  delay(500);

  Serial.println("Sun Based Solar Tracking System");
}

void loop() {
  int topLight = readAverage(TOP_LDR_PIN);
  int bottomLight = readAverage(BOTTOM_LDR_PIN);

  int difference = topLight - bottomLight;

  if (difference > LIGHT_THRESHOLD) {
    servoAngle += SERVO_DIRECTION * STEP_SIZE;
  } 
  else if (difference < -LIGHT_THRESHOLD) {
    servoAngle -= SERVO_DIRECTION * STEP_SIZE;
  }

  servoAngle = constrain(
    servoAngle,
    MIN_ANGLE,
    MAX_ANGLE
  );

  solarServo.write(servoAngle);

  Serial.print("Top LDR: ");
  Serial.print(topLight);

  Serial.print(" | Bottom LDR: ");
  Serial.print(bottomLight);

  Serial.print(" | Difference: ");
  Serial.print(difference);

  Serial.print(" | Servo angle: ");
  Serial.println(servoAngle);

  delay(50);
}
