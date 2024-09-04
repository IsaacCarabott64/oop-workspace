#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"

using namespace std;


int main(){

  Helicopter h(5690, "realopter");
  h.set_fuel(80);
  cout << "h flights: " << h.get_numberOfFlights() << " and h fuel: " << h.get_fuel() << endl;

  
  h.fly(45, 10);
  cout << "h flights: " << h.get_numberOfFlights() << " and h fuel: " << h.get_fuel() << endl;

  return 0;
}