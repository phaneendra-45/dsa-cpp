#include<bits/stdc++.h>
using namespace std;

int main(){
   // question 1 triangle pattern
 bool val = true;
int n = 5;
for(int i=0; i<n; i++) {
for(int j=0; j<=i; j++) {
cout << val << " ";
val = !val;
}
cout << "\n";
}

// question 2 rhombus pattern
int n2 = 5;
for(int i=0; i<n2; i++) {
//spaces
for(int j=0; j<=n2-i-1; j++) {
cout << " ";
}
//stars
for(int j=0; j<n2; j++) {
cout << "*";
}
cout << endl;
}

//question 3 palindrome pattern with numbers

int n3 = 5;
for(int i=1; i<=n3; i++) {
//spaces
for(int j=1; j<=n-i; j++) {
cout << " ";
}
//nums backward
for(int j=i; j>=1; j--) {
cout << j;
}
//nums forward
for(int j=2; j<=i; j++) {
cout << j;
}
cout << endl;
}

return 0;
}