#include <iostream>
#include <vector>
using namespace std;

// 1. Recursion
int recursive(vector<int>& coins, int amount, int n) {
    if (amount == 0) return 1;
    if (n == 0) return 0;

    if (coins[n - 1] > amount)
        return recursive(coins, amount, n - 1);

    int take = recursive(coins, amount - coins[n - 1], n);
    int skip = recursive(coins, amount, n - 1);

    return take + skip;
}

// 2. Memoization
int memoHelper(vector<int>& coins, int amount, int n,
               vector<vector<int>>& dp) {
    if (amount == 0) return 1;
    if (n == 0) return 0;

    if (dp[n][amount] != -1)
        return dp[n][amount];

    if (coins[n - 1] > amount)
        return dp[n][amount] =
            memoHelper(coins, amount, n - 1, dp);

    int take = memoHelper(coins, amount - coins[n - 1], n, dp);
    int skip = memoHelper(coins, amount, n - 1, dp);

    return dp[n][amount] = take + skip;
}

// 3. Tabulation
int tabulation(vector<int>& coins, int amount) {
    int n = coins.size();

    vector<vector<int>> dp(n + 1,
                           vector<int>(amount + 1, 0));

    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= amount; j++) {
            if (coins[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                int take = dp[i][j - coins[i - 1]];
                int skip = dp[i - 1][j];

                dp[i][j] = take + skip;
            }
        }
    }

    return dp[n][amount];
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 5;
    int n = coins.size();

    vector<vector<int>> dp(n + 1,
                           vector<int>(amount + 1, -1));

    cout << "Recursion: " << recursive(coins, amount, n) << endl;

    cout << "Memoization: "
         << memoHelper(coins, amount, n, dp) << endl;

    cout << "Tabulation: "
         << tabulation(coins, amount) << endl;

    return 0;
}