#include <iostream>

using namespace std;

extern double* duplicateArray(double*, int);

int main(){

    double nums[] = {1.1, 2, 3.14, 50.0};
    double nums_l = 4;

    for (int i = 0; i < nums_l; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    double* new_array = duplicateArray(nums, nums_l);
    for (int i = 0; i < nums_l; i++){
        cout << new_array[i] << " ";
    }
    cout << endl;


    return 0;
}