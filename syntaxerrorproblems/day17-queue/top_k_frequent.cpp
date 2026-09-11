#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {
        1, 1, 1, 2, 2, 3
    };

    int k = 2;

    unordered_map<int, int> freq;

    for (int x : nums) {
        freq[x]++;
    }

   
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    for (auto p : freq) {

        pq.push({p.second, p.first});

        if (pq.size() > k) {
            pq.pop();
        }
    }

    // Answer
    vector<int> answer;

    while (!pq.empty()) {

        answer.push_back(pq.top().second);
        pq.pop();
    }

    cout << "Top " << k << " Frequent Elements: ";

    for (int x : answer) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}