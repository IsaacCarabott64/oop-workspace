#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void print_pass_fail(char);

int main() {
  char grades[] = {'A', 'B', 'C', 'D', 'E'};

  for (int i = 0; i < 5; i++){
    print_pass_fail(grades[i]);
  }
  return 0;
}