#include "University.h"
#include <iostream>

University::University(): University("nothing", "nowhere"){};
University::University(std::string name, std::string location): name(name),location(location),size(1000),capacity(0){
  courses = new Course[size];
  gradebook = Gradebook();
};

void University::set_name(std::string name){ this->name = name; };
std::string University::get_name(){ return name; };
void University::set_location(std::string location){ this->location = location; };
std::string University::get_location(){ return location; };

void University::set_size(int size){ this->size = size; }; 
int University::get_size(){ return size; };
void University::set_capacity(int capacity){ this->capacity = capacity; };
int University::get_capacity(){ return capacity; };

Gradebook University::get_gradebook(){ return gradebook; };
Course* University::get_courses(){ return courses; };
void University::addCourse(int id, std::string name){
  if (capacity < size){
    courses[capacity] = Course(name, id);
    capacity++; 
  }
};

void University::print(){
  std::cout << name << " is a university located at " << location << std::endl;
};