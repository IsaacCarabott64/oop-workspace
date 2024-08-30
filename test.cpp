#include <iostream>
using namespace std;


class A{
  protected:
    int _s;
  public:
    A(int s): _s(s){}
    A(): A(-1){};
    void print(){
      cout << "S = " << this->_s << endl;
  }
  
};
class B : public A{
  private:
    double _k;
  public:
    B(int s, double k): A(s), _k(k){}
    B(): B(0, 0){}
    void print(){
      cout << "S = " << this->_s << " K = " << this->_k << endl;
    }
};

void test_print(A* a){
  a->print();
}



int main(){

  A a1(100);
  B b1(200, 0.5);

  a1.print();
  b1.print();

  test_print(&a1);
  test_print(&b1);




  //   // base class
  //   A* a1;
  //   // derived class
  //   B b1(500, 0.5);
  // 
  //   // a pointer to a base class can point to object of derived class
  //   a1 = &b1;

  return 0;
}