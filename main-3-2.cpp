#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int median_array(int[], int);

int main() {
  int nums[] = {3, 5, 2, 1, 4};
  int nums_length = 5;

  //median_array(nums, nums_length);

  std::cout << "Median value in array is " << median_array(nums, nums_length) << std::endl;

  return 0;
}