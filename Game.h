#ifndef GAME
#define GAME

#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include <vector>

using namespace std;

class Game{
  private:
    vector<GameEntity*> entities;
  public:
    Game(){};

    vector<GameEntity*> get_entities(){ return entities; }
    void set_entities(vector<GameEntity*> entities){ this->entities = entities; }

    vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
      for (int i = 0; i < numShips; i++){
        tuple<int,int> newPos = Utils::generateRandomPos(gridWidth, gridHeight);
        Ship* newShip = new Ship(get<0>(newPos), get<1>(newPos));
        //newShip->print();
        entities.push_back(newShip);
      }
      for (int i = 0; i < numMines; i++){
        tuple<int,int> newPos = Utils::generateRandomPos(gridWidth, gridHeight);
        Mine* newMine = new Mine(get<0>(newPos), get<1>(newPos));
        //newMine->print();
        entities.push_back(newMine);
      }

      return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold){
      for (int i = 0; i < maxIterations; i++){
        //cout << "\nRound " << i+1 << endl;

        // for each ship
        for (int s = 0; s < (int)entities.size(); s++){
          if (entities[s]->getType() == GameEntityType::ShipType){
            //entities[s]->print();
            ((Ship*)entities[s])->move(1, 0);

            // for each mine
            for (int m = 0; m < (int)entities.size(); m++){
              if (entities[m]->getType() == GameEntityType::MineType){
                //entities[m]->print();

                // if distance to mine is less than threshold
                if (Utils::calculateDistance(entities[s]->getPos(), entities[m]->getPos()) <= mineDistanceThreshold){
                  //cout << "EXPLOSION!!!" << endl;
                  Explosion e = ((Mine*)entities[m])->explode();
                  e.apply(*entities[s]);
                }
              }
            }
          }
        }
      }
    }
};

#endif