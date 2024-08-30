#ifndef VEHICLE
#define VEHICLE

#include <ctime>

class Vehicle{
  private:
    std::time_t timeOfEntry;
    int ID;
  public:
    Vehicle();
    Vehicle(int ID);
    int getID();
    std::time_t getTimeOfEntry();
    int getParkingDuration();

};

#endif