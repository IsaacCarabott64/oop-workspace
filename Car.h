#ifndef CAR
#define CAR

#include "Vehicle.h"

class Car : public Vehicle{
  private:
  public:
    Car(int ID);
    int getParkingDuration();
    
};

#endif