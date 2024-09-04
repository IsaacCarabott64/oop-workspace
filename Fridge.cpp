#include "Fridge.h"

Fridge::Fridge(){};
Fridge::Fridge(int powerRating, double volume){
  set_powerRating(powerRating);
  this->volume = volume;
};

void Fridge::set_volume(double volume){ this->volume = volume; };
double Fridge::get_volume(){ return volume; };

double Fridge::getPowerConsumption(){ return (get_powerRating() * 24 * (volume / 100)); }