#include <bits/stdc++.h>
#include "bipartiteBfs.h"
#include "checkBipartite.h"
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (checkBipartite(adj, n))
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
