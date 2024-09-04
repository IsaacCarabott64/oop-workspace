#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"

using namespace std;


int main(){

  Helicopter h(5690, "realopter");
  h.set_fuel(80);
  cout << "h flights: " << h.get_numberOfFlights() << " and h fuel: " << h.get_fuel() << endl;

  
  h.fly(45, 10);
  cout << "h flights: " << h.get_numberOfFlights() << " and h fuel: " << h.get_fuel() << endl;

  Airplane a(500, 100);
  a.set_fuel(95);
  cout << "Airplane a has " << a.get_numPassengers() << " passengers and weight " << a.get_weight() << endl;

  cout << "a flights: " << a.get_numberOfFlights() << " and a fuel: " << a.get_fuel() << endl;
  a.fly(65, 120);
  cout << "a flights: " << a.get_numberOfFlights() << " and a fuel: " << a.get_fuel() << endl;

  return 0;
}