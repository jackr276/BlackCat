/**
 * Jack Robbins
 * This handles all of the pseudorandom number generation
*/

#include "Cryptography.h"


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



//Using the LCG_RNG algorithm
//taking in length, memory location of an array that will store our answer
string LCG_RNG(int length){
    char arr[length];

    //set the seed
    srand(time(NULL));
    for(int i = 0; i < length; i++){
        arr[i] = characters[rand() % 82];
    }

    int* l = &length;

    return createPassword(arr, *l);
}


//Using custom(untested) matrix determinant generation
string MDG_RNG(int length){
    char arr[length];

    Matrix_Determinant_RNG *mdg = new Matrix_Determinant_RNG();

    for(int i = 0; i < length; i++){
        //Populate using the mdg's get next number
        arr[i] = characters[mdg->getNextNumber()%82];
    }

    //not necessary
    delete mdg;

    return createPassword(arr, length);
}


//Creates the final password from the char array
string createPassword(char (&arr)[], int &length){
    string password = "";

    for(int i = 0; i < length; i++){
        password += arr[i];
    }

    return password;
}


//Check the passwords strength, giving an integer rating
double checkPWStrength(string &password, int &length){
    //doubles(we will have decimal answers), all initialized to 0(0.0)
    double numSpecial = 0, numCap = 0, numNum = 0, numLower = 0;

    for(char &character : password){
        if (isalpha(character)){
            if(isupper(character)){
                numCap++;
            } else {
                numLower++;
            }
        } else if(isdigit(character)){
            numNum++;
        } else {
            numSpecial++;
        }
    }

    if(length < 8){
        return 0; //weak regardless, strong passwords at least 8 characters
    }

    //Check strength using formula, eights given to certain characters
    // Strong -> at least 20% special characters, 15% numbers, 65% upper/lower mix

    return numSpecial/length * 0.95 + numCap/length * 0.30 + numNum/length * 0.20 + numLower/length * 0.20;
}
