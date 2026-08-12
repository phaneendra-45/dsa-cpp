#include<bits/stdc++.h>
using namespace std;
int main (){
    int n = 23;
    bool isPrime = true;
    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        string result = isPrime ? "Prime number" : "Not a prime number";
        cout << result;
}
return 0;
}
/* we can use sqrt(n),n/2 also even iteration i+2 instead of n in the for loop to reduce time complexity */