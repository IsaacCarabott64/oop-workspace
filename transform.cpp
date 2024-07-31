#include <iostream>
#include <cmath>

int main() {

  int num10 = 7;

  double largest_power_of_2 = 0;

  while (pow(2, largest_power_of_2) < num10){
    largest_power_of_2++;
  }

  for (int i = largest_power_of_2; i >= 0; i--) {
    //std::cout << i << " " << pow(2, i) << std::endl;
    ;
  }
  for (int i = largest_power_of_2; i >= 0; i--) {
    if (pow(2, i) <= num10) {
      std::cout << 1;
      num10 -= pow(2, i);
    } else if (i != largest_power_of_2){
      std::cout << 0;
    }
  }

  std::cout << std::endl;


}