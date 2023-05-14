#include <iostream>
#include <vector>
#include "solve.h"

int main()
{
  int n;
  std::cin >> n;

  std::vector<int> res;
  std::vector<int> arr(n, 0);

  for (int i = 0; i < n; i++)
    std::cin >> arr[i];

  solve(0, arr, res, n, 0);

  for (int i = 0; i < res.size(); i++)
    std::cout << res[i] << " ";

  return 0;
}
