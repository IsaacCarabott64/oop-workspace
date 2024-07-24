#include <iostream>

bool is_fanarray(int array[], int n) {
  if (n < 1) {
    return false;
  }

  bool is_array_a_fanarray = true;

  for (int i = 0; i < n; i++){
    if (array[i] != array[n-i-1]){
      is_array_a_fanarray = false;
      //std::cout << i << "   " << n-i-1 << std::endl;
    }
    
  }

  int stop_i;
  if (n % 2 == 0){
    stop_i = (int) ( (n+1)/ 2 );
  } else {
    stop_i = (int) ( (n+2)/ 2 );
  }

  //std::cout << "stop_i = " << stop_i << std::endl;

  for (int i = 1; i < stop_i; i++){
    if (array[i] < array[i - 1]){
      is_array_a_fanarray = false;
      //std::cout << i << "   " << n-i-1 << std::endl;
    }
  }

  return is_array_a_fanarray;
}