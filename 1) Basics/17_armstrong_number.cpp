#include<bits/stdc++.h>
using namespace std;
int main (){
    int n = 153;
    int original = n,sum=0,digits=0,digit;
    int temp = n;
    while(temp>0){
      temp/=10;
      digits++;
    }
    temp =n;
    while(temp>0){
     digit = temp % 10;
     sum += pow(digit,digits);
     temp /= 10;
    }
    if (sum==original){
        cout<< "It is Armstrong Number";
    }
    else {
        cout<< "Its not an Armstrong Number";
    }
}