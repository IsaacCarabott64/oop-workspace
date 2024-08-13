#include <iostream>

int* readNumbers(){
  int* arr = new int[10];
  for (int i = 0; i < 10; i++){
    std::cin >> arr[i];
  }

  return arr;
}