 #include <iostream>

 extern void printArray(double*, int);

 using namespace std;

 int main(){

  double nums[] = {1.1, 2.2, 3.14, 5.00};
  double nums_length = 4;
  printArray(nums, nums_length);
  

  return 0;
 }