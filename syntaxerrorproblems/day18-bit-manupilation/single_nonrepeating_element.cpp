#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {
        4, 1, 2, 1, 2
    };

    int answer = 0;

    for (int x : nums) {
        answer ^= x;
    }

    cout << "Single non-repeating element = "
         << answer << endl;

    return 0;
}