#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result;

    sort(nums.begin(), nums.end());

    int n = nums.size();

    for (int i = 0; i < n; i++) {

        // Skip duplicate first elements
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int j = i + 1;
        int k = n - 1;

        while (j < k) {

            int sum = nums[i] + nums[j] + nums[k];

            if (sum == 0) {

                result.push_back({
                    nums[i],
                    nums[j],
                    nums[k]
                });

                j++;
                k--;

                // Skip duplicates
                while (j < k && nums[j] == nums[j - 1])
                    j++;

                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }

            else if (sum < 0) {
                j++;
            }

            else {
                k--;
            }
        }
    }

    cout << "Triplets:\n";

    for (auto triplet : result) {
        cout << "[ ";

        for (int x : triplet) {
            cout << x << " ";
        }

        cout << "]\n";
    }

    return 0;
}