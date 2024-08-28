#include "player.h"
#include <iostream>
#include <string>

Player::Player(std::string name, int health, int damage){
  this->name = name;
  this->health = health;
  this->damage = damage;
;}

void Player::attack(Player* opponent, int damage){
  opponent->takeDamage(damage);
};
void Player::takeDamage(int damage){
  this->health -= damage;
  std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
};
std::string Player::getName(){
  return name;
};
void Player::setName(std::string new_name){
  this->name = new_name;
};
int Player::getHealth(){
  return health;
};
void Player::setHealth(int new_health){
  this->health = new_health;
};
int Player::getDamage(){
  return damage;
;}

void Player::setDamage(int new_damage){
  this->damage = new_damage;
};