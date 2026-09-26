#include <bits/stdc++.h>
using namespace std;


// =====================================================
// APPROACH 1: RECURSION
// =====================================================

int fibRecursive(int n) {

    // Base case
    if (n <= 1)
        return n;

    return fibRecursive(n - 1) +
           fibRecursive(n - 2);
}


// =====================================================
// APPROACH 2: MEMOIZATION (TOP-DOWN)
// =====================================================

int fibMemoization(int n, vector<int>& dp) {

    // Base case
    if (n <= 1)
        return n;

    // Already calculated
    if (dp[n] != -1)
        return dp[n];

    // Store result
    dp[n] = fibMemoization(n - 1, dp) +
            fibMemoization(n - 2, dp);

    return dp[n];
}


// =====================================================
// APPROACH 3: TABULATION (BOTTOM-UP)
// =====================================================

int fibTabulation(int n) {

    if (n <= 1)
        return n;

    vector<int> dp(n + 1);

    // Base cases
    dp[0] = 0;
    dp[1] = 1;

    // Build from bottom to top
    for (int i = 2; i <= n; i++) {

        dp[i] = dp[i - 1] +
                dp[i - 2];
    }

    return dp[n];
}


// =====================================================
// MAIN
// =====================================================

int main() {

    // Example input
    int n = 10;

    // -------------------------------
    // 1. Recursive
    // -------------------------------

    cout << "Recursive: "
         << fibRecursive(n) << endl;


    // -------------------------------
    // 2. Memoization
    // -------------------------------

    vector<int> dp(n + 1, -1);

    cout << "Memoization: "
         << fibMemoization(n, dp) << endl;


    // -------------------------------
    // 3. Tabulation
    // -------------------------------

    cout << "Tabulation: "
         << fibTabulation(n) << endl;


    return 0;
}