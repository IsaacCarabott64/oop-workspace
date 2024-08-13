#include <iostream>

extern bool equalsArray(int*, int*, int);

using namespace std;

int main(){


  int nums1[] = {1, 2, 3, 0, -5};
  int nums2[] = {1, 2, 3, 3, -5};
  int nums_length = 5;
  cout << equalsArray(nums1, nums2, nums_length) << endl;


  return 0;
}