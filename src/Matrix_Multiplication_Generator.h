/**
 * Jack Robbins
 * Class for a custom matrix multplication pseudorandom number generator
*/

#ifndef MATRIX_DETERMINANT_RNG_H_
#define MATRIX_DETERMINANT_RNG_H_

#include <time.h>
#include <random>

class Matrix_Determinant_RNG {
    //Constructor
    public:
        Matrix_Determinant_RNG(){
            //Record time
            srand(time(NULL));
        }

        int getNextNumber(){
            int matrix[3][3];

            for(int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    matrix[i][j] = rand();
                }
            }
        }

    private:
        int matrix_determinant(int (&matrix)[3][3]){
            //will take in a 3-by-3 matrix and find determinant
        }



};




#endif /* MATRIX_DETERMINANT_RNG_H_ */