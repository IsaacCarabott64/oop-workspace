#include <iostream>
#include "person.h"

using namespace std;

extern Person* createPersonArray(int);

int main(){


  int num = 3;
  Person* parray = createPersonArray(num);

  for (int i = 0; i < num; i++){
    cout << parray[i].name << " is " << parray[i].age << " years old" << endl;
  }



  return 0;
}