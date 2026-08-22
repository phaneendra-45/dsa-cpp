#include<bits/stdc++.h>
using namespace std;
int main (){
    int num =153;
    int temp = num;
    int sum=0;
    while(temp>0){
        sum += temp%10;
        temp /=10;
    }
    if (num%sum==0){
        cout<< "Its a Harshad Number";
    }
    else{
        cout<< "Its not a Harshad Number";
    }
}