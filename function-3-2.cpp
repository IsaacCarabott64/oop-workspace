#include <iostream>
#include <bits/stdc++.h>

int median_array(int array[], int n){
  if (n < 0 || n % 2 == 0){
    return false;
  }


  std::sort(array, array + n);

  
  int res = (n-1)/2;
  return array[res];
}