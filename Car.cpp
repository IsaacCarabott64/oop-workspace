#include "Car.h"

Car::Car(int ID): Vehicle(ID){
  Vehicle::timeOfEntry = time(nullptr);
};

Car::Car(): Car(0){};

int Car::getParkingDuration(){
  return (int)((time(nullptr)-timeOfEntry)-(time(nullptr)-timeOfEntry*0.1));
  //return (int)((time(nullptr)-timeOfEntry)*0.1);
};