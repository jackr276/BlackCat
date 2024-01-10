/**
 * File for all encryptions
*/

#include "./Encrypt.h"

void caesar_cyper_encrypt(int &keyVal, char (&arr)[], int size){
        for(int i = 0; i < size; i++){
        //add the keyval to the ascii values, essentially encrypting it
        arr[i] = arr[i] + keyVal;
    }
}
