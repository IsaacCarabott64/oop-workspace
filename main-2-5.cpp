#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int is_descending(int[], int);

int main() {
  int nums[] = {48, 24, 5};
  int nums_length = 3;

  if (is_descending(nums, nums_length)) {
    std::cout << "Array is descending" << std::endl;
  } else {
    std::cout << "Array is not descending" << std::endl;
  }

  return 0;
}