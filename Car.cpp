#include "Car.h"
#include <ctime>

Car::Car(int ID): Vehicle(ID){};

int Car::getParkingDuration(){
  std::time_t now = time(nullptr);
  std::time_t diff = (now-this->getTimeOfEntry())*0.9;
  return diff;
};
