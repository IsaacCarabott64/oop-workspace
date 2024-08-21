#include <iostream>
#include <string>
#include "Clinic.h"

Clinic::Clinic(){
    name = "";
    max_size = 0;
    cages = new Cage[0];
}

Clinic::Clinic(std::string name, int max_size){
    this->name = name;
    this->max_size = max_size;
    this->cages = new Cage[this->max_size];
}

int Clinic::getNumber_of_cages(){
    return capacity;
}

std::string Clinic::getName(){
    return name;
}

Cage* Clinic::getCages(){
    Cage* current_cages = new Cage[capacity];
    for (int i = 0; i < capacity; i++){
        current_cages[i] = cages[i];
    }
    return current_cages;
}

bool Clinic::addCage(Cage new_cage){
    if (capacity == max_size){
        return false;
    } else {
        cages[capacity] = new_cage;
        capacity++;
        return true;
    }
}

void Clinic::print(){
    std::cout << "Cage '" << name << "' is at capacity " << capacity << " out of " << max_size << std::endl;
    for (int i = 0; i < capacity; i++){
        cages[i].print();
    }
}

Clinic::~Clinic(){
    //std::cout << name << " clinic was destroyed" << std::endl;
}