#ifndef SPARSEMATRIX_H
#define SPARSEMATRIX_H

#include <iostream>

using namespace std;

class Element
{
public:
    int i;
    int j;
    int x;
};

class SparseMatrix
{
private:
    int m;
    int n;
    int num;
    Element *ele;

public:
    SparseMatrix(int m, int n, int num);
    ~SparseMatrix();
    SparseMatrix operator+(SparseMatrix &s);
    friend istream &operator>>(istream &is, SparseMatrix &s);
    friend ostream &operator<<(ostream &os, SparseMatrix &s);
};

#endif /* SPARSEMATRIX_H */
