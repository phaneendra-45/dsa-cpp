#include <bits/stdc++.h>
using namespace std;

void dfs(int node,
         vector<vector<int>>& adj,
         vector<bool>& visited,
         int& nodeCount,
         int& degreeSum) {

    visited[node] = true;

    nodeCount++;

    degreeSum += adj[node].size();

    for (int neighbor : adj[node]) {

        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited,
                nodeCount, degreeSum);
        }
    }
}

int countCompleteComponents(int n, vector<vector<int>>& edges) {

    vector<vector<int>> adj(n);

    // Build graph
    for (auto edge : edges) {

        int u = edge[0];
        int v = edge[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n, false);

    int completeCount = 0;

    for (int i = 0; i < n; i++) {

        if (!visited[i]) {

            int nodeCount = 0;
            int degreeSum = 0;

            dfs(i, adj, visited,
                nodeCount, degreeSum);

            int edgesInComponent = degreeSum / 2;

            int requiredEdges =
                nodeCount * (nodeCount - 1) / 2;

            if (edgesInComponent == requiredEdges) {
                completeCount++;
            }
        }
    }

    return completeCount;
}

int main() {

    int n = 6;

    vector<vector<int>> edges = {
        {0, 1},
        {0, 2},
        {1, 2},
        {3, 4}
    };

    int answer = countCompleteComponents(n, edges);

    cout << "Number of Complete Components: "
         << answer << endl;

    return 0;
}