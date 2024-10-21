#ifndef MINE
#define MINE

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity{
  private:
  public:
    Mine(int x, int y){
      position = std::tuple<int,int>(x, y);
      type = GameEntityType::MineType;
    }
    Explosion explode(){
      this->type = NoneType;
      return Explosion(this->position);
    }
};

#endif