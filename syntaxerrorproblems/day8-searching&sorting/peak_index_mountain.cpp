#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0, 2, 5, 3, 1};

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        }
        else {
            right = mid;
        }
    }

    cout << "Peak Index: " << left;

    return 0;
}