#include <iostream>


void print_summed(int array1[3][3],int array2[3][3]){

  for (int r = 0; r < 3; r++){
    for (int c = 0; c < 3; c++){
      std::cout << array1[r][c] + array2[r][c] << " ";
    }
    std::cout << std::endl;
  }

}