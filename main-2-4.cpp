#include <iostream>

extern int sum_min_max(int[], int);

int main(){
  
  int nums[] = {5, 2, 10, 13};
  int nums_length = 4;

  std::cout << "Sum of max and min is " << sum_min_max(nums, nums_length) << std::endl;




  return 0;
}