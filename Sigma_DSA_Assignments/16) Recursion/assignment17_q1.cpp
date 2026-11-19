#include <bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int si, int ei, int key)
{
    if (si > ei)
    {
        return -1;
    }
    int mid = si + (ei - si) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    { 
        return binSearch(arr, si, mid - 1, key);
    }
    else
    { 
        return binSearch(arr, mid + 1, ei, key);
    }
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int result = binSearch(arr, 0, n - 1, key);
    (result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result;
    return 0;
}