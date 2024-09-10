#include "Course.h"
#include <iostream>

Course::Course(): Course("null", 0){};
Course::Course(std::string name, int id): name(name),id(id),size(1000),capacity(0){
  people = new Person*[100];
};

void Course::set_size(int size){ this->size = size; }; 
int Course::get_size(){ return size; };
void Course::set_capacity(int capacity){ this->capacity = capacity; };
int Course::get_capacity(){ return capacity; };

void Course::set_name(std::string name){ this->name = name; };
std::string Course::get_name(){ return name; };

void Course::set_id(int id){ this->id = id; };
int Course::get_id(){ return id; };

Person** Course::get_people(){ return people; };
void Course::addPerson(Person* p){
  if (capacity < size){
    people[capacity] = p;
    capacity++;
  }
};

void Course::print(){
  std::cout << "Course name: '" << name << "' ID: " << id << std::endl;
};
