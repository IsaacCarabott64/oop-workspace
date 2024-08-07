double* duplicateArray(double* array, int size){
    double* array_copy = new double[size];
    for (int i = 0; i < size; i++){
        array_copy[i] = array[i];
    }
    return array_copy;
}