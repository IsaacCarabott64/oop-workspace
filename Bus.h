#ifndef BUS
#define BUS

#include "Vehicle.h"

class Bus : public Vehicle {
  private:
  public:
    Bus();
    Bus(int ID);
    int getParkingDuration();
};
#endif