#include <iostream>

bool is_ascending(int array[], int n){
    if (n < 0){
        return false;
    }
    
    bool array_is_ascending = true;

    for (int i = 1; i < n; i++){
        if (!(array[i] >= array[i-1])){
            array_is_ascending = false;
            std::cout << "i" << i << " a[i-1]" << array[i-1] << " a[i]" << array[i] << std::endl;
        } 
    }
    return array_is_ascending;
}