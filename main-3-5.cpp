#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double sum_even(double [], int n);

int main() {
  double nums[] = {1, 2, 1, 4, 1, 3};
  int nums_length = 6;

  std::cout << "Sum of the even elements in this array is " << sum_even(nums, nums_length) << std::endl;

  return 0;
}