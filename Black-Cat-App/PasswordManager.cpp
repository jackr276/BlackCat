/**
 * Jack Robbins
 * Password generator/strength checker -- still building
*/

#include "./PasswordManager.h"


string generatePassword(int length, int option){
    if(option == 1){
        return LCG_RNG(length);
    } else {
        return MDG_RNG(length);
    }
}

void checkPasscodeStrength(string &passcode, int &length){

    cout << "Password Strength(//TODO): " << checkPWStrength(passcode, length) << endl;
}


double checkEntropy(string &passcode, int &length){
    return calculateEntropy(passcode, length);
}

