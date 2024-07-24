#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count_evens(int);

int main() {
  int num = 5;
  std::cout << "There are " << count_evens(num) << " even numbers between 1 and " << num << std::endl;

  return 0;
}