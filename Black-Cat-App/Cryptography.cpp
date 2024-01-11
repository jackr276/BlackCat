/**
 * Jack Robbins
 * This handles all of the pseudorandom number generation, password checking, entropy calculations, etc
*/

#include "./Cryptography.h"


//Using the LCG_RNG algorithm
//taking in length, memory location of an array that will store our answer
string LCG_RNG(int length){
    char arr[length];

    //set the seed
    srand(time(NULL));
    for(int i = 0; i < length; i++){
        int num = rand() % 128;
        //printable ascii ranges from 33 to 126
        while(num < 33 || num > 126){
            //redo rand generation
            num = rand() % 128;
        }

        arr[i] = num;
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
        int num = mdg->getNextNumber() % 128;
        //printable ascii ranges from 33 to 126
        while(num < 33 || num > 126){
            //redo rand generation
            num = mdg->getNextNumber() % 128;
        }

        arr[i] = num;
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


/**
 * Using the formula for shannon entropy: H = -1*sum(p_i*log(p_i))
 * This gives us the average number of bits needed to encode a singular character
 * doing H * length gives us the the entropy for the given passcode
*/
double calculateEntropy(string &password, int &length){
    double entropy = 0.0;
    map<char, double> freqMap;
    
    //populate the frequency map
    for (char &character : password) {
        //if it is not already in, add it in
        if(freqMap.find(character) == freqMap.end()){
            freqMap.insert(pair<char, double> (character, 1));
        } else {
            freqMap[character]++;
        }
    }

    for(const auto &pair : freqMap){
        double probability_of_i = pair.second / length;
        //p_i * log(p_i)
        entropy += (probability_of_i * log2(probability_of_i));
    }

    return -entropy * length;
}
