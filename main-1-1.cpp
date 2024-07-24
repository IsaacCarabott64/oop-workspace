#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int array_sum(int[], int);

int main() {
  int nums[] = {1, 2, 3, 4, 5};

  std::cout << "Sum of array is " << array_sum(nums, 5) << std::endl;

  return 0;
}