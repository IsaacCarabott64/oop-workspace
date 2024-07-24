#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int max_element(int[], int);

int main() {
  int nums[] = {16, 22, 3, 4, 5};

  std::cout << "Maximum element of array is " << max_element(nums, 5) << std::endl;

  return 0;
}