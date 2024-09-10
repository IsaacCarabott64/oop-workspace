#ifndef GRADEBOOK
#define GRADEBOOK

#include "Grade.h"

class Gradebook{
  private:
    Grade* grades;
    int size;
    int capacity;
  public:
    Gradebook();

    void set_size(int size);
    int get_size();
    void set_capacity(int capacity);
    int get_capacity();

    Grade* get_grades();
    void addGrade(int student_id, int course_id, std::string assignment, int value);

};

#endif