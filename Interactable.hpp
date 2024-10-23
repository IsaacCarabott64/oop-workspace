#ifndef INTERACTABLE
#define INTERACTABLE

#include "GridItem.hpp"
#include "Scientist.hpp"

enum InteractableType{
  GOAL,
  EXPERIMENT
}

class Interactable : public GridItem{
  protected:
    static int activeInteractableCount;
  public:
    Interactable(): Interactable(0, 0, 0, 0){} 
    Interactable(int x, int y, int width, int height): GridItem::GridItem(x, y, width, height){
      activeInteractableCount++;
    }

    virtual bool interact(Scientist* player) = 0;
    virtual InteractableType getType() = 0;

    ~Interactable(){
      activeInteractableCount--;
    }


};

int Interactable::activeInteractableCount = 0;

#endif