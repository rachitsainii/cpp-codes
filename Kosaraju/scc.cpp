#include <bits/stdc++.h>

void dfs(int node, std::unordered_map<int, bool> &vis, std::stack<int> &s, std::unordered_map<int, std::list<int>> &adj)
{
    vis[node] = true;
    for (auto nbr : adj[node])
    {
        if (!vis[nbr])
        {
            dfs(nbr, vis, s, adj);
        }
    }
    s.push(node);
}

void revDfs(int node, std::unordered_map<int, bool> &vis, std::unordered_map<int, std::list<int>> &adj)
{
    vis[node] = true;
    for (auto nbr : adj[node])
    {
        if (!vis[nbr])
        {
            revDfs(nbr, vis, adj);
        }
    }
}

int stronglyConnectedComponents(int v, std::vector<std::vector<int>> &edges)
{
    // Create an adj list
    std::unordered_map<int, std::list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    // Topological sort
    std::stack<int> s;
    std::unordered_map<int, bool> vis;
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, s, adj);
        }
    }

    // Create a transpose graph
    std::unordered_map<int, std::list<int>> transpose;
    for (int i = 0; i < v; i++)
    {
        vis[i] = 0;
        for (auto nbr : adj[i])
        {
            transpose[nbr].push_back(i);
        }
    }

    // DFS call using above ordering
    int count = 0;
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        if (!vis[top])
        {
            count++;
            revDfs(top, vis, transpose);
        }
    }
    return count;
}
