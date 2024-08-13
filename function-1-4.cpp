#include "person.h"

PersonList shallowCopyPersonList(PersonList pl){
  PersonList copy_pl;
  copy_pl.numPeople = pl.numPeople;
  copy_pl.people = pl.people; 
  return copy_pl;
}