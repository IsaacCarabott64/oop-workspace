#include <iostream>

extern int count_digits(int[][4]);

int main() {
  //int nums[][4] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {8, 9, 0, 1}, {1, 1, 1, 2}};
  int nums[][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
  

  count_digits(nums);


  return 0;
}