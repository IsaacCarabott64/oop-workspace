#include "Car.h"
#include <ctime>

Car::Car(int ID): Vehicle(ID){};

int Car::getParkingDuration(){
  return (int)((time(nullptr) - Vehicle::getTimeOfEntry())*0.9);
};
