#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {
        5, 3, 8, 3, 5
    };

    int result = 0;

    for (int x : nums) {
        result ^= x;
    }

    cout << "XOR of array = " << result << endl;

    return 0;
}