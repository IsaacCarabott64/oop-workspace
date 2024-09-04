#include "Helicopter.h"

using namespace std;

Helicopter::Helicopter(){};

Helicopter::Helicopter(int w, string n): AirCraft(w),name(n){};

string Helicopter::get_name(){return name;};

void Helicopter::set_name(string new_n){name = new_n;};

void Helicopter::fly(int headwind, int minutes){
  float fpm = 0.2;

  if (headwind >= 40){
    fpm = 0.4;
  }

  if ( get_weight() > 5670){
    fpm += (get_weight()-5670) * 0.01;
  }

  float fuel_cost = fpm * minutes;
  if (get_fuel()-fuel_cost >= 20){
    set_fuel(get_fuel()-fuel_cost);
    set_numberOfFlights(get_numberOfFlights() + 1);
  }

};