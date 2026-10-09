#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> primeFac(int n) {
    vector<int> res;
    if (n % 2 == 0) {
        res.push_back(2);
        while (n % 2 == 0) n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            res.push_back(i);
            while (n % i == 0) n /= i;
        }
    }

    if (n > 2) res.push_back(n);

    return res;
}

int main() {
    int n = 100;
    vector<int> result = primeFac(n);
    for (int factor : result) {
        cout << factor << " ";
    }
    return 0;
}