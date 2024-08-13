#include <iostream>
#include "person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main(){


  int num = 5;
  PersonList testplist = createPersonList(num);
  cout << "Created a PersonList of size " << num << endl; 
  for (int i = 0; i < num; i++){
    cout << testplist.people[i].name << " who is " << testplist.people[i].age << " years old" << endl;
  }




  return 0;
}