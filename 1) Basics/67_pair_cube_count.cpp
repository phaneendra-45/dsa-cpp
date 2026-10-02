#include<bits/stdc++.h>
using namespace std;

int countPairs(int n) {
    int count = 0;

    for (int i = 1; i <= cbrt(n); i++)  {
        int cb = i*i*i;

        int diff = n - cb;

        int cbrtDiff = cbrt(diff);

        if (cbrtDiff*cbrtDiff*cbrtDiff == diff)
            count++;
    }

    return count;
}

int main() {
 		int n = 9;
        cout << countPairs(n) <<"\n";

    return 0;
}