//***********************************************************
// Moving Servo
//***********************************************************
#include <Servo.h> //Reading servo motor library
Servo myservo; //Create an object for the servo
int val; //Variable for storing servo angle
void setup()
{
  myservo.attach(9); //Set digital pin 9 as the command pin for determining the servo angle
}
void loop()
{
  val = 0;
  myservo.write(val); //Move the servo (0 degree)
  delay(1500);
  val = 90;
  myservo.write(val); //Move the servo (90 degrees)
  delay(1500);
}
