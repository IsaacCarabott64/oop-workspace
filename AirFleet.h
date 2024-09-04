#ifndef AIRFLEET
#define AIRFLEET

#include "AirCraft.h"

class AirFleet{
  private:
    AirCraft **fleet;
  public:
    AirFleet();
    /* creates an air fleet containing pointers to 5 AirCraft objects as an array; 
    */
    AirCraft **get_fleet();      // returns the array of pointers to the five aircraft objects
};

#endif