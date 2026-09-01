#include <bits/stdc++.h>
using namespace std;

int main() {
    int candies[] = {3, 2, 1, 4};

    int N = 4;
    int K = 2;

    sort(candies, candies + N);

    int minCost = 0;
    int maxCost = 0;

    // Minimum cost
    int buy = 0;
    int freeIdx = N - 1;

    while (buy <= freeIdx) {
        minCost += candies[buy];

        buy++;
        freeIdx -= K;
    }

    // Maximum cost
    buy = N - 1;
    freeIdx = 0;

    while (freeIdx <= buy) {
        maxCost += candies[buy];

        buy--;
        freeIdx += K;
    }

    cout <<  minCost << endl;
    cout <<  maxCost << endl;

    return 0;
}