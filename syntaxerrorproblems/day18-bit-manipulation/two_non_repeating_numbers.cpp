#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {
        1, 2, 1, 3, 2, 5
    };

    int xorAll = 0;

    for (int num : nums) {
        xorAll ^= num;
    }

    int rightmostBit = xorAll & (-xorAll);

    int x = 0;
    int y = 0;

    for (int num : nums) {

        if (num & rightmostBit)
            x ^= num;
        else
            y ^= num;
    }

    cout << "Two non-repeating numbers: "
         << x << " " << y << endl;

    return 0;
}