#ifndef WIZARD
#define WIZARD

#include <string>
#include "player.h"

class Wizard : public Player {
  public:
    int mana;
    Wizard(string name, int health, int damage, int mana);
    int getMana();
    void setMana(int new_mana);
    void castSpell(Player* opponent);



};











#endif