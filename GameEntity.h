#ifndef GAMEENTITY
#define GAMEENTITY

#include <tuple>
#include "Utils.h"
#include <iostream>

enum GameEntityType{
  ExplosionType,
  MineType,
  NoneType,
  ShipType
};

class GameEntity{
  protected:
    std::tuple<int, int> position;
    GameEntityType type;
  public:
    GameEntity(): GameEntity(-1, -1, 'N'){}
    GameEntity(int x, int y, char type){
      position = std::tuple<int,int> {x,y};
      switch (type){
        case 'e':
        case 'E':
          this->type = GameEntityType::ExplosionType;
          break;
        case 'm':
        case 'M':
          this->type = GameEntityType::MineType;
          break;
        case 'n':
        case 'N':
          this->type = GameEntityType::NoneType;
          break;
        case 's':
        case 'S':
          this->type = GameEntityType::ShipType;
          break;
      }
    }

    void setPos(std::tuple<int,int> position){ this->position = position; }
    std::tuple<int, int> getPos(){ return position; }
    void setType(GameEntityType type){ this->type = type; }
    GameEntityType getType(){ return type; }

    void print(){
      std::cout << "Type: " << type << "   Pos: " << Utils::tupleToStr(position) << std::endl;
    }

};

#endif