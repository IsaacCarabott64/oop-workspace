#include <iostream>

extern int sum_if_palindrome(int[], int);

int main(){

  int nums[] = {2, 1, 1, 2};
  int nums_length = 4;

  std::cout << sum_if_palindrome(nums, nums_length) << std::endl;






  return 0;
}