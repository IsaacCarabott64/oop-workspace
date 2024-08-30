#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main(){

  int n = 3;  

  Vehicle** vehicles = new;
  
  vehicles[0] = new Car(1);
  vehicles[1] = new Bus(2);
  vehicles[2] = new Motorbike(3);

  for (int i = 0; i < n; i++){
    cout << "Vehicle: " << vehicles[i]->getID() << " ParkingDuration: " << vehicles[i]->getParkingDuration() << endl;
  }


  return 0;
}