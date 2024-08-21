#include <iostream>
#include "Cage.h"

using namespace  std;

int main(){


    Cage c;

    c.print();

    cout << c.getIDnum() << "  " << c.getName() << endl;

    c = Cage("dog", 123);

    c.print();











    return 0;
}