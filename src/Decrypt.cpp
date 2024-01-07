/**
 * Holds all of the decryption algorithms
*/

#include "../Include/Decrypt.h"


void caesar_cyper_decrypt(int &keyVal, char (&arr)[], int size){
    for(int i = 0; i < size; i++){
        //Remove the caesarian cypher by subtracting the keyval
        arr[i] = arr[i] - keyVal;
    }
}