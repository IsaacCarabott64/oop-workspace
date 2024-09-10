#include "Gradebook.h"

#include <iostream>

Gradebook::Gradebook(): size(10000),capacity(0){
  grades = new Grade[size];
};

void Gradebook::set_size(int size){ this->size = size; }; 
int Gradebook::get_size(){ return size; };
void Gradebook::set_capacity(int capacity){ this->capacity = capacity; };
int Gradebook::get_capacity(){ return capacity; };


Grade* Gradebook::get_grades(){ return grades; };

void Gradebook::addGrade(int student_id, int course_id, std::string assignment, int value){
  if (capacity < size){
    grades[capacity] = Grade(student_id, course_id, assignment, value);
    capacity++;
  }
}
