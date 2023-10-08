#include "BinarySearch.h"

//Recursive Function
int binary_search(int arr[], int first, int last, int key)
{
  if (last >= first)
  {
    int mid = first + (last - first) / 2;
    if (arr[mid] == key)
      return mid;
    if (arr[mid] > key)
      return binary_search(arr, first, mid - 1, key);
    return binary_search(arr, mid + 1, last, key);
  }
  return -1;
}

// Iterative Function
int binarySearch(int arr[], int n, int key){
  int low = 0, high = n-1;
  while(low <= high){
    int mid = low + (high-low)/2;

    if(arr[mid] == key){
      return mid;
    } else if (arr[mid] > key) {
      high = mid-1;
    } else {
      low = mid+1;
    }
  }

  return -1;
}
