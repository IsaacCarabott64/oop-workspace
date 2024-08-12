#ifndef SERVER_H
#define SERVER_H

#include <iostream>

using namespace std;

class Server{
  public:
    void login(string password);
    void printLoginStatus();
    bool loginStatus();
  private:
    bool isLoggedIn = false;
    std::string password = "password123";
};

#endif