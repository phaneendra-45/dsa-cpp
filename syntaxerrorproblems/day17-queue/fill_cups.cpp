#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> amount = {
        1, 4, 2
    };
    priority_queue<int> pq;

    for (int x : amount) {

        if (x > 0) {
            pq.push(x);
        }
    }

    int time = 0;

    while (pq.size() > 1) {

        int a = pq.top();
        pq.pop();

        int b = pq.top();
        pq.pop();
        a--;
        b--;

        if (a > 0) {
            pq.push(a);
        }

        if (b > 0) {
            pq.push(b);
        }

        time++;
    }
    if (!pq.empty()) {
        time += pq.top();
    }

    cout << "Minimum Time = " << time << endl;

    return 0;
}