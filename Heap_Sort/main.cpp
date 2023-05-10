#include "HeapSort.h"
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int *arr = new int[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; ++i)
    cin >> arr[i];
  HeapSort hs(arr, n);
  hs.sort();
  cout << "\nSorted array is: ";
  hs.printArray();
  delete[] arr;
  return 0;
}
