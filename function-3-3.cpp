#include <iostream>

double weighted_average(int array[], int n) {
  if (n < 1) {
    return 0.0;
  }

  double d_n = (double)n;

  double res = 0;

  for (int i = 0; i < n; i++) {
    int num_count = 0;
    for (int j = 0; j < n; j++) {
      if (array[i] == array[j]) {
        num_count++;
        //std::cout << "i" << i << " j" << j << std::endl;
      }
    }
    res += (array[i] * num_count) / d_n;
    //std::cout << array[i] << " " << num_count << " " << res << std::endl;
  }
  //std::cout << "RESULT " << res << " END" << std::endl;
  return res;
}