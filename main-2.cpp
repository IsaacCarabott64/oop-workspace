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

  tuple<int,int> startPos = {0,0};
  Ship s(startPos);
  
  s.print();
  s.move(1, 1);
  s.print();

  tuple<int,int> minePos = {2, 2};
  Mine m(minePos);
  m.print();
  
  //Explosion e = m.explode();
  

  return 0;
}
