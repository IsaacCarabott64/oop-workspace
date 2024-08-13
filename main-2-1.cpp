#include <iostream>

extern void hexDigits(int*, int);
extern int* readNumbers();

using namespace std;

int main(){


  int* nums = readNumbers();
  int numslength = 10;
  hexDigits(nums, numslength);
  delete[] nums;
  


  return 0;
}