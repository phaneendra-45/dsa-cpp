#include <bits/stdc++.h>
using namespace std;

void numToWords(string num)
{
    string ones[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    string teens[] = {
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    string tens[] = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    int n = stoi(num);

    if (n == 0)
    {
        cout << "zero";
        return;
    }

    if (n >= 1000)
    {
        cout << ones[n / 1000] << " thousand ";
        n %= 1000;
    }

    if (n >= 100)
    {
        cout << ones[n / 100] << " hundred ";
        n %= 100;
    }

    if (n >= 20)
    {
        cout << tens[n / 10] << " ";
        n %= 10;
    }

    if (n >= 10)
    {
        cout << teens[n - 10];
    }
    else if (n > 0)
    {
        cout << ones[n];
    }
}

int main()
{
    numToWords("1121");

    return 0;
}