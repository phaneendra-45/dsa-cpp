#include<bits/stdc++.h>
using namespace std;
int main (){
    int a=9,b=10,c=11;
    int result = (a>b && a>c) ? a : (b>c ? b : c);
    cout<<result;

}
/* we can use max function as well */