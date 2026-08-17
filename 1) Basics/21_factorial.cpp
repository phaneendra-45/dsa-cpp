#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=10;
    int fact = 1;
    for (int i=1;i<=num;i++){
        fact *= i;
    }
    cout<<fact;
}