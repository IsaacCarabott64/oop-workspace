#include "Bus.h"
#include <ctime>

Bus::Bus(int ID): Vehicle(ID){};

int Bus::getParkingDuration(
  return (int)((time(nullptr) - Vehicle::getTimeOfEntry())*0.75);
);
