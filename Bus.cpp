#include "Bus.h"

Bus::Bus(int ID): Vehicle(ID){
  Vehicle::timeOfEntry = time(nullptr);
}

Bus::Bus(): Bus(0){};

int Bus::getParkingDuration(){
  return (int)((time(nullptr)-timeOfEntry)-(time(nullptr)-timeOfEntry)*0.25);
  //return (int)((time(nullptr)-timeOfEntry)*0.1);
};