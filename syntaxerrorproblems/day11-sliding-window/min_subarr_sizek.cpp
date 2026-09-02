#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    int i = 0;
    int j = 0;
    int sum = 0;
    int ans = INT_MAX;

    while (j < arr.size()) {

        sum += arr[j];

        if (j - i + 1 < k) {
            j++;
        }
        else {
            ans = min(ans, sum);

            sum -= arr[i];

            i++;
            j++;
        }
    }

    cout << "Minimum Sum: " << ans;

    return 0;
}