#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 145;
    int sum=0;
    int temp = num;
    while(temp>0){
        int fact = 1;
       int digit = temp%10;
        for(int i =1;i<=digit;i++){
          fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum==num){
        cout<< "Strong Number"<<" "<< sum;
    }
    else{
        cout<< "Not a Strong Number" << sum;
    }
}