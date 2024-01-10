/**
 * Jack Robbins
*/


#ifndef CRYPTOGRAPHY_H
#define CRYPTOGRAPHY_H

#include <stdlib.h> //for srand, rand
#include <time.h> //for entropy
#include <map>
#include <string>
#include <iostream>

//For MDG
#include "Matrix_Determinant_Generator.h"
#include "Encrypt.h"
#include "Decrypt.h"

using namespace std;


//Using Linear Congruent Generator
extern string LCG_RNG(int length);

//Using custom(untested) matrix determinant rng
extern string MDG_RNG(int length);

//simply puts the chars into a string
extern string createPassword(char (&arr)[], int &length);

//Checks passcode strength, giving a number //TODO
extern double checkPWStrength(string &password, int &length);

//using shannon entropy
// H = -1*sum(p_i*log(p_i))
extern double calculateEntropy(string &password, int &length);


/* Begin thinking about password storage via encrpytion and decryption, using AES first */




#endif /* CRYPTOGRAPHY_H */