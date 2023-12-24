//Simple driver for testing

#include "Crytpography.h"

#include <iostream>

using namespace std;

int main(){
    int arr[12] = {0, 0, 0, 0, 0};

    LCG_RNG(12, arr);
    

    for(int i = 0; i < 12; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}