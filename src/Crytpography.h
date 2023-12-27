/**
 * Jack Robbins
*/


#ifndef CRYTPOGRAPHY_H
#define CRYTPOPGRAPHY_H

#include <stdlib.h> //for srand, rand
#include <time.h> //for entropy
#include <map>

using std::map;
using namespace std;

//To be used for character conversion with our RNG's
map<int, char> characters = {{ 0, '!' }, {1, '"'}, {2, '#'}, {3, '$'}, {4, '%'}, {5, '&'}, {6, '\''}, {7, '('}, {8, ')'}, {9, '*'},
    {10, '+'}, {11, '-'}, {12, ','}, {13, '|'}, {14, '/'}, {15, '.'}, {16, '0'}, {17, '1'}, {18, '2'},
    {19, '3'}, {20, '4'}, {21, '5'}, {22, '6'}, {23, '7'}, {24, '8'}, {25, '9'}, {26, 'a'}, {27, 'b'}, {28, 'c'},
    {29, 'd'}, {30, 'e'}, {31, 'f'}, {32, 'g'}, {33, 'h'}, {34, 'i'}, {35, 'j'}, {36, 'k'}, {37, 'l'},
    {38, 'm'}, {39, 'n'}, {40, 'o'}, {41, 'p'}, {42, 'q'}, {43, 'r'}, {44, 's'}, {45, 't'}, {46, 'u'},
    {47, 'v'}, {48, 'w'}, {49, 'x'}, {50, 'y'}, {51, 'z'}, {52, 'A'}, {53, 'B'}, {54, 'C'}, {55, 'D'},
    {56, 'E'}, {57, 'F'}, {58, 'G'}, {59, 'H'}, {60, 'I'}, {61, 'J'}, {62, 'K'}, {63, 'L'}, {64, 'M'},
    {65, 'N'}, {66, 'O'}, {67, 'P'}, {68, 'Q'}, {69, 'R'}, {70, 'S'}, {71, 'T'}, {72, 'U'}, {73, 'V'},
    {74, 'W'}, {75, 'X'}, {76, 'Y'}, {77, 'Z'}, {78, '@'}, {79, '?'}, {80, '<'}, {81, '>'}, {82, '^'} };



//Using Linear Congruent Generator
extern bool LCG_RNG(int length, int(&arr)[]);

//Using Mersenne Twister algorithm
extern int Mersenne_Twister_RNG(int length, char& arr);



#endif /* CRYPTOGRAPHY_H */