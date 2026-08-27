#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};

    int largest = -1;
    int secondLargest = -1;

    for (int x : nums) {
        if (x > largest) {
            secondLargest = largest;
            largest = x;
        }
        else if (x > secondLargest && x != largest) {
            secondLargest = x;
        }
    }

    cout << secondLargest;

    return 0;
}