#include "BinarySearch.h"

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
