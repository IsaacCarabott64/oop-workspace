#include <iostream>

void print_scaled(int array[3][3],int scale){

  for (int r = 0; r < 3; r++){
    for (int c = 0; c < 3; c++){
      std::cout << array[r][c] * scale << " ";
    }
    std::cout << std::endl;
  }
}