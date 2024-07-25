#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int is_ascending(int[], int);

int main() {
  //int nums[] = {-1, -2, -3, -4, -5, -6, -7, -8};
  int nums[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int nums_length = 8;

  if (is_ascending(nums, nums_length)) {
    std::cout << "Array is ascending" << std::endl;
  } else {
    std::cout << "Array is not ascending" << std::endl;
  }

  return 0;
}