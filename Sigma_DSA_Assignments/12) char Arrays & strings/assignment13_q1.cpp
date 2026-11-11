#include<bits/stdc++.h>
using namespace std;

int getVowelCount(string str) {
int vowCount = 0;
for(int i=0; i<str.length(); i++) {
if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
vowCount++;
}
}
return vowCount;
}

int main () {
    string str = "Hello, how are you?";
    int vowelCount = getVowelCount(str);
    cout << vowelCount << endl;
    return 0;
}

