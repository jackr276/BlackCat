/**
 * Jack Robbins
 * This handles all of the pseudorandom number generation
*/

#include "Crytpography.h"



//Using the LCG_RNG algorithm
//taking in length, memory location of an array that will store our answer
bool LCG_RNG(int length, int(&arr)[]){
    //set the seed
    srand(time(NULL));
    for(int i = 0; i < length; i++){
        arr[i] = rand() % 82;
    }

    //TODO make the array a char array, convert numbers to ASCII
    return true;
}



