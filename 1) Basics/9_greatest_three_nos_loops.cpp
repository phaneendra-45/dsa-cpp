#include <bits/stdc++.h>
using namespace std;
int main (){
    int a=7,b=9,c=5;
    if (a>b && a>c){
        cout<< a << " is the greatest number";
    }
    else if (b>a && b >c){
        cout<< b << " is the greatest number";
    }
    else{
        cout<< c << " is the greatest number";
    }
}