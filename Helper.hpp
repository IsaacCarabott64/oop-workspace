#ifndef HELPER
#define HELPER

#include <stdlib.h>
#include <cmath>

class Helper {
  public:
    static int manhattanDistance(std::pair<int, int> item1, std::pair<int, int> item2){
      return abs(item2.first - item1.first) + abs(item1.second) + abs(item2.second);
    }
};

#endif