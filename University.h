#ifndef UNIVERSITY
#define UNIVERSTIY

#include "Course.h"
#include "Gradebook.h"

class University{
  private:
    std::string name;
    std::string location;
    int size;
    int capacity;
    Course* courses;
    Gradebook gradebook;

  public:
    University();
    University(std::string name, std::string location);

    void set_name(std::string name);
    std::string get_name();
    void set_location(std::string location);
    std::string get_location();

    void set_size(int size);
    int get_size();
    void set_capacity(int capacity);
    int get_capacity();

    Gradebook get_gradebook();
    Course* get_courses();
    void addCourse(int id, std::string name);

    void print();

};

#endif