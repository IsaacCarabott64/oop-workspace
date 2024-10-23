#ifndef EXPERIMENTHEADER
#define EXPERIMENTHEADER

#include "Interactable.hpp"
#include "Helper.hpp"

class Experiment : public Interactable {
  private:

  public:
    Experiment(): Experiment(0, 0, 0, 0){}
    Experiment(int x, int y, int width, int height): Interactable(x, y, width, height){}

    bool interact(Scientist* player){
      if (Helper::manhattanDistance(player->getCoordinates(), this->getCoordinates()) == 0 && player->getExperimentCount() <= 3){
        player->runExperiment();
        return true;
      }
      return false;
    }

  InteractableType getType(){ return InteractableType::EXPERIMENT; }
};
#endif