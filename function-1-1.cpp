#include "person.h"

Person* createPersonArray(int n){
  Person* person_array = new Person[n];
  for (int i = 0; i < n; i++){
    person_array[i].name = "John Doe";
    person_array[i].age = 0;
  }
  return person_array;
}