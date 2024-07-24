#include <iostream>

int count(int array[], int n){
    int even_count = 0;


    for (int i = 0; i < n; i++){
        if (array[i] % 2 == 0){
            //std::cout << i << " " << array[i] << std::endl;
            even_count += 1;
        }
    }

    //std::cout << "ENDED WITH " << even_count << std::endl;
    return even_count;
}