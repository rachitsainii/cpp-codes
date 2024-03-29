#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <vector>
#include "Dijkstra.h"

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i = 0;
        while (i++ < E)
        {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1, t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin >> S;
        Dijkstra obj;
        vector<int> res = obj.dijkstra(V, adj, S);
        for (int i = 0; i < V; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
