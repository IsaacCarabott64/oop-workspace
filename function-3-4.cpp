#include <iostream>
void print_pass_fail(char grade){
  //std::cout << grade << " ";
  switch (grade){
    case 'A':
    case 'B':
    case 'C':
      std::cout << "Pass" << std::endl;
      break;
    case 'D':
    case 'E':
      std::cout << "Fail" << std::endl;
  }
}