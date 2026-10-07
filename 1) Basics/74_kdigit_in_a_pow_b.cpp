#include <bits/stdc++.h>
using namespace std;

int kthDigit(int a, int b, int k){
    
    long long mod = pow(10LL, k); 
    long long res = 1;
    long long base = a;

    while (b > 0) {
        if (b & 1) {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        b >>= 1;
    }
    
    for (int i = 1; i < k; i++)
            res /= 10;

    return (int)(res);
}

int main(){
    
    int a = 5, b = 2;
    int k = 1;
    cout << kthDigit(a, b, k); 
    return 0;
}