#ifndef GRADE
#define GRADE

#include <string>

class Grade{
  private:
    int student_id;
    int course_id;
    std::string assignment;
    int value;
  public:
    Grade();
    Grade(int student_id, int course_id, std::string assignment, int value);
    void set_assignment(std::string assignment);
    std::string get_assignment();
    void set_value(int value);
    int get_value();

    void print();
};

#endif