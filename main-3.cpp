#include <iostream>
#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include "Game.h"

using namespace std;
 
string tupleToStr(std::tuple<int,int> tp){
  return "(" + to_string(get<0>(tp)) + "," + to_string(get<1>(tp)) + ")";
}

int main(){

  srand(time(NULL));

  Game g;

  cout << "Setting up game" << endl;
  g.initGame(1, 5, 3, 3);

  cout << "\nStarting gameloop" << endl;
  g.gameLoop(10, 1);
  

  return 0;
}
