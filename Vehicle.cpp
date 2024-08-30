#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(int ID){
  this->ID = ID;
  this->timeOfEntry = std::time(nullptr);
};
int Vehicle::getID(){
  return ID;
};
std::time_t Vehicle::getTimeOfEntry(){
  return timeOfEntry;
};
