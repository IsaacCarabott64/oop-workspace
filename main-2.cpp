#include <iostream>
#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

using namespace std;
 
string tupleToStr(std::tuple<int,int> tp){
  return "(" + to_string(get<0>(tp)) + "," + to_string(get<1>(tp)) + ")";
}

int main(){

  srand(time(NULL));

  Ship s(0, 0);
  
  s.print();
  s.move(1, 1);
  s.print();

  Mine m(2, 2);
  m.print();
  
  //Explosion e = m.explode();
  

  return 0;
}
