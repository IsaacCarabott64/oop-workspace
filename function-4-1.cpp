#include <iostream>
using namespace std;
int* readNumbers() {
  int* arr = new int[10];
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }

  return arr;
}

void printNumbers(int* numbers, int length) {
  for (int i = 0; i < length; i++) {
    cout << i << " " << numbers[i] << endl;
  }
}

int secondSmallestSum(int* numbers, int length){
  int sumsl = (length * (length+1)) / 2;
  int sums[sumsl];
  int count = 0;
  for (int i = 0; i < length; i++){
    int s = 0;
    for (int j=i; j < length; j++){
      s += numbers[j];
      sums[count] = s;
      count++;
    }
  }

  int smallest = numbers[0];
  for (int i = 0; i < sumsl; i++){
    if (smallest > sums[i]){
      smallest = sums[i];
    }
  }
  int second_smallest = numbers[0];
  if (second_smallest == smallest){
    second_smallest = numbers[1];
  }
  for (int i = 0; i < sumsl; i++){
    if (second_smallest > sums[i] && sums[i] != smallest){
      second_smallest = sums[i];
    }
  }
  return second_smallest;
}