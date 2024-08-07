#include <iostream>

using namespace std;

extern double arrayMin(double*, int);

int main(){

    double nums[] = {1.1, 2, 3.14, 50.0};
    double nums_l = 4;

    cout << arrayMin(nums, nums_l) << endl;


    return 0;
}