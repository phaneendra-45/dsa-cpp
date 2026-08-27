#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int count = 0;
    int candidate = 0;

    for (int x : nums) {
        if (count == 0)
            candidate = x;

        if (x == candidate)
            count++;
        else
            count--;
    }

    cout << candidate;

    return 0;
}