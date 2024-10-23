#ifndef GOALHEADER
#define GOALHEADER

#include "Interactable.hpp"
#include "Helper.hpp"

class Goal : public Interactable{
  private:
  public:
    Goal(): Goal(0, 0){};
    Goal(int width, int height): Interactable(width-1, height-1, width, height){}

    bool interact(Scientist* player){
      if (Helper::manhattanDistance(player->getCoordinates(), this->getCoordinates()) == 0 && player->getExperimentCount() >= 1){
        return true;
      }
      return false;
    }

    InteractableType getType(){ return InteractableType::GOAL; }


};


#endif