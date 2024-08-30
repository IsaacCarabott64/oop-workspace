#ifndef CAR
#define CAR

#include "Vehicle.h"

class Car : public Vehicle {
  private:
  public:
    Car();
    Car(int ID);
    int getParkingDuration();
};
#endif