#include <cmath>
#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits) {
  int sum = 0;

  for (int i = number_of_digits - 1; i >= 0; i--) {
    if (binary_digits[number_of_digits - i - 1] == 1) {
      sum += pow(2, i);
    }
  }

  return sum;
}