#include <iostream>
#include "SparseMatrix.h"

using namespace std;

int main()
{
    SparseMatrix s1(5, 5, 5);
    SparseMatrix s2(5, 5, 5);

    // Read input for s1 and s2
    cout << "Enter elements for first matrix:" << endl;
    cin >> s1;

    cout << "Enter elements for second matrix:" << endl;
    cin >> s2;

    // Calculate sum of s1 and s2
    SparseMatrix sum = s1 + s2;

    // Print matrices and their sum
    cout << "First Matrix:" << endl << s1 << endl;
    cout << "Second Matrix:" << endl << s2 << endl;
    cout << "Sum Matrix:" << endl << sum << endl;

    return 0;
}
