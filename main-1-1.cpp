#include <iostream>

extern int* readNumbers();
extern void printNumbers(int*, int);

using namespace std;

int main(){


  cout << "Enter some numbers: " << endl;
  int* nums = readNumbers();
  printNumbers(nums, 10);
  


  return 0;
}