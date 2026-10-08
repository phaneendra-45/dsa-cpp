#include <bits/stdc++.h>
using namespace std;

// 1. Better Approach - 1
// Using Factorial
long long nCrUsingFactorial(int n, int r) {
    if (r > n)
        return 0;

    long long factN = 1;
    long long factR = 1;
    long long factNR = 1;

    for (int i = 1; i <= n; i++)
        factN *= i;

    for (int i = 1; i <= r; i++)
        factR *= i;

    for (int i = 1; i <= n - r; i++)
        factNR *= i;

    return factN / (factR * factNR);
}


// 2. Better Approach - 2
// Avoiding Factorial Computations
long long nCrAvoidingFactorial(int n, int r) {
    if (r > n)
        return 0;

    r = min(r, n - r);

    long long result = 1;

    for (int i = 0; i < r; i++) {
        result = result * (n - i) / (i + 1);
    }

    return result;
}


// 3. Expected Approach
// Using Binomial Coefficient Formula
long long nCrUsingBinomialFormula(int n, int r) {
    if (r > n)
        return 0;

    r = min(r, n - r);

    long long result = 1;

    for (int i = 1; i <= r; i++) {
        result = result * (n - r + i) / i;
    }

    return result;
}


// 4. Alternate Approach
// Using Logarithmic Formula
long long nCrUsingLogFormula(int n, int r) {
    if (r > n)
        return 0;

    r = min(r, n - r);

    long double logResult = 0;

    for (int i = 1; i <= r; i++) {
        logResult += log((long double)(n - r + i));
        logResult -= log((long double)i);
    }

    return (long long)round(exp(logResult));
}


int main() {

    int n = 5;
    int r = 2;

    cout << "n = " << n << ", r = " << r << "\n\n";

    cout << "1. Using Factorial: ";
    cout << nCrUsingFactorial(n, r) << endl;

    cout << "2. Avoiding Factorial Computations: ";
    cout << nCrAvoidingFactorial(n, r) << endl;

    cout << "3. Using Binomial Coefficient Formula: ";
    cout << nCrUsingBinomialFormula(n, r) << endl;

    cout << "4. Using Logarithmic Formula: ";
    cout << nCrUsingLogFormula(n, r) << endl;

    return 0;
}