#include <iostream>
#include "workshop.h"


using namespace std;

int main(){


  double num2 = 5;
  double* p_num2 = &num2;
  changeValue(p_num2);
  
  double nums3[] = {1.1, 2.2, 3.14, 5.00};
  int nums3_length = 4;

  double nums4[] = {1.1, 2.2, 3.14, 5.00};
  int nums4_length = 4;



  int nums7_length = 3;
  double val = 3.14;
  double* nums7 = dynamicArray(nums7_length, val);
  delete[] nums7;

  int nums8_length = 9;
  double* nums8 = dynamicArray(nums8_length, 3.14);
  delete[] nums8;


return 0;
}