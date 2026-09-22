#include <bits/stdc++.h>
using namespace std;

bool dfs(int node,
         int col,
         vector<int>& color,
         vector<vector<int>>& graph) {

    color[node] = col;

    for (int neighbor : graph[node]) {

        if (color[neighbor] == -1) {

            if (!dfs(neighbor,
                     1 - col,
                     color,
                     graph)) {

                return false;
            }
        }

        else if (color[neighbor] == col) {

            return false;
        }
    }

    return true;
}

bool isBipartite(vector<vector<int>>& graph) {

    int n = graph.size();

    vector<int> color(n, -1);

    for (int i = 0; i < n; i++) {

        if (color[i] == -1) {

            if (!dfs(i, 0, color, graph)) {
                return false;
            }
        }
    }

    return true;
}

int main() {

    vector<vector<int>> graph = {
        {1, 3},
        {0, 2},
        {1, 3},
        {0, 2}
    };

    if (isBipartite(graph)) {
        cout << "Graph is Bipartite";
    }
    else {
        cout << "Graph is NOT Bipartite";
    }

    return 0;
}