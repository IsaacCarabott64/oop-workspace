#include "Motorbike.h"

Motorbike::Motorbike(int ID): Vehicle(ID){
  Vehicle::timeOfEntry = time(nullptr);
};

Motorbike::Motorbike(): Motorbike(0){};

int Motorbike::getParkingDuration(){
  return (int)((time(nullptr)-timeOfEntry)-(time(nullptr)-timeOfEntry)*0.15);
  //return (int)((time(nullptr)-timeOfEntry)*0.85);
};
