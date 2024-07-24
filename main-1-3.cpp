#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int num_count(int[], int, int);
int main() {
  int nums[] = {1, 3, 2, 4, 1, 5, 1, 6, 7, 1, 2};
  int nums_count = 11;
  int to_match = 1;

  std::cout << to_match << " appears " << num_count(nums, nums_count, to_match)
            << " time/s" << std::endl;

  return 0;
}