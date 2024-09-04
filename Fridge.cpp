#include "Fridge.h"

Fridge::Fridge(){};
Fridge::Fridge(int powerRating, double volume){
  set_powerRating(powerRating);
  this->volume = volume;
};

void Fridge::setVolume(double volume){ this->volume = volume; };
double Fridge::getVolume(){ return volume; };

double Fridge::getPowerConsumption(){ return (get_powerRating() * 24 * (volume / 100)); }