#ifndef SHIP
#define SHIP

#include "GameEntity.h"

class Ship : public GameEntity{
  private:
  public:
    Ship(std::tuple<int,int> pos){
      position = pos;
      type = GameEntityType::ShipType;
    }
    void move(int dx, int dy){
      int x = std::get<0>(position);
      int y = std::get<1>(position);
      std::tuple<int,int> newPos = {x + dx, y + dy};
      this->setPos(newPos);
    }
};

#endif