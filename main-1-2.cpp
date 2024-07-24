#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double array_mean(int[], int);

int main(){

    int nums[] = {1, 1, 2};
    int nums_count = 3;

    std::cout << "Mean of array is " << array_mean(nums, nums_count) << std::endl;

    return 0;
}