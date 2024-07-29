#include <iostream>

extern int sum_diagonal(int[4][4]);

int main() {
  int n_rows = 4;
  int n_cols = 4;
  int nums[][4] = {
      {1, 2, 3, 4}, {4, 5, 6, 7}, {10, 20, 30, 40}, {100, 50, 25, 0}};

  for (int r = 0; r < n_rows; r++) {
    for (int c = 0; c < n_cols; c++) {
      std::cout << nums[r][c] << " ";
    }
    std::cout << std::endl;
  }

  std::cout << "Sum of array is " << sum_diagonal(nums) << std::endl;

  return 0;
}