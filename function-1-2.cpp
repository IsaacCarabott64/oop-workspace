#include "person.h"

PersonList createPersonList(int n){
  PersonList plist;
  plist.people = new Person[n];
  for (int i = 0; i < n; i++){
    plist.people[i].name = "John Doe";
    plist.people[i].age = 1;
  }
  plist.numPeople = n;
  return plist;
}