#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int min_element(int[], int);

int main() {
  int nums[] = {6, 22, 3, 4, 5};

  std::cout << "Minimum element of array is " << min_element(nums, 5) << std::endl;

  return 0;
}