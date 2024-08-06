 #include <iostream>

 extern double arrayMax(double*, int);

 using namespace std;

 int main(){

  double nums[] = {1.1, 2.2, 3.14, 5.00};
  double nums_length = 4;
  cout << arrayMax(nums, nums_length) << endl;
  

  return 0;
 }