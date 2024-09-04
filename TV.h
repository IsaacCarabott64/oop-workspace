#ifndef TVCLASS
#define TVCLASS

#include "Appliance.h"

class TV : public Appliance {
  private:
    double screenSize;
  public:
    TV();
    TV(int powerRating, double screenSize);
    
    void set_screenSize(double screenSize);
    double get_screenSize();

    double getPowerConsumption();
};

#endif