#include <bits/stdc++.h>
using namespace std;

int knapsack(int *wt, int *val, int n, int W);

int main() {
  int val[] = {60, 100, 120};
  int wt[] = {10, 20, 30};
  int W = 50;

  cout << knapsack(wt, val, 3, W);

  return 0;
}
