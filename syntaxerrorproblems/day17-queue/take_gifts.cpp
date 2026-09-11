#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> gifts = {
        25, 64, 9, 4, 100
    };

    int k = 4;

    priority_queue<int> pq(
        gifts.begin(),
        gifts.end()
    );

    while (k--) {

        int x = pq.top();
        pq.pop();

        int newValue = sqrt(x);

        pq.push(newValue);
    }

    long long sum = 0;

    while (!pq.empty()) {

        sum += pq.top();
        pq.pop();
    }

    cout << "Remaining Gifts = " << sum << endl;

    return 0;
}