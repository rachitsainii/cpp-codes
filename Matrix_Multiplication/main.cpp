#include <iostream>
#include "matrixMultiplication.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    MatrixMultiplication mm(n);
    cout << "Minimum number of scalar matrix multiplications: ";
    cout << mm.matrixMultiplication(arr, n) << endl;

    return 0;
}
