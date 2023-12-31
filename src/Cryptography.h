/**
 * Jack Robbins
*/


#ifndef CRYPTOGRAPHY_H
#define CRYPTOGRAPHY_H

#include <stdlib.h> //for srand, rand
#include <time.h> //for entropy
#include <map>
#include <string>

//For MDG
#include "Matrix_Multiplication_Generator.h"

using std::map;
using namespace std;


//Using Linear Congruent Generator
extern string LCG_RNG(int length);

//Using custom(untested) matrix determinant rng
extern string MDG_RNG(int length);

extern string createPassword(char (&arr)[], int &length);



#endif /* CRYPTOGRAPHY_H */