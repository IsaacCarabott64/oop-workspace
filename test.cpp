#include <iostream>
using namespace std;


class A{
  protected:
    int _s;
  public:
    A(int s): _s(s){}
    A(): A(-1){};
    virtual void print(){
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

class C : public A{
  private:
    string _str;
  public:
    C(int s, string str): A(s),_str(str){}
    C(): C(0, "") {}
    void print(){
      cout << "S = " << this->_s << " str = " << this->_str << endl;
    }
};

void test_print(A* a){
  a->print();
};


int main(){

  A* a[3];

  a[0] = new A();
  a[1] = new B();
  a[2] = new C();

  for (int i = 0; i < 3; i++){
    test_print(a[i]);
  }



  //   // base class
  //   A* a1;
  //   // derived class
  //   B b1(500, 0.5);
  // 
  //   // a pointer to a base class can point to object of derived class
  //   a1 = &b1;

  return 0;
}