#ifndef SCIENTIST
#define SCIENTIST

#include "GridItem.hpp"
#include <iostream>

class Scientist : public GridItem{
  protected:
    int experimentCount;
  public:
  Scientist(): Scientist(0, 0){};
  Scientist(int gridWidth, int gridHeight): GridItem::GridItem(0, 0, gridWidth, gridHeight),experimentCount(0){};
  
  int getExperimentCount(){ return experimentCount; } // gets the current number of experiment stations the scientist has visited
  void runExperiment(){ experimentCount++; } // increments the number of experiment stations the scientist has visited
  
  /*  moves the scientist in the x or y directions by the provided number of steps. The scientist can only move at
      most 2 steps (including negative steps) in each direction at a time e.g move (0,0), move(1,0), move(1,1), 
      move(0,1), move(-2,2), move(2,0) and move(0,2) are legal but (3,0), (0,3) (3,3) and so on are not legal moves. 
      This function returns true for a legal move within the bounds of the grid and false otherwise. */
  bool move(int xOffset, int yOffset){
    bool xValid = false;
    bool yValid = false;

    // check valid number
    if (xOffset <= 2 && xOffset >= -2){
      xValid = true;
    }
    if (yOffset <= 2 && yOffset >= -2){
      yValid = true;
    }
    
    // check in bounds
    if (x + xOffset < 0 || x + xOffset > width - 1){
      xValid = false;
    }
    if (y + yOffset < 0 || y + yOffset > height - 1){
      yValid = false;
    }


    // if valid
    if (xValid && yValid){
      this->x += xOffset;
      this->y += yOffset;
    }

    return xValid && yValid;
  }

  void print(){
    std::cout << "(" << x << "," << y << ")  " << "WxH=" << width << "x" << height << "  e:" << experimentCount << std::endl;
  }
};

#endif