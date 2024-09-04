#ifndef AIRCRAFT
#define AIRCRAFT

class AirCraft{
  private:
    int weight;                  // the weight of AirCraft
    float fuel;                  // fuel percentage, initially 100%
    int numberOfFlights;         // initially 0
  public:
    AirCraft();
    AirCraft(int w);             // creates an Aircraft with weight w

    int get_weight();
    void set_weight(int w);
    float get_fuel();
    void set_fuel(float f);
    int get_numberOfFlights();
    void set_numberOfFlights(int num);

    void refuel();               // Resets fuel back to 100%
    virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
};

#endif