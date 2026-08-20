#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=49;

    double root = sqrt(n);

    if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
        cout << "Perfect Square";
    else
        cout << "Not a Perfect Square";

    return 0;
}