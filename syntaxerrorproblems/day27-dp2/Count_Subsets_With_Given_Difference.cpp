#include <bits/stdc++.h>
using namespace std;

int countSubsetsWithSum(
    vector<int>& arr,
    int target) {

    int n = arr.size();

    vector<vector<int>> dp(
        n + 1,
        vector<int>(target + 1, 0)
    );

    
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {

        for (int j = 0; j <= target; j++) {

            dp[i][j] = dp[i - 1][j];

            if (arr[i - 1] <= j) {

                dp[i][j] +=
                    dp[i - 1][j - arr[i - 1]];
            }
        }
    }

    return dp[n][target];
}

int countSubsetsWithDiff(
    vector<int>& arr,
    int diff) {

    int sum = accumulate(
        arr.begin(),
        arr.end(),
        0
    );

    if ((sum + diff) % 2 != 0)
        return 0;

    int target =
        (sum + diff) / 2;

    return countSubsetsWithSum(arr, target);
}

int main() {

    vector<int> arr = {
        1, 1, 2, 3
    };

    int diff = 1;

    cout << "Count = "
         << countSubsetsWithDiff(arr, diff);

    return 0;
}