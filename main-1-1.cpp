#include <iostream>
#include "AirCraft.h"

using namespace std;


int main(){

  AirCraft A(75);

  cout << "Aircraft A has weight " << A.get_weight() << endl;
  A.set_weight(80);
  cout << "Aircraft A has weight " << A.get_weight() << endl;

  cout << "Aircraft A has fuel " << A.get_fuel() << endl;
  A.set_fuel(80);
  cout << "Aircraft A has fuel " << A.get_fuel() << endl;
  A.refuel();
  cout << "After refuelling, Aircraft A has fuel " << A.get_fuel() << endl;

  cout << "Aircraft A has number of flights " << A.get_numberOfFlights() << endl;
  A.set_numberOfFlights(3);
  cout << "Aircraft A has number of flights " << A.get_numberOfFlights() << endl;
  



  return 0;
}