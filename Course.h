#ifndef COURSE
#define COURSE

#include <string>
#include "Person.h"

class Course{
  private:
    std::string name;
    int id;
    Person** people;
    int size;
    int capacity;
  public:
    Course();
    Course(std::string name, int id);
    
    void set_size(int size);
    int get_size();
    void set_capacity(int capacity);
    int get_capacity();
    
    void set_name(std::string name);
    std::string get_name();
    void set_id(int id);
    int get_id();
    

    Person** get_people();
    void addPerson(Person* p);

    void print();
};

#endif