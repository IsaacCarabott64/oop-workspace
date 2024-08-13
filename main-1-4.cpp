#include <iostream>
#include "person.h"

using namespace std;

extern PersonList shallowCopyPersonList(PersonList);


int main(){

  int num = 5;
  PersonList originalpl;
  originalpl.numPeople = num;
  originalpl.people = new Person[num];
  for (int i = 0; i < num; i++){
    originalpl.people[i].name = "Jane Doe";
    originalpl.people[i].age = 1;
  }
  cout << "Original PL (size " << originalpl.numPeople << "):" << endl;
  for (int i = 0; i < originalpl.numPeople ; i++){
    cout << originalpl.people[i].name << " who is " << originalpl.people[i].age << " years old" << endl;
  }



  PersonList copypl = shallowCopyPersonList(originalpl);
  cout << "Copy PL (size " << copypl.numPeople << "):" << endl;
  for (int i = 0; i < copypl.numPeople; i++){
    cout << copypl.people[i].name << " who is " << copypl.people[i].age << " years old" << endl;
  }



  return 0;
}