#include <iostream>
#include "student.h"


using namespace std;



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