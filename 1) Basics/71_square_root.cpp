#include <iostream>
using namespace std;

int floorSqrt(int n) {
    int res = 1;
    while(res*res <= n){
        res++;
    }
    
    return res - 1;
}

int main() {
    int n = 11;
    cout << floorSqrt(n);
    return 0;
}