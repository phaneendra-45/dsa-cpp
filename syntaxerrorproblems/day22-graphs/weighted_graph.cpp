#include <bits/stdc++.h>
using namespace std;

int main() {
    int V = 5;

    vector<pair<int, int>> adj[V];

    adj[0].push_back({1, 5});
    adj[1].push_back({0, 5});

    adj[0].push_back({2, 3});
    adj[2].push_back({0, 3});

    cout << "Weighted Graph:\n";

    for (int i = 0; i < V; i++) {

        cout << i << " -> ";

        for (auto edge : adj[i]) {

            int neighbor = edge.first;
            int weight = edge.second;

            cout << "(" << neighbor
                 << ", " << weight << ") ";
        }

        cout << endl;
    }

    return 0;
}