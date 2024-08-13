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
  string get_name() { return name; }  // behaviour
  int get_ID() { return ID; }
  double get_grade() { return grade; }
  void set_name(string new_name) { name = new_name; }
  void set_ID(int new_ID) { ID = new_ID; }
  void set_grade(double new_grade) { grade = new_grade; }
  void print(){
   cout << "Student: " << name << " ID: " << ID << " Grade: " << grade << endl;
 }

};

class Classroom{
  public:
    Student students[3];
    Classroom(Student s1, Student s2, Student s3){
    students[0] = s1;
    students[1] = s2;
    students[2] = s3;
  }
}

int main(){
  
  Student a1[3] = { {"Isaac", 1926322, 95.5}, {"Rahul", 190203, 80.0}, {"Sukhraj", 123456, 49.95}};

  for (int i = 0; i < 3; i++){
    a1[i].print();
    //cout << a3[i].get_ID() << endl;
  }



  // classroom[0] = Student("Isaac", 1926322, 95.5);
  // classroom[1] = Student("Rahul", 190203, 80.0);
  // classroom[2] = Student("Sukhraj", 123456, 49.95);



  return 0;
}