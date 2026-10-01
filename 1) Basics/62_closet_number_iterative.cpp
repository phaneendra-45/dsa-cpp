#include <bits/stdc++.h>
using namespace std;

int closestNumber(int n, int m) {
    
    int closest = 0;
    int minDifference = INT_MAX;

    for (int i = n - abs(m); i <= n + abs(m); ++i) {
        if (i % m == 0) {
            int difference = abs(n - i);

            if (difference < minDifference || 
               (difference == minDifference && abs(i) > abs(closest))) {
                closest = i;
                minDifference = difference;
            }
        }
    }
    return closest;
}

int main() {
    int n = 13, m = 4;
    cout << closestNumber(n, m) << endl;
    
    return 0;
}