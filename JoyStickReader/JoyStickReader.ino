#include <Servo.h> //This is the actual Servo library to make it easy.

Servo myservo;  // create servo object to control a servo


//Joystick
int YaxisValue = 0; //The value of the Y axis
int XaxisValue = 0; //The value of the X axis
int YaxisPin = A1; // The analog pin of the Y axis
int XaxisPin = A0; // The analog pin of the X axis
int ClickPin = 2; // the digital pin of the Click

//Servo
int servoPosition = 0;    // variable to store the servo position


void setup()
{
  Serial.begin(9600);
  pinMode(ClickPin, INPUT);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop()
{
 ReadValues();
 PrintValues();
}

void ReadValues()
{
  YaxisValue = analogRead(YaxisPin);
  XaxisValue = analogRead(XaxisPin);
}

void PrintValues()
{
  Serial.print("Y axis: ");
  Serial.print(YaxisValue);
  Serial.print("     X axis: ");
  Serial.print(XaxisValue);
  Serial.print("     ClickStatus: ");
  Serial.println(digitalRead(ClickPin));
}

