#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};

    int duplicate = -1;

    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]);

        if (nums[index] < 0) {
            duplicate = index;
            break;
        }

        nums[index] = -nums[index];
    }

    cout << duplicate;

    return 0;
}