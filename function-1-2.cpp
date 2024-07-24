#include <iostream>

double array_mean(int array[], int n) {
  if (n < 1) {
    return 0.0;
  }

  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += (double)array[i];
    // std::cout << i << " " << array[i] << " " << sum << std::endl;
  }
  double mean = (double)sum / n;
  // std::cout << "mean: " << mean;

  return mean;
}