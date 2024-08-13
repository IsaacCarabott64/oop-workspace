#include <iostream>

extern int* readNumbers();

using namespace std;

int main(){


  cout << "Enter some numbers: " << endl;
  int* nums = readNumbers();

  for (int i = 0; i < 10; i++){
    cout << nums[i] << endl;
  }



  return 0;
}