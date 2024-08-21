#include <string>
#include <iostream>
#include "Cage.h"

Cage::Cage(){
    name = "";
    ID = 0;
}

Cage::Cage(std::string newName, int newNumber){
    name = newName;
    ID = newNumber;
}

std::string Cage::getName(){
    return name;
}

int Cage::getIDnum(){
    return ID;
}

void Cage::print(){
    std::cout << "Cage ID: " << ID << "   Name: " << name << std::endl;
}

Cage::~Cage(){
    //std::cout << "Cage ID " << ID << " was destroyed." << std::endl;
}