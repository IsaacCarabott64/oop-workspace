#include <iostream>
#include <stdlib.h>
#include "Helper.hpp"
#include "GridItem.hpp"
#include "Scientist.hpp"
#include "Interactable.hpp"
#include "Goal.hpp"
#include "Experiment.hpp"

using namespace std;

int main(){
  int gridWidth = 4;
  int gridHeight = 3;

  Scientist s(gridWidth, gridHeight);

  s.print();
  cout << s.move(1, 2) << endl;
  s.print();
  cout << s.move(5, 5) << endl;
  s.print();

  



  

  return 0;
}