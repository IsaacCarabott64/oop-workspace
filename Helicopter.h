#ifndef HELICOPTER
#define HELICOPTER

#include "AirCraft.h"
#include <string>

using namespace std;

class Helicopter : public AirCraft{
  private:
    string name; // name of the helicopter
  public:
    Helicopter();
    Helicopter(int w, string n);     // creates a Helicopter with weight w and name n

    string get_name();
    void set_name(string new_n);

    void fly(int headwind, int minutes);
};

#endif