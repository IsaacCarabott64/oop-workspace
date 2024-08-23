#include <iostream>


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