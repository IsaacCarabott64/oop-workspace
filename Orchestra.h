#ifndef ORCHESTRA
#define ORCHESTRA

#include "Musician.h"

class Orchestra {
  private:
    int max_size;
    int capacity;
    Musician* members;
  
  public:
    Orchestra();
    Orchestra(int size);
  
    int get_current_number_of_members(); 
  
    bool has_instrument(std::string instrument); 
  
    Musician *get_members();
    bool add_musician(Musician new_musician);
  
    ~Orchestra();
};

#endif