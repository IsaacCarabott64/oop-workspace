#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"
#include "AirFleet.h"

using namespace std;


int main(){

  AirFleet af;

  AirCraft** affleet = af.get_fleet();

  for (int i = 0; i < 5; i++){
    cout << "AirCraft: " << " weight: " << affleet[i]->get_weight() << endl;
  }


  return 0;
}