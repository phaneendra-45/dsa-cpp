#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3, 0, 1};

    int n = nums.size();

    int sum = n * (n + 1) / 2;

    for (int num : nums) {
        sum -= num;
    }

    cout << "Missing Number: " << sum;

    return 0;
}