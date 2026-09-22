#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(
    int V,
    vector<vector<int>>& edges,
    int src) {

    vector<vector<pair<int, int>>> adj(V);

    for (auto edge : edges) {

        int u = edge[0];
        int v = edge[1];
        int weight = edge[2];

        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight});
    }

    vector<int> dist(V, INT_MAX);

    set<pair<int, int>> st;

    dist[src] = 0;

    st.insert({0, src});

    while (!st.empty()) {

        auto it = *(st.begin());

        int dis = it.first;
        int node = it.second;

        st.erase(it);

        for (auto neighbor : adj[node]) {

            int adjNode = neighbor.first;
            int weight = neighbor.second;

            if (dis + weight < dist[adjNode]) {

                if (dist[adjNode] != INT_MAX) {
                    st.erase({
                        dist[adjNode],
                        adjNode
                    });
                }

                dist[adjNode] = dis + weight;

                st.insert({
                    dist[adjNode],
                    adjNode
                });
            }
        }
    }

    return dist;
}

int main() {

    int V = 4;

    vector<vector<int>> edges = {
        {0, 1, 4},
        {0, 2, 1},
        {2, 3, 2},
        {1, 3, 1},
        {0, 3, 10}
    };

    int source = 0;

    vector<int> dist =
        dijkstra(V, edges, source);

    cout << "Shortest distances from node "
         << source << ":\n";

    for (int i = 0; i < V; i++) {

        cout << "Node " << i << " = ";

        if (dist[i] == INT_MAX)
            cout << "INF";
        else
            cout << dist[i];

        cout << endl;
    }

    return 0;
}