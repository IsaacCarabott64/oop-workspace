bool is_descending(int array[], int n){
    if (n < 0){
        return false;
    }
    
    bool array_is_descending = true;

    for (int i = 1; i < n; i++){
        if (array[i] > array[i-1]){
            array_is_descending = false;
        } 
    }
    return array_is_descending;
}