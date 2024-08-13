#include <iostream>

extern void hexDigits(int*, int); 

using namespace std;

int main(){


  int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  int numslength = 16;
  hexDigits(nums, numslength);
  


  return 0;
}