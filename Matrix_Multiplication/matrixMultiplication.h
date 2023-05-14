#ifndef MATRIXMULTIPLICATION_H
#define MATRIXMULTIPLICATION_H

#include <climits>

class MatrixMultiplication {
    private:
        int** cache;
        int size;
        
        int recursiveHelper(int p[], int i, int j);
        
    public:
        MatrixMultiplication(int n);
        ~MatrixMultiplication();
        int matrixMultiplication(int p[], int n);
};

#endif
