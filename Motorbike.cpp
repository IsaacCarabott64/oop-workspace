#include "Motorbike.h"
#include <ctime>
#include <cmath>

Motorbike::Motorbike(int ID): Vehicle(ID){};

int Motorbike::getParkingDuration(){
  return (int)((time(nullptr) - Vehicle::getTimeOfEntry())*0.85);
};

