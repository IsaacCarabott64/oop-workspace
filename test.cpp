#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int roll(int n_die, int n_sides){
  int roll = 0;
  for (int i = 0; i < n_die; i++){
    roll += (rand() % n_sides) + 1;
  }
  return roll;
}

int main(){

  srand(time(NULL));


  int n = 10000000;
  int number_of_die = 10;
  int number_of_die_sides = 10;


  int a = number_of_die;
  int b = number_of_die_sides * number_of_die;
  int* freq = new int[b+1];

  for (int i = 0; i < b; i++){
    freq[i] = 0;
  }


  for (int i = 0; i < n; i++){
    freq[roll(number_of_die, number_of_die_sides)]++;
  }

  int max = freq[0];
  for (int i = 0; i < b; i++){
    if (freq[i] > max){
      max = freq[i];
    }
  }

  cout << "MAX " << max << endl;

  for (int i = 1; i < b+1; i++){
    if (i < 10){
      cout << 0;
    }
    if (i < 100){
      cout << 0;
    }
    cout << i;
    for (int j = 0; j < freq[i] / (max / 80); j++){
      cout << "|";
    }
    cout << endl;
  }
  


  return 0;
}