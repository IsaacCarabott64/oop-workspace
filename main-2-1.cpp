#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"

using namespace std;


int main(){

  Helicopter h(5690, "realopter");
  h.set_fuel(67);
  cout << "h flights: " << h.get_numberOfFlights() << " and h fuel: " << h.get_fuel() << endl;

  
  h.fly(40, 30);
  cout << "h flights: " << h.get_numberOfFlights() << " and h fuel: " << h.get_fuel() << endl;

  return 0;
}