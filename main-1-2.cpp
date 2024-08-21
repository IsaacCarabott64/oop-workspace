#include <iostream>
#include "Clinic.h"

using namespace std;

int main(){

    Cage a("Aardvark", 100);
    a.print();
    Cage b("Bird", 200);
    b.print();
    Cage c("Cow", 300);
    c.print();
    Cage d("Dinosaur", 400);
    d.print();
    Cage e("Emu", 500);
    e.print();
    
    Clinic my_clinic("Isaac's clinic", 4);

    cout << "Clinic name " << my_clinic.getName() << " is currently holding: " << my_clinic.getNumber_of_cages() << endl;

    my_clinic.print();
    my_clinic.addCage(a);
    my_clinic.print();
    
    my_clinic.addCage(b);
    my_clinic.addCage(c);
    my_clinic.addCage(d);
    my_clinic.addCage(e);

    my_clinic.print();

    cout << "Printing cages." << endl;
    
    Cage* some_cages = my_clinic.getCages();
    
    for (int i = 0; i < my_clinic.getNumber_of_cages(); i++){
        some_cages[i].print();
    }









    return 0;
}