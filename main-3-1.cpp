#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern bool is_fanarray(int[], int);

int main() {
  int nums[] = {1, 2, 3, 7, 2, 1};
  int nums_length = 5;

  if (is_fanarray(nums, nums_length)) {
    std::cout << "Array is a fanarray" << std::endl;
  } else {
    std::cout << "Array is not a fanarray" << std::endl;
  }

  return 0;
}