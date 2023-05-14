#include "matrixMultiplication.h"

MatrixMultiplication::MatrixMultiplication(int n) {
    size = n;
    cache = new int*[size];
    for (int i = 0; i < size; i++) {
        cache[i] = new int[size];
        for (int j = 0; j < size; j++) {
            cache[i][j] = 0;
        }
    }
}

MatrixMultiplication::~MatrixMultiplication() {
    for (int i = 0; i < size; i++) {
        delete[] cache[i];
    }
    delete[] cache;
}

int MatrixMultiplication::recursiveHelper(int p[], int i, int j) {
    if (j <= i + 1) {
        return 0;
    }
    if (cache[i][j] > 0) {
        return cache[i][j];
    }
    int min = INT_MAX;
    for (int k = i + 1; k < j; k++) {
        int cost = recursiveHelper(p, i, k) + recursiveHelper(p, k, j);
        cost += p[i] * p[k] * p[j];
        if (cost < min) {
            min = cost;
        }
    }
    cache[i][j] = min;

    return cache[i][j];
}

int MatrixMultiplication::matrixMultiplication(int p[], int n) {
    return recursiveHelper(p, 0, n-1);
}
