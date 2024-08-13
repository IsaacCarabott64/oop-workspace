#include <iostream>

extern int secondSmallestSum(int*, int);

using namespace std;

int main(){

  int nums[] = {1, 2, 3, 4};
  int numslength = 4;
  cout << secondSmallestSum(nums, numslength) << endl;


  return 0;
}