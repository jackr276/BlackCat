//Simple driver for testing

#include "../Include/PasswordManager.h"

#include <iostream>

using namespace std;

//predeclare
void test_algos();


int main(int argc, char *argv[]){
    //now testing using user input

    if(argc < 3) {
        return -1;
    }

    int len = stoi(argv[1]);
    int option = stoi(argv[2]);

    string passcode = generatePassword(len, option);

    cout << "Password is: " << passcode << endl;
    checkPasscodeStrength(passcode, len);
    cout << endl;
    checkEntropy(passcode, len);
 
    //not using atm
    //test_algos();

    //testing caesar cypher
    int key;
    cout << "\nEnter your key(Make sure to remember it!): ";
    cin >> key;

    char arr[] = {'a', 'b', '&', '7'};
    caesar_cyper_encrypt(key, arr, 4);

    cout << "\nEncrypted password: " << arr << endl;

    cout << "Now attempting decryption, enter your key: ";
    cin >> key;

    caesar_cyper_decrypt(key, arr, 4);

    cout << "\nDecrypted password: " << arr << endl; 
}


/**
 * For overall testing, not currently in use but handy when needed
*/
void test_algos(){
    //testing both methods against eachother quantitatively
    double LCG_Strength_Sum, MDG_Strength_Sum = 0.0;
    for(int i = 0; i < 10; i++){
        int length = rand()%50;

        while (length < 8){
            length = rand()%50;
        }
    
        string MDG_p, LCG_p;
        double MDG_strength, LCG_strength; 

        LCG_p = LCG_RNG(length);
        MDG_p = MDG_RNG(length);

        LCG_strength = checkPWStrength(LCG_p, length);
        MDG_strength = checkPWStrength(MDG_p, length);

        LCG_Strength_Sum += LCG_strength;
        MDG_Strength_Sum += MDG_strength;

        //print out every 10
        if (i % 10 != 0){
            cout << "Using Linear Congruent Generator: " << LCG_p << "\nStrength: " << LCG_strength << endl; // *arrptr = arr due to dereferencing
            cout << "Using Matrix Determinant Generator: " << MDG_p << "\nStrength: " << MDG_strength << endl;
        }
    }

    cout << "Average LCG Strength: " << LCG_Strength_Sum/10 << endl;
    cout << "Average MDG Strength: " << MDG_Strength_Sum/10 << endl;

}