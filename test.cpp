#include <iostream>

using namespace std;

class Student {
 private:
  string name;  // state variables
  int ID;
  double grade;

 public:
  Student(string s_name, int s_ID, double s_grade) {
    name = s_name;  // constructors
    ID = s_ID;
    grade = s_grade;
  }
  string get_name() { return name; }  // behaviour
  int get_ID() { return ID; }
  double get_grade() { return grade; }
  void set_name(string new_name) { name = new_name; }
  void set_ID(int new_ID) { ID = new_ID; }
  void set_grade(double new_grade) { grade = new_grade; }
  void print(){
    cout << "Student: " << name << " ID: " << ID << " Grade: " << grade << endl;
  }
  Student* evil(){
    return new Student("Evil "+name, -ID, 100.00-grade);
  }
};

int main() {


  Student *s1 = new Student("Isaac", 1926322, 95.5);
  s1->print();
  Student *s2 = s1->evil();
  s2->print();

  Student s1new("Rahul", 190203, 80.00);
  Student *p_s1new = &s1new;
  s1new.print();
  p_s1new->print();

  Student a1[10]; // array of 10 students 
  Student* a2[10]; // pointer to uninitialised array
  Student* a3 = new Student[10]; // a pointer to an array of 10 students

  for (int i = 0; i < 10; i++){
    cout << a3[i].get_ID() << endl;
  }


  return 0;
}
