/**
 * Jack Robbins
*/


#ifndef CRYPTOGRAPHY_H
#define CRYPTOGRAPHY_H

#include <stdlib.h> //for srand, rand
#include <time.h> //for entropy
#include <map>
#include <string>

using std::map;
using namespace std;


//Using Linear Congruent Generator
extern bool LCG_RNG(int length, char(&arr)[]);

//Using Mersenne Twister algorithm
extern int Mersenne_Twister_RNG(int length, char& arr);

extern string createPassword(char arr[]);



#endif /* CRYPTOGRAPHY_H */