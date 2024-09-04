#ifndef FRIDGE
#define FRIDGE

#include "Appliance.h"

class Fridge : public Appliance {
  private:
    double volume;
  public:
    Fridge();
    Fridge(int powerRating, double volume);
    
    void setSolume(double volume);
    double getVolume();

    double getPowerConsumption();


};

#endif