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
    int length = 12;

    string password = LCG_RNG(length);
    double strength = checkPWStrength(password, length);
    cout << "Using Linear Congruent Generator\n" << LCG_RNG(12) << "\n Strength: " << strength << endl; // *arrptr = arr due to dereferencing
    cout << "Using Matrix Determinant Generator\n" << MDG_RNG(12) << "\n" << endl;
}