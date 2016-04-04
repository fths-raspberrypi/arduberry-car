#include "car.cpp"

Car dankCar (2, 3, 4, 5);

void setup() { 
  Serial.begin(9600);
} 

void loop() {
   dankCar.speedSet (10);
}
