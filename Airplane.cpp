#include "Airplane.h"

Airplane::Airplane(){};

Airplane::Airplane(int w, int p): AirCraft(w), numPassengers(p){};

int Airplane::get_numPassengers(){ return numPassengers; };
void Airplane::set_numPassengers(int p){ numPassengers = p; };

void Airplane::reducePassengers(int x){
  numPassengers -= x;
  if (numPassengers < 0){
    numPassengers = 0;
  }
};

void Airplane::fly(int headwind, int minutes){
  float fpm = 0.3;
  if (headwind >= 60){
    fpm = 0.5;
  }
  fpm += numPassengers * 0.001;

  float fuel_cost = fpm * minutes;

  if (get_fuel()-fuel_cost > 20){
    set_fuel(get_fuel() - fuel_cost);
    set_numberOfFlights(get_numberOfFlights() + 1);
  }
}