#include "person.h"

PersonList deepCopyPersonList(PersonList pl){
  PersonList copy_pl;
  copy_pl.numPeople = pl.numPeople;
  copy_pl.people = new Person[copy_pl.numPeople];
  for (int i = 0; i < copy_pl.numPeople; i++){
    copy_pl.people[i].name = pl.people[i].name;
    copy_pl.people[i].age = pl.people[i].age;
  }
  return copy_pl;
}