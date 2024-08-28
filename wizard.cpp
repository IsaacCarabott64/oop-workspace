#include "wizard.h"
#include <iostream>
#include <string>

Wizard::Wizard(std::string name, int health, int damage, int mana): Player(name, health, damage){
  this->mana = mana;
  this->damage = mana;
};
int Wizard::getMana(){
  return mana;
};
void Wizard::setMana(int new_mana){
  this->mana = new_mana;
};
void Wizard::castSpell(Player* opponent){
  std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
  attack(opponent, mana);
}