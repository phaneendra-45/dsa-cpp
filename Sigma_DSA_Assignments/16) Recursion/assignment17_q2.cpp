#include<bits/stdc++.h>
using namespace std;    

void allOccurences(int arr[], int key, int i, int n) {
if(i == n) {
return;
}
if(arr[i] == key) {
cout << i << " ";
}
allOccurences(arr, key, i+1, n);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    allOccurences(arr, key, 0, n);
    return 0;
}