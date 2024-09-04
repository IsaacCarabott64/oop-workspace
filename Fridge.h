#ifndef FRIDGE
#define FRIDGE

#include "Appliance.h"

class Fridge : public Appliance {
  private:
    double volume;
  public:
    Fridge();
    Fridge(int powerRating, double volume);
    
    void set_volume(double volume);
    double get_volume();

    double getPowerConsumption();


};

#endif