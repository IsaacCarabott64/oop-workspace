#include <iostream>
#include <stdlib.h>
#include "Helper.hpp"
#include "GridItem.hpp"

using namespace std;

int main(){

  pair p1 = {0, 0};
  pair p2 = {1, 2};

  cout << p1.first << " " << p1.second << endl;
  cout << p2.first << " " << p2.second << endl;

  cout << "Distance: " << Helper::manhattanDistance(p1, p2) << endl;


  int x = 1;
  int y = 1;

  int gridWidth = 4;
  int gridHeight = 3;

  GridItem g1(x, y, gridWidth, gridHeight);
  g1.print();





  

  return 0;
}