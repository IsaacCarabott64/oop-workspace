#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int max): max(max){
  vehicles = new Vehicle*[max];
  count = 0;
};

int ParkingLot::getCount(){
  return count;
};

void ParkingLot::parkVehicle(Vehicle* new_vehicle){
  if (count == max){
    std::cout << "The lot is full" << std::endl;
  } else {
    vehicles[count] = new_vehicle;
    count++;
  }
};

void ParkingLot::unparkVehicle(int ID){
  int remove_i = -1;
  for (int i = 0; i < count; i++){
    if (vehicles[i]->getID() == ID){
      remove_i = i;
      break;
    }
  }
  if (remove_i == -1){
    std::cout << "Vehicle not in the lot" << std::endl;
  } else {
    for (int i = remove_i; i < count-1; i++){
      vehicles[i] = vehicles[i+1];
    }
    count--;
  }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
  int overstay_count = 0;
  for (int i = 0; i < count; i++){
    if (vehicles[i]->getParkingDuration() > maxParkingDuration){
      overstay_count++;
    }
  }
  return overstay_count;
}

void ParkingLot::print(){
  std::cout << "Parking lot is at " << count << "/" << max << " capacity" << std::endl;
  for (int i = 0; i < count; i++){
    std::cout << vehicles[i]->getID() << " ";
  }
  std::cout << "\n" << std::endl;
}