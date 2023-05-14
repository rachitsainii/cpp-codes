#include <bits/stdc++.h>
#include "scc.cpp"

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> edges(m, std::vector<int>(2));
    for (int i = 0; i < m; i++)
    {
        std::cin >> edges[i][0] >> edges[i][1];
    }

    int count = stronglyConnectedComponents(n, edges);
    std::cout << "Number of strongly connected components: " << count << std::endl;

    return 0;
}
