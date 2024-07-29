#include <iostream>
#include <string>

extern int binary_to_int(int[], int);

int main(){

  int bin_nums[] = {1, 1, 0, 1};
  int bin_nums_length = 4;

  std::cout << binary_to_int(bin_nums, bin_nums_length) << std::endl;




  return 0;
}