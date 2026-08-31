#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 8;

    long left = 0;
    long right = x;
    long ans = 0;

    while (left <= right) {
        long mid = left + (right - left) / 2;

        if (mid * mid <= x) {
            ans = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "Square Root: " << ans;

    return 0;
}