#include <iostream>
#include "workshop.h"


using namespace std;

int main(){


  cout << "Part 2" << endl;
  double num2 = 5;
  double* p_num2 = &num2;
  cout << "num 2: " << num2 << endl;
  changeValue(p_num2);
  cout << "num 2: " << num2 << endl;

  cout << "Part 3" << endl;
  double nums3[] = {1.1, 2.2, 3.14, 5.00};
  int nums3_length = 4;
  printArray(nums3, nums3_length);

  cout << "Part 4" << endl;
  double nums4[] = {1.1, 2.2, 3.14, 5.00};
  int nums4_length = 4;
  cout << arrayMax(nums4, nums4_length) << endl;


  cout << "Part 7" << endl;
  int nums7_length = 3;
  double val = 3.14;
  double* nums7 = dynamicArray(nums7_length, val);
  cout << arrayMax(nums7, nums7_length) << endl;
  delete[] nums7;

  cout << "Part 8" << endl;
  int nums8_length = 9;
  double* nums8 = dynamicArray(nums8_length, 3.14);
  printArray(nums8, nums8_length);
  cout << "Max: " << arrayMax(nums8, nums8_length) << endl;
  delete[] nums8;


return 0;
}