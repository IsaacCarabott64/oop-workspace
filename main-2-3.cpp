#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void two_five_nine(int[], int);

int main() {
  int nums[] = {2, 5, 5, 9, 9, 9, 1, 3};
  two_five_nine(nums, 8);

  return 0;
}