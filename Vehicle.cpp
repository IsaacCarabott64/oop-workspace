#include "Vehicle.h"

Vehicle::Vehicle(): ID(0){};

Vehicle::Vehicle(int ID): ID(ID){
  timeOfEntry = time(nullptr);
};
int Vehicle::getID(){
  return ID;
};
int Vehicle::getParkingDuration(){return -1;}
