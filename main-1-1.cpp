#include <iostream>

using namespace std;

int main(){


  double num1 = 5.5;
  double* p_num1 = &num1; 
  cout << "num1: " << num1 << " stored at " << p_num1 << endl;
  
  char char1 = 'A';
  char* p_char1 = &char1;
  cout << "char1: " << char1 << " stored at " << (void*)p_char1 << endl;  



  return 0;
}