#include<bits/stdc++.h>
using namespace std;
int main(){
    int expo = 4;
    double base = 2;
    double res = 1;
    while(expo>0){
        res *= base;
        expo--;
    }
    while(expo<0){
        res /= base;
        expo++;
    }
    cout<< res;
    return 0;
}