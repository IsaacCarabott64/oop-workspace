#include "House.h"

House::House(): House(0){};
House::House(int numAppliances): numAppliances(numAppliances),capacity(0){
  appliances = new Appliance*[numAppliances];
};

bool House::addAppliance(Appliance* appliance){
  if (capacity == numAppliances){
    return false;
  }
  appliances[capacity] = appliance;
  capacity++;
  return true;
};

double House::getTotalPowerConsumption(){
  double sum;
  for (int i = 0; i < capacity; i++){
    sum += appliances[i]->getPowerConsumption();
  }
  return sum;
};
