#include "warrior.h"
#include <iostream>


Warrior::Warrior(std::string name, int health, int damage, std::string weapon): Player(name, health, damage){
  this->weapon = weapon;
};
std::string Warrior::getWeapon(){
  return weapon;
};
void Warrior::setWeapon(std::string new_weapon){
  this->weapon = weapon;
};
void Warrior::swingWeapon(Player* opponent){
  std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
  attack(opponent, damage);
}
