#include<bits/stdc++.h>
using namespace std;
int getDivisorsSum(int num){
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0)
            sum = sum + i;
    }
    return sum;
}

int main ()
{
    int num1 = 6, num2 = 28;
    
    int sum1 = getDivisorsSum(num1);
    int sum2 = getDivisorsSum(num2);
    
    int r1 = num1/sum1;
    int r2 = num2/sum2;

    if(r1 == r2)
        cout << num1 << " & " << num2 << " are friendly pairs";
    else
        cout << num1 << " & " << num2 << " are not friendly pairs";

    
}