#ifndef UTILS
#define UTILS

#include <tuple>
#include <cstdlib>
#include <cmath>

class Utils{
  public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
      int x = rand() % gridWidth;
      int y = rand() % gridHeight;
      return std::tuple<int,int> {x,y};
    }
    static double calculateDistance(std::tuple<int,int> pos1, std::tuple<int,int> pos2){
      int x1 = std::get<0>(pos1);
      int x2 = std::get<0>(pos2);
      int y1 = std::get<1>(pos1);
      int y2 = std::get<1>(pos2);

      return sqrt( (x1-x2) *(x1-x2) + (y1-y2)*(y1-y2) );
    }
};

#endif