#include "Grade.h"
#include <iostream>

Grade::Grade(): Grade(0, 0, "null", 0){};
Grade::Grade(int student_id, int course_id, std::string assignment, int value): student_id(student_id),course_id(course_id),assignment(assignment),value(value){};

void Grade::set_assignment(std::string assignment){ this->assignment = assignment; };
std::string Grade::get_assignment(){ return assignment; };

void Grade::set_value(int value){ this->value = value; };
int Grade::get_value(){ return value; };

void Grade::print(){
  std::cout << "Grade for course " << course_id << " assignment '" << assignment << "' for student ID " << student_id << ", value: " << value << std::endl;
}