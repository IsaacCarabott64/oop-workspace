#include "Orchestra.h"
#include <string>

Orchestra::Orchestra(){
  max_size = 0;
  capacity = 0;
  members = new Musician[max_size];
};
Orchestra::Orchestra(int size){
  max_size = size;
  capacity = 0;
  members = new Musician[max_size];
};

int Orchestra::get_current_number_of_members(){
  return capacity;
}; 
bool Orchestra::has_instrument(std::string instrument){
  for (int i = 0; i < capacity; i++){
    if (members[i].get_instrument() == instrument){
      return true;
    }
  }
  return false;
};
Musician* Orchestra::get_members(){
  Musician* current_members = new Musician[capacity];
  for (int i = 0; i < capacity; i++){
    current_members[i] = members[i];
  }
  return current_members;
};
bool Orchestra::add_musician(Musician new_musician){
  if (capacity == max_size){
    return false;
  } else {
    members[capacity] = new_musician;
    capacity++;
    return true;
  }
};

Orchestra::~Orchestra(){
  delete[] members;
};