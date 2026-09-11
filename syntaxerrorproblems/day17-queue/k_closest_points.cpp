#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<vector<int>> points = {
        {3, 3},
        {5, -1},
        {-2, 4}
    };

    int k = 2;

    
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < points.size(); i++) {

        int x = points[i][0];
        int y = points[i][1];

        int distance = x * x + y * y;

        pq.push({distance, i});

        if (pq.size() > k) {
            pq.pop();
        }
    }

    cout << "K Closest Points:\n";

    while (!pq.empty()) {

        int index = pq.top().second;
        pq.pop();

        cout << "[" << points[index][0]
             << ", " << points[index][1] << "]\n";
    }

    return 0;
}