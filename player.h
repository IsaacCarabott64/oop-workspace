#ifndef PLAYER
#define PLAYER

#include <string>

using namespace std;

class Player {
  public:
    string name;
    int health;
    int damage;
    Player(string name, int health, int damage);
    void attack(Player* opponent, int damage);
    void takeDamage(int damage);
    string getName();
    void setName(string new_name);
    int getHealth();
    void setHealth(int new_health);
    int getDamage();
    void setDamage(int new_damage);
};

#endif