 #include <iostream>

 extern void changeValue(double*);

 using namespace std;

 int main(){


  double my_num = 2;
  double* p_my_num = &my_num;
  cout << my_num << endl;
  changeValue(p_my_num);
  cout << my_num << endl;



  return 0;
 }