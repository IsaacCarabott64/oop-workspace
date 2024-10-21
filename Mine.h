#ifndef MINE
#define MINE

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity{
  private:
  public:
    Mine(std::tuple<int,int> pos){
      position = pos;
      type = GameEntityType::MineType;
    }
    Explosion explode(){
      this->type = NoneType;
      return Explosion(this->position);
    }
};

#endif