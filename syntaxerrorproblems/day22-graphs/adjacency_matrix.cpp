#include <bits/stdc++.h>
using namespace std;

int main() {

    int V = 5;

    vector<vector<int>> adj(
        V, vector<int>(V, 0)
    );

    adj[0][1] = 1;
    adj[1][0] = 1;

    adj[0][2] = 1;
    adj[2][0] = 1;

    adj[1][3] = 1;
    adj[3][1] = 1;

    adj[2][4] = 1;
    adj[4][2] = 1;

    cout << "Adjacency Matrix:\n";

    for (int i = 0; i < V; i++) {

        for (int j = 0; j < V; j++) {
            cout << adj[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}