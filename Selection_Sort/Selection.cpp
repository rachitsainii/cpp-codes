#include "Selection.h"
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void selection(int a[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] < a[min])
      {
        min = j;
      }
    }
    swap(&a[min], &a[i]);
  }
}
