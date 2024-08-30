#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <thread>
#include <chrono>

using namespace std;

int main(){

  int n;
  cout << "Enter a number of vehicles: ";
  cin >> n;

  Vehicle* vehicles[n];

  for (int i = 0; i < n; i++){
    string inp;
    cout << "Enter the type of vehicle: ";
    cin >> inp;
    int v_id = i;

    if (inp == "car"){
      vehicles[i] = new Car(v_id);
    } else if (inp == "bus") {
      vehicles[i] = new Bus(v_id);
    } else {
      vehicles[i] = new Motorbike(v_id);
    }
  }

  for (int i = 0; i < n; i++){
    cout << vehicles[i]->getID() << " " << vehicles[i]->getParkingDuration() << endl;
  }

  return 0;
}