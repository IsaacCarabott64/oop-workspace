#include <iostream>

bool is_fanarray(int array[], int n) {
  if (n < 1) {
    return false;
  }

  bool is_array_a_fanarray;

  for (int i = 0; i < n; i++){
    std::cout << i << "   " << n-i << std::endl;
    ..if (array[i] != array[n-i])
  }

  return is_array_a_fanarray;
}

bool is_ascending(int array[], int n) {
  if (n < 0) {
    return false;
  }

  bool array_is_ascending = true;

  for (int i = 1; i < n; i++) {
    if (array[i] < array[i - 1]) {
      array_is_ascending = false;
      std::cout << i << " " << array[i] << " " << array[i - 1] << std::endl;
    }
  }
  return array_is_ascending;
}