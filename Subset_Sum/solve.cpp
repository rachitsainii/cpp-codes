#include "solve.h"

void solve(int in, std::vector<int> arr, std::vector<int> &res, int n, int s)
{
  if (in == n)
  {
    res.push_back(s);
    return;
  }

  solve(in + 1, arr, res, n, s + arr[in]);
  solve(in + 1, arr, res, n, s);
}
