#include<bits/stdc++.h>
using namespace std;

string toLowerCase(string s) {
for (char &c : s)
c = tolower(c);
return s;
}
int main(){
    string x= toLowerCase("PHANI IS A GOOD BOY");
    cout<< x;

}