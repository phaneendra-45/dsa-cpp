#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1. Recursion
int recursive(vector<int>& arr, int index, int prev) {
    if (index == arr.size())
        return 0;

    // Skip current element
    int skip = recursive(arr, index + 1, prev);

    // Take current element
    int take = 0;

    if (prev == -1 || arr[index] > arr[prev]) {
        take = 1 + recursive(arr, index + 1, index);
    }

    return max(take, skip);
}

// 2. Memoization
int memoHelper(vector<int>& arr, int index, int prev,
               vector<vector<int>>& dp) {
    if (index == arr.size())
        return 0;

    // prev + 1 converts -1 into index 0
    if (dp[index][prev + 1] != -1)
        return dp[index][prev + 1];

    int skip = memoHelper(arr, index + 1, prev, dp);

    int take = 0;

    if (prev == -1 || arr[index] > arr[prev]) {
        take = 1 + memoHelper(arr, index + 1, index, dp);
    }

    return dp[index][prev + 1] = max(take, skip);
}

// 3. Tabulation
int tabulation(vector<int>& arr) {
    int n = arr.size();

    vector<vector<int>> dp(n + 1,
                           vector<int>(n + 1, 0));

    // Traverse from right to left
    for (int index = n - 1; index >= 0; index--) {

        // prev = -1 to index - 1
        for (int prev = index - 1; prev >= -1; prev--) {

            int skip = dp[index + 1][prev + 1];

            int take = 0;

            if (prev == -1 || arr[index] > arr[prev]) {
                take = 1 + dp[index + 1][index + 1];
            }

            dp[index][prev + 1] = max(take, skip);
        }
    }

    return dp[0][0];
}

int main() {
    vector<int> arr = {10, 9, 2, 5, 3, 7, 101, 18};

    int n = arr.size();

    vector<vector<int>> dp(n + 1,
                           vector<int>(n + 1, -1));

    cout << "Recursion: "
         << recursive(arr, 0, -1) << endl;

    cout << "Memoization: "
         << memoHelper(arr, 0, -1, dp) << endl;

    cout << "Tabulation: "
         << tabulation(arr) << endl;

    return 0;
}