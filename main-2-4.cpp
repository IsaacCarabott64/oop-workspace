#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int is_ascending(int[], int);

int main() {
  int nums[] = {3, 24, 5};
  int nums_length = 3;

  if (is_ascending(nums, nums_length)) {
    std::cout << "Array is ascending" << std::endl;
  } else {
    std::cout << "Array is not ascending" << std::endl;
  }

  return 0;
}