#include <iostream>

using namespace std;

class Student {
 public:
  string name;
  int ID;
  double grade;
  Student(string s_name, int s_ID, double s_grade) {
    name = s_name;
    ID = s_ID;
    grade = s_grade;
  }
};

class Classroom{
  public:
  
}


int main(){
  
  Student* classroom[3];
  classroom[0] = new Student("Isaac", 1926322, 95.5);
  classroom[1] = new Student("Rahul", 190203, 80.0);
  classroom[2] = new Student("Sukhraj", 123456, 49.95);



  return 0;
}