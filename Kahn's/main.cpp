#include <bits/stdc++.h>
#include "Solution.h"
using namespace std;

int main()
{
  vector<int> adj[6];
  adj[5].push_back(2);
  adj[5].push_back(0);
  adj[4].push_back(0);
  adj[4].push_back(1);
  adj[3].push_back(1);
  adj[2].push_back(3);

  Solution obj;
  vector<int> v = obj.topo(6, adj);
  for (auto it : v)
    cout << it << " ";
  return 0;
}