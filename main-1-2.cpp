#include <iostream>

using namespace std;

extern void modifyArray(double*, int, double);

int main(){

    double nums[] = {1.1, 2, 3.14, 50.0};
    double nums_l = 4;

    for (int i = 0; i < nums_l; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    modifyArray(nums, nums_l, 1);
    
    for (int i = 0; i < nums_l; i++){
        cout << nums[i] << " ";
    }
    cout << endl;


    return 0;
}