/**
 * Jack Robbins
 * This handles all of the pseudorandom number generation
*/

#include "Crytpography.h"

//Using the LCG_RNG algorithm
//taking in length, memory location of an array that will store our answer
bool LCG_RNG(int length, int(&arr)[]){
    for(int i = 0; i < length; i++){
        //set the seed
        srand(time(NULL));
        arr[i] = i;
    }

    return true;
}