#ifndef EXPLOSION
#define EXPLOSION

#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect{
  private:
  public:
    Explosion(std::tuple<int,int> pos){
      position = pos;
      type = GameEntityType::ExplosionType;
    }
    void apply(GameEntity& entity){
      std::tuple<int,int> newPos = {-1,-1};
      entity.setPos(newPos);
      entity.setType(GameEntityType::NoneType);
    }

};

#endif