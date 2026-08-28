#include<bits/stdc++.h>
using namespace std;

string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main (){
    string a = reverseString("malayalam");
    string b = reverseString("dog");
    cout<< a << endl;
    cout<< b << endl;
}