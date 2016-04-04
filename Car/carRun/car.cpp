#include <Servo.h>

class Car {
private:
   struct Wheel {
      int mSpeed;
      Servo mServo;

      Wheel () :
         mSpeed {0} {}

      void setupPin (int const &pin) { mServo.attach(pin); }
      void speedSet (int const &speed) { mSpeed = speed; mServo.write(mSpeed+90); }

   } frontLeft, backLeft, frontRight, backRight;
   //Add sensors and stuff here 
   
public:
   Car (int const &pin1, int const &pin2, int const &pin3, int const &pin4) {
      frontLeft.setupPin(pin1);
      backLeft.setupPin(pin2);
      frontRight.setupPin(pin3);
      backRight.setupPin(pin4);
   }

   void speedSet (int const &speed) {
      frontLeft.speedSet(speed);
      backLeft.speedSet(speed);
      frontRight.speedSet(-speed);
      backRight.speedSet(-speed);
   }

   void stop () {
      speedSet(0);
   }
};



