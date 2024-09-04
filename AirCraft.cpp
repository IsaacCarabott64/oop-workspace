#include "AirCraft.h"

AirCraft::AirCraft(){};

AirCraft::AirCraft(int w): weight(w),fuel(100.0),numberOfFlights(0){};

int AirCraft::get_weight(){return weight;};
void AirCraft::set_weight(int w){weight = w;};

float AirCraft::get_fuel(){return fuel;};
void AirCraft::set_fuel(float f){fuel = f;};

int AirCraft::get_numberOfFlights(){return numberOfFlights;};
void AirCraft::set_numberOfFlights(int num){numberOfFlights = num;};

void AirCraft::refuel(){
  set_fuel(100.0);
};

void AirCraft::fly(int headwind, int minutes){
  numberOfFlights++;
};