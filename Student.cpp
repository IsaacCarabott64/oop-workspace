#include "Student.h"
#include <iostream>

Student::Student(): Person(),id(0){};
Student::Student(std::string name, int id): Person(name),id(id){};

void Student::set_id(int id){ this->id = id; };
int Student::get_id(){ return id; };

void Student::print(){
  std::cout << "This is a student called '" << get_name() << "' with ID " << id << std::endl;
}