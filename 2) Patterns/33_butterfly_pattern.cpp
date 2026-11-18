#include <bits/stdc++.h>
using namespace std;

void printButterflyPattern(int n)
{
    int spaces = 2 * n - 1;
    int stars = 0;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            stars++;
            spaces -= 2;
        }
        else
        {
            stars--;
            spaces += 2;
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++)
        {
            if (j != n)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
}

int main()
{
    int n = 4;
    printButterflyPattern(n);

    return 0;
}