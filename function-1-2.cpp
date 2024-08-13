#include "Person.h"

PersonList createPersonList(int n){
  PersonList plist;
  plist.people = new Person[n];
  for (int i = 0; i < n; i++){
    plist.people[i].name = "Jane Doe";
    plist.people[i].age = 1;
  }
  plist.numPeople = n;
  return plist;
}