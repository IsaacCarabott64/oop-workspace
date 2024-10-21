#ifndef GAMEENTITY
#define GAMEENTITY

#include <tuple>

enum GameEntityType{
  ExplosionType,
  MineType,
  NoneType,
  ShipType
};

class GameEntity{
  private:
    std::tuple<int, int> position;
    GameEntityType type;
  public:
    GameEntity(): GameEntity(0, 0, 'N'){}
    GameEntity(int x, int y, char type){
      position = std::tuple<int,int> {x,y};
      switch (type){
        case 'e':
        case 'E':
          this->type = ExplosionType;
          break;
        case 'm':
        case 'M':
          this->type = MineType;
          break;
        case 'n':
        case 'N':
          this->type = NoneType;
          break;
        case 's':
        case 'S':
          this->type = ShipType;
          break;
      }
    }

    std::tuple<int, int> getPos(){
      return position;
    }

    GameEntityType getType(){
      return type;
    }

};

#endif