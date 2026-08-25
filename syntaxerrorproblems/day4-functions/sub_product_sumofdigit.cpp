#include<bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n) {
int s = 0, p = 1;
while (n) {
int d = n % 10;
s += d;
p *= d;
n /= 10;
}
return p - s;
}
 
int main() {
    int n = 4245;
    cout << subtractProductAndSum(n) << endl;
    return 0;
}