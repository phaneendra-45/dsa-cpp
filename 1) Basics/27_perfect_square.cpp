#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 16;
    int root = sqrt(num);
    if (root*root == num){
        cout << "Perfect Square" << endl;
    } else {
        cout << "Not a Perfect Square" << endl;
    }
    return 0;
}