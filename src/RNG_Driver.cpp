//Simple driver for testing

#include "Crytpography.h"

#include <iostream>

using namespace std;

int main(){
    //pointer to an array of 12 int objects
    int (*arrptr)[12];
    int arr[12];

    //point to the address of the array
    arrptr = &arr;

    //dereference the pointer to end up with what is at the address
    LCG_RNG(12, *arrptr);
    

    for(int i = 0; i < 12; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}