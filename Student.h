#ifndef STUDENT
#define STUDENT

#include "Person.h"

class Student : public Person{
  private:
    int id;
  public:
    Student();
    Student(std::string name, int id);
    void set_id(int id);
    int get_id();

    void print();

};

#endif