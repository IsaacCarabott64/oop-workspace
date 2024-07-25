#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double weighted_average(int[], int);

int main() {
  int nums[] = {1, 2, 1, 4, 1, 3};
  int nums_length = 6;

  //weighted_average(nums, nums_length);

  std::cout << "Weighted value of array is " << weighted_average(nums, nums_length) << std::endl;

  return 0;
}