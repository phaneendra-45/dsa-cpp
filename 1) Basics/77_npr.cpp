#include <bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    long long result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

long long nPr(int n, int r)
{
    if (r > n)
        return 0;

    return fact(n) / fact(n - r);
}

long long nPr2(int n, int r)
{
    if (r > n)
        return 0;

    long long ans = 1;

    for (int i = 0; i < r; i++)
        ans *= (n - i);

    return ans;
} 

int main()
{
    int n = 5;
    int r = 2;

    cout << nPr(n, r) << endl;
    cout << nPr2(n, r) << endl;

    return 0;
}






