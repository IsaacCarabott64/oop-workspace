#include <iostream>
#include "Person.h"
#include "Instructor.h"
#include "Student.h"
#include "Grade.h"
#include "Course.h"
#include "Gradebook.h"
#include "University.h"

using namespace std;

int main(){
  
  University u("University of Adelaide", "Adelaide");
  u.print();

  cout << "\nAdding courses" << endl;
  u.addCourse(1102, "Object Oriented Programming");
  u.addCourse(1104, "Grand Challenges in Computer Science");
  u.addCourse(1106, "Introduction to Software Engineering");
  u.addCourse(1004, "Maths for Data Science");

  cout << "Printing courses" << endl;
  Course* uc = u.get_courses();
  for (int i = 0; i < u.get_capacity(); i++){
    uc[i].print();
  }

  cout << "\nAdding people" << endl;
  Person* me = new Student("Isaac", 1926322);
  uc[0].addPerson(me);

  cout << "Printing People" << endl;
  Person** up = uc[0].get_people();
  for (int i = 0; i < uc[0].get_capacity(); i++){
    up[i]->print();
  }

  cout << "\nAdding grades" << endl;
  Gradebook ugb = u.get_gradebook();
  ugb.addGrade(1926322, 1102, "Workshop 7", 99);
  ugb.addGrade(1926322, 1102, "Practical Exam 3", 100);
  ugb.addGrade(1926322, 1102, "Project", 87);
  Grade* ugbg = ugb.get_grades();
  for (int i = 0; i < ugb.get_capacity(); i++){
    ugbg[i].print();
  }

  return 0;
}