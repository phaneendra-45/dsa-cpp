#include <iostream>
#include <vector>
using namespace std;

// 1. Recursion
int recursive(int n) {
    if (n == 0 || n == 1)
        return 1;

    return recursive(n - 1) + recursive(n - 2);
}

// 2. Memoization
int memoHelper(int n, vector<int>& dp) {
    if (n == 0 || n == 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = memoHelper(n - 1, dp)
                 + memoHelper(n - 2, dp);
}

// 3. Tabulation
int tabulation(int n) {
    vector<int> dp(n + 1, 0);

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n = 5;

    vector<int> dp(n + 1, -1);

    cout << "Recursion: " << recursive(n) << endl;

    cout << "Memoization: "
         << memoHelper(n, dp) << endl;

    cout << "Tabulation: "
         << tabulation(n) << endl;

    return 0;
}