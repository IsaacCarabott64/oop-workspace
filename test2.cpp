#include <iostream>

using namespace std;

class Student {
 private:
  string name;
  int ID;
  double grade;

 public:
  Student() {
    name = "Default";
    ID = 0;
    grade = 0.0;
  }
  Student(string s_name, int s_ID, double s_grade) {
    name = s_name;
    ID = s_ID;
    grade = s_grade;
    // cout << "A student object (" << ID << ") was created " << endl;
  }
  ~Student() {
    // cout << "A student object (" << ID << ") was deleted" << endl;
  }
  string get_name() { return name; }  // behaviour
  int get_ID() { return ID; }
  double get_grade() { return grade; }
  void set_name(string new_name) { name = new_name; }
  void set_ID(int new_ID) { ID = new_ID; }
  void set_grade(double new_grade) {
    this->grade = new_grade;
    cout << "New grade is: " << this->grade << endl;
  }
  void print() {
    cout << "Student: " << name << " ID: " << ID << " Grade: " << grade << endl;
  }
};

class Classroom {
 private:
  int class_size;
  Student* students;

 public:
  Classroom() {
    class_size = 0;
    students = new Student[class_size];
  }
  Classroom(int a_class_size) {
    class_size = a_class_size;
    students = new Student[class_size];
  }
  ~Classroom() { delete[] students; }
  void set_student(int index, Student student_to_add) {
    students[index] = student_to_add;
  }
  void print_students() {
    for (int i = 0; i < class_size; i++) {
      students[i].print();
    }
  }
  Student* find_student(int ID) {
    for (int i = 0; i < class_size; i++) {
      if (students[i].get_ID() == ID) {
        return &students[i];
      }
    }
    return NULL;
  }
  void update_student_grade(int ID, double new_grade) {
    find_student(ID)->set_grade(new_grade);
  }
};

int main() {
  Classroom my_class(3);

  Student s1("Isaac", 1926322, 99.9);
  Student s2("Rahul", 190203, 80.0);
  Student s3("Hayden", 123456, 50.0);
  my_class.set_student(0, s1);
  my_class.set_student(1, s2);
  my_class.set_student(2, s3);
  my_class.print_students();

  my_class.find_student(190203)->print();
  cout << "Changing grade from 80 to 1" << endl;
  my_class.update_student_grade(190203, 1.00);
  cout << "Student " << 190203 << "'s grade is " << my_class.find_student(190203)->get_grade() << endl;

  return 0;
}