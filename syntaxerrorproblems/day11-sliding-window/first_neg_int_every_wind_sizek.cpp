#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;

    queue<int> q;
    vector<int> ans;

    int i = 0;
    int j = 0;

    while (j < arr.size()) {

        if (arr[j] < 0) {
            q.push(j);
        }

        if (j - i + 1 < k) {
            j++;
        }
        else {

            while (!q.empty() && q.front() < i) {
                q.pop();
            }

            if (q.empty()) {
                ans.push_back(0);
            }
            else {
                ans.push_back(arr[q.front()]);
            }

            i++;
            j++;
        }
    }

    cout << "First Negative Numbers: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}