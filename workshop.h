#include <iostream>

void changeValue(double* num){
  *num = 42;
}

void printArray(double* array, int n){
  for (int i = 0; i < n; i++){
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
}

double arrayMax(double* array, int n){
  double max = array[0];

  for (int i = 0; i < n; i++){
    if (array[i] > max){
      max = array[i];
    }
  }

  return max;
}

double* dynamicArray(int N, double M){
  double* array = (double*) malloc(sizeof(double) * N);
  for (int i = 0; i < N; i++){
    array[i] = M ; 
  }
  return array;
}

