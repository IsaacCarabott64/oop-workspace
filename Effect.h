#ifndef EFFECT
#define EFFECT

#include "GameEntity.h"

class Effect{
  public:
    Effect(){};
    virtual void apply(GameEntity& entity) = 0;
};

#endif