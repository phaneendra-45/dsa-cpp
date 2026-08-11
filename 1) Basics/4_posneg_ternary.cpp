#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 45;
    if (n==0){
        cout<<"Zero";
    }
    else{
        string result = (n>0) ? "Positive" : "Negative";
        cout<<result;
    }
return 0;
}