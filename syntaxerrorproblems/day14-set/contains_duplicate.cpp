#include <bits/stdc++.h>
using namespace std;

int main() {

    // Input
    vector<int> nums = {1, 2, 3, 1};

    unordered_set<int> seen;

    for (int num : nums) {

        if (seen.count(num)) {
            cout << "Duplicate Found";
            return 0;
        }

        seen.insert(num);
    }

    cout << "No Duplicate";

    return 0;
}