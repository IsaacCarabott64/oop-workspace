#ifndef GAMEHEADER
#define GAMEHEADER

#include "Scientist.hpp"
#include "Experiment.hpp"
#include "Goal.hpp"

#include <stdlib.h>
#include <vector>


enum GameState{
  WIN,
  LOSE,
  PLAYING
}

class Game {
  private:
    Scientist* player;
    Goal* goal;
    Experiment** experiments;
  public:
    Game(int width, int height, std::vector<std::pair<int, int>> experimentCoordinates){
      player = Scientist(width, height);
      goal = Goal(width, height);

      experiments = new Experiment*[experimentCoordinates.size()];

      int ec_i = 0;
      for (int i = 0; i < experimentCoordinates.size(); i++){
        // check not 0,0 && not width-1,height-1
        if (!(experimentCoordinates[i].first == 0 && experimentCoordinates[i].last == 0) && !(experimentCoordinates[i].first == width-1 && experimentCoordinates[i].second == height-1))
          experiments[ec_i] = new Experiment(experimentCoordinates[i].first, experimentCoordinates[i].second, width, height);
      }

    }
}