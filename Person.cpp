#include "Person.h"
#include <iostream>

Person::Person(): Person("null"){};
Person::Person(std::string name): name(name){};

void Person::set_name(std::string name){ this->name = name; };
std::string Person::get_name(){ return name; };

void Person::print(){
  std::cout << "This is a person called '" << name << "'" << std::endl;
}