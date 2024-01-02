//Simple driver for testing

#include "Cryptography.h"

#include <iostream>

using namespace std;

void test_algos();

int main(){
    //pointer to an array of 12 int objects
    char (*arrptr)[12];
    char arr[12];

    //point to the address of the array
    arrptr = &arr;

    //dereference the pointer to end up with what is at the address

    test_algos();
    
}

void test_algos(){
    //testing both methods against eachother quantitatively
    double LCG_Strength_Sum, MDG_Strength_Sum = 0.0;
    for(int i = 0; i < 10000000; i++){
        int length = rand()%50;

        while (length < 8){
            length = rand()%50;
        }
    
        string MDG_p, LCG_p;
        double MDG_strength, LCG_strength; 

        LCG_p = LCG_RNG(length);
        MDG_p = MDG_RNG(length);

        LCG_strength = checkPWStrength(LCG_p, length);
        MDG_strength = checkPWStrength(MDG_p, length);

        LCG_Strength_Sum += LCG_strength;
        MDG_Strength_Sum += MDG_strength;

        //print out every 10
        if (i % 10 == 0){
            cout << "Using Linear Congruent Generator: " << LCG_p << "\nStrength: " << LCG_strength << endl; // *arrptr = arr due to dereferencing
            cout << "Using Matrix Determinant Generator: " << MDG_p << "\nStrength: " << MDG_strength << endl;
        }
    }

    cout << "Average LCG Strength: " << LCG_Strength_Sum/10000000 << endl;
    cout << "Average MDG Strength: " << MDG_Strength_Sum/10000000 << endl;

}