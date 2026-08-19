#include<bits/stdc++.h>
using namespace std;
int main (){
    int num = 60;
    for (int i =2;i<=num;i++){
        while(num%i==0){
            cout<< i << " ";
            num/=i;
        }
    }
}