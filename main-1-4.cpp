#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sum_two_arrays(int[], int[], int);

int main() {
  int nums1[] = {1, 2, 3};
  int nums2[] = {4, 5, 6};
  int array_length = 3;

  std::cout << "Sum of the 2 arrays is " << sum_two_arrays(nums1, nums2, array_length) << std::endl;

  return 0;
}