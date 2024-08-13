#include <iostream>

extern bool equalsArray(int*, int*, int);
extern int* readNumbers();


using namespace std;

int main(){


  int* nums1 = readNumbers();
  int* nums2 = readNumbers();
  int nums_length = 10;

  if (equalsArray(nums1, nums2, nums_length)){
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }
  
  delete[] nums1;
  delete[] nums2;


  return 0;
}