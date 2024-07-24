#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int num_count(int[], int, int);
int main() {
  int nums[] = {1, 3, 2};
  int nums_count = 3;
  int to_match = 1;

  std::cout << to_match << " appears " << num_count(nums, nums_count, to_match)
            << " time/s" << std::endl;

  return 0;
}