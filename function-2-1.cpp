#include <cmath>
#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
  bool started = false;
  int working_num = stoi(decimal_number);
  for (int i = 31; i >= 0; i--) { // iterate through the first 32 powers of 2
    int pow2 = pow(2, i);
    int r = working_num % pow2;
    if (r < working_num) {
      started = true;
      std::cout << 1;
      working_num -= pow2;
    } else if (started) { // only print 0s if they aren't leading
      std::cout << 0;
    }
  }

  std::cout << std::endl;
}