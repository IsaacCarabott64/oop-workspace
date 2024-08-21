#ifndef CLINIC
#define CLINIC
#include <string>
#include "Cage.h"

class Clinic{
    private:
        std::string name;
        int max_size;
        int capacity;
        Cage* cages = new Cage[max_size];
    public:
        Clinic();
        Clinic(std::string name, int max_size);

        int getNumber_of_cages();
        std::string getName();
        Cage * getCages();
        bool addCage(Cage new_cage);
        void print();

        ~Clinic();
};
#endif