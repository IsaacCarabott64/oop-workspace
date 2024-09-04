#include "TV.h"

TV::TV(){};
TV::TV(int powerRating, double screenSize){
  set_powerRating(powerRating);
  this->screenSize = screenSize;

};

void TV::set_screenSize(double screenSize){ this->screenSize = screenSize; };
double TV::get_screenSize(){ return screenSize; };

double TV::getPowerConsumption(){
  return (get_powerRating() * (screenSize / 10));
};