#include <bits/stdc++.h>
using namespace std;

int minimumDifference(vector<int>& arr) {

    int n = arr.size();

    int total = accumulate(
        arr.begin(),
        arr.end(),
        0
    );

    vector<vector<bool>> dp(
        n + 1,
        vector<bool>(total + 1, false)
    );

    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= total; j++) {

            dp[i][j] = dp[i - 1][j];

            if (arr[i - 1] <= j) {

                dp[i][j] =
                    dp[i][j] ||
                    dp[i - 1][j - arr[i - 1]];
            }
        }
    }

    int answer = INT_MAX;

    for (int j = 0; j <= total / 2; j++) {

        if (dp[n][j]) {

            int difference =
                total - 2 * j;

            answer = min(answer, difference);
        }
    }

    return answer;
}

int main() {

    vector<int> arr = {
        1, 6, 11, 5
    };

    cout << "Minimum Subset Sum Difference = "
         << minimumDifference(arr);

    return 0;
}