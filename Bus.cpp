#include "Bus.h"
#include <ctime>

Bus::Bus(int ID): Vehicle(ID){};

int Bus::getParkingDuration(){
  std::time_t now = time(nullptr);
  std::time_t diff = (now-this->getTimeOfEntry())*0.75;
  return diff;
};
