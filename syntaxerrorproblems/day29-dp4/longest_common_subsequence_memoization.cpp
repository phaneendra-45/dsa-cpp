#include <bits/stdc++.h>
using namespace std;

int LCS(string X, string Y, int n, int m,
        vector<vector<int>>& dp) {

    if (n == 0 || m == 0)
        return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    if (X[n - 1] == Y[m - 1]) {
        return dp[n][m] =
            1 + LCS(X, Y, n - 1, m - 1, dp);
    }

    else {
        return dp[n][m] = max(
            LCS(X, Y, n - 1, m, dp),
            LCS(X, Y, n, m - 1, dp)
        );
    }
}

int main() {
    string X = "abcde";
    string Y = "ace";

    int n = X.length();
    int m = Y.length();

    vector<vector<int>> dp(n + 1,
                           vector<int>(m + 1, -1));

    cout << "LCS Length: "
         << LCS(X, Y, n, m, dp);

    return 0;
}