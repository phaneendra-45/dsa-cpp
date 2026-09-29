#include <bits/stdc++.h>
using namespace std;

int LCS(string X, string Y, int n, int m) {

    vector<vector<int>> dp(n + 1,
                           vector<int>(m + 1, 0));

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }

            else {
                dp[i][j] = max(
                    dp[i - 1][j],
                    dp[i][j - 1]
                );
            }
        }
    }

    return dp[n][m];
}

int main() {
    string X = "abcde";
    string Y = "ace";

    int n = X.length();
    int m = Y.length();

    cout << "LCS Length: "
         << LCS(X, Y, n, m);

    return 0;
}