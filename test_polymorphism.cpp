#include <iostream>

using namespace std;

class A {
  private:
    int value;
  public:
    A(){value = 1;}
    A(int val){this->value = 1;}
    void print(){
      cout << "Printing value once: " << value << endl;
    }
    void print(int n){
      for (int i = 0; i < n; i++){
        cout << i << " time printing value: " << value << endl;
      }
    }
};

int main(){


  A a;

  a.print(3);






  return 0;
}