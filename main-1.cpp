#include <iostream>
#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

using namespace std;


int main(){

  srand(time(NULL));

  GameEntity ge(1, 2, 'E');
  cout << "Type: " << ge.getType() << "   Pos: " << Utils::tupleToStr(ge.getPos()) << endl;

  for (int i = 0; i < 10; i++){
    tuple<int,int> p1 = Utils::generateRandomPos(10,10);
    tuple<int,int> p2 = Utils::generateRandomPos(10,10);
    cout << "Pos 1: " << Utils::tupleToStr(p1) << "  Pos 2:" << Utils::tupleToStr(p2) << "   Dist: " << Utils::calculateDistance(p1, p2) << endl;
  }

  
  return 0;
}
