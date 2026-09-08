#include <bits/stdc++.h>
using namespace std;

int main() {

    // Input
    vector<int> nums = {4, 1, 2, 1, 2};

    int result = 0;

    for (int num : nums) {
        result = result ^ num;
    }

    cout << "Single Number: " << result;

    return 0;
}