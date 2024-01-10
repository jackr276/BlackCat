/**
 * Jack Robbins
 * Header file for passcode creation
*/

#ifndef PASSWORDMANAGER_H
#define PASSWORDMANAGER_H

#include <iostream>
#include "Cryptography.h"

//0 for LCG, 1 for MDG
extern string generatePassword(int length, int option);

extern void checkPasscodeStrength(string &passcode, int &length);

extern double checkEntropy(string &passcode, int &length);

#endif /* PASSWORDMANAGER_H */
