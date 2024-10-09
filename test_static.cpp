#include <iostream>

using namespace std;

class Student{
  private:
    int id;
    static int count;
  public:
    Student(){
      id = Student::count++;
    }
    int get_id(){ return id; }
    static int get_count(){ return count; }
};

int Student::count = 1;

int main(){

  cout << Student::get_count() << endl;

}