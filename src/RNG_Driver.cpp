//Simple driver for testing

#include "Cryptography.h"

#include <iostream>

using namespace std;

int main(){
    //pointer to an array of 12 int objects
    char (*arrptr)[12];
    char arr[12];

    //point to the address of the array
    arrptr = &arr;

    //dereference the pointer to end up with what is at the address
    LCG_RNG(12, *arrptr); // *arrptr = arr due to dereferencing
    

    for(int i = 0; i < 12; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}