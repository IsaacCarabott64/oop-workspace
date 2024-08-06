double arrayMax(double* array, int n){

  double max = array[0];

  for (int i = 0; i < n; i++){
    if (array[i] > max){
      max = array[i];
    }
  }



  return max;
}