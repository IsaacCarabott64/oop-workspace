#ifndef MOTORBIKE
#define MOTORBIKE

#include "Vehicle.h"

class Motorbike : public Vehicle {
  private:
  public:
    Motorbike();
    Motorbike(int ID);
    int getParkingDuration();
};
#endif