#include <iostream>

bool is_ascending(int array[], int n) {
  //std::cout << "Array is {";
  for (int i = 0; i < n; i++) {
    //std::cout << array[i];
    if (i + 1 < n) {
      //std::cout << ", ";
    }
  }
  //std::cout << "}" << std::endl;

  if (n < 0) {
    return false;
  }

  bool array_is_ascending = true;

  for (int i = 1; i < n; i++) {
    if (!(array[i] >= array[i - 1])) {
      array_is_ascending = false;
      //std::cout << "i" << i << " a[i-1]" << array[i - 1] << " a[i]" << array[i] << " comp" << !(array[i] >= array[i - 1]) << " asc" << array_is_ascending << std::endl;
      break;
    }
  }

  if (array_is_ascending) {
    //std::cout << "Array is ascending" << std::endl;
  } else {
    //std::cout << "Array is not ascending" << std::endl;

  }

  return array_is_ascending;

}