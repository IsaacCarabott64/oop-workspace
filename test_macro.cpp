#include <iostream>

using namespace std;

#define enumToString(enumValue)\
  # enumValue

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

  cout << characterTypeToString(CharacterType::WizardType) << endl;
  cout << characterTypeToString(CharacterType::WarriorType) << endl;
  
  return 0;
}