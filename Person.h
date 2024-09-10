#ifndef PERSON
#define PERSON

#include <string>

class Person {
  private:
    std::string name;
  public:
    Person();
    Person(std::string name);
    void set_name(std::string new_name);
    std::string get_name();

    virtual void print();
};

#endif