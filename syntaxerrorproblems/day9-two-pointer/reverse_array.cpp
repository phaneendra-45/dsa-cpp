#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    int l = 0;
    int r = arr.size() - 1;

    while (l < r) {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }

    cout << "Reversed Array: ";

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}