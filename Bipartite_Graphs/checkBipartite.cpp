#include "checkBipartite.h"

bool checkBipartite(vector<int> adj[], int n)
{
    int color[n];
    memset(color, -1, sizeof color);
    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            if (!bipartiteBfs(i, adj, color))
            {
                return false;
            }
        }
    }
    return true;
}
