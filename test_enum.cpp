#include <iostream>

using namespace std;

enum CharacterType{
  WizardType,
  WarriorType,
};

string characterTypeToString(CharacterType ct){
  switch (ct){
    case CharacterType::WizardType:
      return "Wizard";
    case CharacterType::WarriorType:
      return "Warrior";
    default:
      return "Invalid";
  }
}

class Wizard{
  public:
  CharacterType getType(){
    return CharacterType::WizardType;
  }
};

class Warrior{
  public:
  CharacterType getType(){
    return CharacterType::WarriorType;
  }
};

int main(){

  Wizard w;
  Warrior wa;

  cout << characterTypeToString(w.getType()) << endl;
  cout << characterTypeToString(wa.getType()) << endl;
  
  return 0;
}