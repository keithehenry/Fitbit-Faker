#include <Arduino.h>
#include <ServoEasing.hpp>

ServoEasing myservo;

void setup()
{
   myservo.attach(ServoPin); // ServoPin is defined in platformio.ini
   myservo.setSpeed(250);
}

void loop()
{
   for (int i = 0; i < 7; i++)
   {
      myservo.easeTo(0);   // Angle 0
      myservo.easeTo(180); // Angle 180
   }
   delay(40000);
}
