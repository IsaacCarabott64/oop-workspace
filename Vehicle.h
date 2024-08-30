#ifndef VEHICLE
#define VEHICLE

#include <ctime>

class Vehicle{
  protected:
    std::time_t timeOfEntry;
    int ID;
  public:
    Vehicle();
    Vehicle(int ID);
    int getID();
    virtual int getParkingDuration();

};

#endif