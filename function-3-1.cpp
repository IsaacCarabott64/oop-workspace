#include <iostream>

bool equalsArray(int* numbers1, int* numbers2, int length){
  bool is_equal = true;

  for (int i = 0; i < length; i++){
    if (numbers1[i] != numbers2[i]){
      is_equal = false;
    }
  }
  return is_equal;
}