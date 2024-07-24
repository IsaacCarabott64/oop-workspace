#include <iostream>

int main(){

    int age, age_in_10;
    std::cout << "Enter your age: ";
    std::cin >> age;
    age_in_10 = age + 10;
    std::cout << "You will be ";
    std::cout << age_in_10;
    std::cout << " in 10 years";
    std::cout << std::endl;
    return 0;
}