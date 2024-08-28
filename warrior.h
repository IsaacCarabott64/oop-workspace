#ifndef WARRIOR
#define WARRIOR

#include <string>
#include "player.h"

class Warrior : public Player {
  public:
    string weapon;
    Warrior(string name, int health, int damage, string weapon);
    string getWeapon();
    void setWeapon(string new_weapon);
    void swingWeapon(Player* opponent);


};











#endif