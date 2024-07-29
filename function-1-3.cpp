#include <iostream>

void count_digits(int array[4][4]) {
  int counts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  for (int r = 0; r < 4; r++) {
    for (int c = 0; c < 4; c++) {
      if (array[r][c] >= 0 && array[r][c] < 10) {
        counts[array[r][c]] += 1;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    std::cout << i << ":" << counts[i] << ";";
  }
  std::cout << std::endl;
}