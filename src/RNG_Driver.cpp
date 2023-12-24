//Simple driver for testing

#include "Crytpography.h"

#include <iostream>

using namespace std;

int main(){
    int arr[5] = {0, 0, 0, 0, 0};

    LCG_RNG(5, arr);
    

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}