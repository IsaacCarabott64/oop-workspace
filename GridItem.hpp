#ifndef GRIDITEM
#define GRIDITEM

#include <iostream>
#include <stdlib.h>

using namespace std;

class GridItem{
  protected:
    int x;
    int y;
    int width;
    int height;
    static int activeGridItemCount;
  public:
    GridItem(int x, int y, int width, int height): x(x),y(y),width(width),height(height){
      activeGridItemCount++;
    }
    GridItem(): GridItem(0, 0, 0, 0){}
    void setCoordinates(int x, int y){ this->x = x; this->y = y; }
    std::pair<int,int> getCoordinates(){
      std::pair<int,int> p(x, y);
      return p;
    }
    int getGridWidth(){ return width; }
    int getGridHeight(){ return height; }
    int getActiveGridItemCount(){ return activeGridItemCount; }
    virtual ~GridItem(){ activeGridItemCount--;}
    virtual void print(){
      std::cout << "(" << x << "," << y << ")  " << "WxH=" << width << "x" << height << std::endl;
    }
};

int GridItem::activeGridItemCount = 0;

#endif