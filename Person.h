#include <iostream>

#ifndef PERSON
#define PERSON

struct Person {
  std::string name;
  int age;
};

#endif


#ifndef PERSON_LIST
#define PERSON_LIST

struct PersonList{
  Person* people;
  int numPeople;
};

#endif