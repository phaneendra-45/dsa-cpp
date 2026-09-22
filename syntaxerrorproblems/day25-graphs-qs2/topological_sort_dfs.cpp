#include <bits/stdc++.h>
using namespace std;

void dfs(int node,
         vector<vector<int>>& adj,
         vector<bool>& visited,
         stack<int>& st) {

    visited[node] = true;

    for (int neighbor : adj[node]) {

        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, st);
        }
    }

    st.push(node);
}

vector<int> topoSort(int V, vector<vector<int>>& adj) {

    vector<bool> visited(V, false);

    stack<int> st;

    for (int i = 0; i < V; i++) {

        if (!visited[i]) {
            dfs(i, adj, visited, st);
        }
    }

    vector<int> topo;

    while (!st.empty()) {

        topo.push_back(st.top());
        st.pop();
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