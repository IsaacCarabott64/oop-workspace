#ifndef APPLIANCE
#define APPLIANCE


class Appliance {
  private:
    int powerRating;
    bool isOn;
  public:
    Appliance();
    Appliance(int powerRating);

    int get_powerRating();
    void set_powerRating(int pr);
    int get_isOn(){};
    void set_isOn(bool b){};

    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();

};

#endif