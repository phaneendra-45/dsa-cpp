#include <bits/stdc++.h>
using namespace std;

int main() {
    int start=100,end=400;

    for (int num = start; num <= end; num++) {
        int n = num;
        int digits = 0;
        int temp = num;

    
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        int sum = 0;
        temp = num;


        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}