#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 376;
    int temp = num;
    int square = num * num;
    bool isAutomorphic = true;
    while(temp >0){
        if(temp%10 != square%10){
            isAutomorphic = false;
            break;
        }
        temp /= 10;
        square /= 10;
    }
    if(isAutomorphic){
        cout << "The number is automorphic." << endl;
    }
    else{
        cout << "The number is not automorphic." << endl;
    }
}