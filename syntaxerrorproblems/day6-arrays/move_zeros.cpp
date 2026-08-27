#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    int j = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}