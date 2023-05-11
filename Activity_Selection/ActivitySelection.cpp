#include "ActivitySelection.h"
#include <bits/stdc++.h>

using namespace std;

void ActivitySelection::printMaxActivities(int s[], int f[], int n)
{
  int i, j;
  cout << "activities to be selected are: ";
  i = 0;
  cout << i << " ";
  for (j = 1; j < n; j++)
  {
    if (s[j] >= f[i])
    {
      cout << j << " ";
      i = j;
    }
  }
  cout << endl;
}

void ActivitySelection::sortActivities(int s[], int f[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (f[i] > f[j])
      {
        swap(f[i], f[j]);
        swap(s[i], s[j]);
      }
    }
  }
}
