#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include <thread>
#include <chrono>

using namespace std;

int main(){

  ParkingLot pl(10);

  pl.parkVehicle(new Car(1));
  pl.parkVehicle(new Car(2));
  pl.parkVehicle(new Car(3));
  pl.parkVehicle(new Car(4));
  pl.parkVehicle(new Car(5));
  pl.parkVehicle(new Car(6));
  pl.parkVehicle(new Car(7));
  pl.parkVehicle(new Car(8));
  pl.parkVehicle(new Car(9));
  pl.parkVehicle(new Car(10));

  while (true){
    string inp;
    pl.print();
    cout << "There are " << pl.countOverstayingVehicles(5) << " overstaying vehicles" << endl;
    cin >> inp;
  }

  return 0;
}