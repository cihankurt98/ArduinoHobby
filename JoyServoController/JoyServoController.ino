#include <Servo.h> //This is the actual Servo library to make it easy.

Servo myServo;  // create servo object to control a servo


//Joystick
int YaxisPin = A1; // The analog pin of the Y axis

//Servo
int servoPosition = 90;    // variable to store the servo position


void setup()
{
  Serial.begin(9600); // At the moment we don't print anything, so you can remove this line if you want
  myServo.attach(9);  // attaches the servo on pin 9 to the servo object
  myServo.write(servoPosition); //making sure that it initiates on 90 degrees
}

void loop()
{
  servoPosition = map(analogRead(YaxisPin), 0, 1023, 0, 180); //The servo has 180 degrees. Mapping the value of the joystick's Y axis to fit the 180 degrees of the servo.
  myServo.write(servoPosition); //you can also use analogWrite. 
  Serial.println(servoPosition); //This line can be deleted.
}


