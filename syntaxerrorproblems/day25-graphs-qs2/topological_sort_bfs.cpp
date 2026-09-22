#include <bits/stdc++.h>
using namespace std;

vector<int> topoSort(int V, vector<vector<int>>& adj) {

    vector<int> indegree(V, 0);

    for (int i = 0; i < V; i++) {

        for (int neighbor : adj[i]) {
            indegree[neighbor]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < V; i++) {

        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topo;

    while (!q.empty()) {

        int node = q.front();
        q.pop();

        topo.push_back(node);

        for (int neighbor : adj[node]) {

            indegree[neighbor]--;

            if (indegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    return topo;
}

int main() {

    int V = 4;

    vector<vector<int>> adj(V);

    adj[0].push_back(1);
    adj[0].push_back(2);

    adj[1].push_back(3);

    adj[2].push_back(3);

    vector<int> result = topoSort(V, adj);

    cout << "Topological Sort: ";

    for (int node : result) {
        cout << node << " ";
    }

    return 0;
}