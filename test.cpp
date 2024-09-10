#include <iostream>

using namespace std;

class Printable {
  public:
    virtual void print() = 0;
};

struct Point {
  double x;
  double y;
};

class Shape : public Printable {
  protected:
    int n_sides;
    Point center;
  public:
    Shape(double x, double y){
      center.x = y;
      center.y = x;
      n_sides = 0;
    }
    Shape(): Shape(0, 0){}
    double get_sides(){ return n_sides; }
    virtual double get_area() = 0;
};

class Square : public Shape {
  private:
    double _side;
  public:
    Square(double cx, double cy, double side){
      center.x = cx;
      center.y = cy;
      _side = side;
      n_sides = 4;
    }
    Square(): Shape(),_side(0){}
    double get_area(){
      return _side * _side;
    }
    void print(){ cout << "This is a square with side length " << _side << endl; }
};

class Triangle : public Shape {
  private:
    double _base;
    double _height;
  public:
    Triangle(double cx, double cy, double b, double h){
      center.x = cx;
      center.y = cy;
      _base = b;
      _height = h;
      n_sides = 3; 
    }
    Triangle(): Shape(),_base(0),_height(0){}
    double get_area(){
      return 0.5 * _base * _height;
    }
    void print(){ cout << "This is a triangle with base " << _base << " and height " << _height << endl; }
};

class Circle : public Shape {
  private:
    double _radius;
  public:
    Circle(double cx, double cy, double radius){
      this->center.x = cx;
      this->center.y = cy;
      this->_radius = radius;
    }
    Circle(): Shape(),_radius(0){}
    double get_area(){
      return 3.14 * _radius * _radius;
    }
    void print(){ cout << "This is a circle with radius " << _radius << endl; }
};

void test(Shape* s){
  cout << "Shape (" << s->get_sides() << ") has area " << s->get_area() << endl;
}

class Person : public Printable{
  private:
    string _name;
  public:
    Person(string name): _name(name){}
    Person(): Person("null"){}
    string get_name(){ return _name; }
    void set_name(string name){this->_name = name;}
    void print(){ cout << "This is a person named " << _name << endl; }
};

void print_summary(Printable* pobj){
  pobj->print();
};

int main(){

  Shape* sq = new Square(0, 0, 3);
  Shape* tr = new Triangle(0, 0, 4, 8);
  Shape* ci = new Circle(0, 0, 2);

  test(sq);
  test(tr);
  test(ci);

  Person* pe = new Person("Isaac");

  print_summary(sq);
  print_summary(tr);
  print_summary(ci);
  print_summary(pe);

  return 0;
}