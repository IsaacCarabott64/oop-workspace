#include "Motorbike.h"
#include <ctime>

Motorbike::Motorbike(int ID): Vehicle(ID){};

int Motorbike::getParkingDuration(){
  std::time_t now = time(nullptr);
  std::time_t diff = (now-getTimeOfEntry())*0.85;
  return diff;
};

