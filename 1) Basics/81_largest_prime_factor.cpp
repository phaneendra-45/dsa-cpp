#include <iostream>
using namespace std;

int largestPrimeFactor(int n) {

    int largestPrime = -1;
    while (n % 2 == 0) {
        largestPrime = 2;
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0)  {
            largestPrime = i;
            n /= i;
        }
    }
    if (n > 2) {
        largestPrime = n;
    }

    return largestPrime;
}

int largestPrimeFactor_optimized(int n) {
  
    int maxPrime = -1;

    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1;  
    }

    while (n % 3 == 0) {
        maxPrime = 3;
        n = n / 3;
    }
    for (int i = 5; i * i <= n; i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
        while (n % (i + 2) == 0) {
            maxPrime = i + 2;
            n = n / (i + 2);
        }
    }
    if (n > 4)
        maxPrime = n;

    return maxPrime;
}



int main() {
    int n = 15;
    int res = largestPrimeFactor(n);
    cout << res << endl;
    int res2 = largestPrimeFactor_optimized(n);
    cout << res2 << endl;
    return 0;
}





 
