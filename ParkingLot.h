#ifndef PARKINGLOT
#define PARKINGLOT

#include "Vehicle.h"

class ParkingLot{
  private:
    int max;
    int count;
    Vehicle** vehicles;
  public:
    ParkingLot(int max);
    int getCount();
    void parkVehicle(Vehicle* new_vehicle);
    void unparkVehicle(int ID);
};

#endif