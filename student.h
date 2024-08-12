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
};