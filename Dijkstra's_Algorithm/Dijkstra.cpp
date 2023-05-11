#include "Dijkstra.h"

vector<int> Dijkstra::dijkstra(int V, vector<vector<int>> adj[], int S)
{
    vector<int> dist(V);
    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
    }
    set<pair<int, int>> s;
    dist[S] = 0;
    s.insert(make_pair(0, S));
    while (!s.empty())
    {
        auto top = *(s.begin());
        int nodeDistance = top.first;
        int topNode = top.second;
        s.erase(s.begin());
        for (auto neighbour : adj[topNode])
        {
            if (nodeDistance + neighbour[1] < dist[neighbour[0]])
            {
                auto record = s.find(make_pair(dist[neighbour[0]], neighbour[0]));
                if (record != s.end())
                {
                    s.erase(record);
                }
                dist[neighbour[0]] = nodeDistance + neighbour[1];
                s.insert(make_pair(dist[neighbour[0]], neighbour[0]));
            }
        }
    }
    return dist;
}
