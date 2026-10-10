#include<iostream>
using namespace std;

int powMod(int x, int n, int M) {
        long res = 1;

    for(int i = 1; i <= n; i++) {
         
        res = (res * x) % M;
    }

    return res;
}


int powMod_2(int x, int n, int M) {
    int res = 1;

    while(n >= 1) {
        
        if(n & 1) {
            res = (res * x) % M;
            
            n--;  
        }
        
        else {
            x = (x * x) % M;
            n /= 2;
        }
    }
    return res;
}


int main() {
    
    int x = 3, n = 2, M = 4;
    cout << powMod(x, n, M) << endl;
    cout << powMod_2(x, n, M) << endl;

    return 0;
}




