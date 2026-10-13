#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

// Naive Approach
vector<int> sieve(int n) {
    vector<int> res;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            res.push_back(i);
        }
    }

    return res;
}

// Better Approach - Sieve of Eratosthenes
vector<int> sieveBetter(int n) {

    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    vector<int> res;
    for (int p = 2; p <= n; p++){
        if (prime[p]){ 
            res.push_back(p);
        }
    }
    return res;
}

int main() {
    int n = 35;

    vector<int> res = sieve(n);
    cout << "Naive Approach: ";
    for (auto ele : res) {
        cout << ele << ' ';
    }

    cout << endl;

    vector<int> res2 = sieveBetter(n);
    cout << "Better Approach: ";
    for (auto ele : res2) {
        cout << ele << ' ';
    }

    return 0;
}