#ifndef BUS
#define BUS

#include "Vehicle.h"

class Bus : public Vehicle{
  private:
  public:
    Bus(int ID);
    int getParkingDuration();

};

#endif