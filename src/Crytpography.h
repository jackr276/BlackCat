/**
 * Jack Robbins
*/


#ifndef CRYTPOGRAPHY_H
#define CRYTPOPGRAPHY_H

#include <stdlib.h> //for srand, rand
#include <time.h> //for entropy



//Using Linear Congruent Generator
extern bool LCG_RNG(int length, int(&arr)[]);

//Using Mersenne Twister algorithm
extern int Mersenne_Twister_RNG(int length, char& arr);



#endif /* CRYPTOGRAPHY_H */