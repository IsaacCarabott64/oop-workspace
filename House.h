#ifndef HOUSE
#define HOUSE

#include "Appliance.h"

class House {
  private:
    int capacity;
    int numAppliances;
    Appliance** appliances;
  public:
    House();
    House(int numAppliances);

    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();


};

#endif