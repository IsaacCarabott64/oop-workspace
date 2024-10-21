#include <iostream>
#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

using namespace std;

 
string tupleToStr(std::tuple<int,int> tp){
  return "(" + to_string(get<0>(tp)) + "," + to_string(get<1>(tp)) + ")";
}

int main(){

  GameEntity ge(1, 2, 'E');
  cout << "Type: " << ge.getType() << "   Pos: " << tupleToStr(ge.getPos()) << endl;

  Utils u;

  for (int i = 0; i < 10; i++){
    tuple<int,int> p1 = u.generateRandomPos(10,10);
    tuple<int,int> p2 = u.generateRandomPos(10,10);
    cout << "Pos 1: " << tupleToStr(p1) << "  Pos 2:" << tupleToStr(p2) << "   Dist: " << u.calculateDistance(p1, p2) << endl;
  }

  
  return 0;
}
