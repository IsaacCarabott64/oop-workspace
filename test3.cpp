#include <iostream>
#include "server.h"

using namespace std;


int main(){

  Server s;
  string pword;
  cout << "Password: ";
  cin >> pword;
  s.login(pword);
  while (!s.loginStatus()){
    cout << "Wrong password, try again: ";
    cin >> pword;
    s.login(pword);
  }
  s.printLoginStatus();
  


  return 0;
}