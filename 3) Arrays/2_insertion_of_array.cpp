
#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Original Array
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    
    // 1. INSERT AT BEGINNING

    // Custom Logic
    int value1 = 5;

    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = value1;
    n++;

    cout << "\n\nAfter Inserting at Beginning (Custom): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    // Built-in Logic (vector insert)
    vector<int> v = {10, 20, 30, 40, 50};

    v.insert(v.begin(), 5);

    cout << "\nAfter Inserting at Beginning (Built-in): ";
    for (int x : v) {
        cout << x << " ";
    }


    // 2. INSERT AT GIVEN POSITION

    // Custom Logic
    int arr2[10] = {10, 20, 30, 40, 50};
    int size = 5;

    int position = 3;  // 1-based position
    int value2 = 25;

    for (int i = size; i >= position; i--) {
        arr2[i] = arr2[i - 1];
    }

    arr2[position - 1] = value2;
    size++;

    cout << "\n\nAfter Inserting at Position (Custom): ";
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }


    // Built-in Logic
    vector<int> v2 = {10, 20, 30, 40, 50};

    v2.insert(v2.begin() + position - 1, value2);

    cout << "\nAfter Inserting at Position (Built-in): ";
    for (int x : v2) {
        cout << x << " ";
    }


    // 3. INSERT AT END

    // Custom Logic
    int arr3[10] = {10, 20, 30, 40, 50};
    int size3 = 5;

    int value3 = 60;

    arr3[size3] = value3;
    size3++;

    cout << "\n\nAfter Inserting at End (Custom): ";
    for (int i = 0; i < size3; i++) {
        cout << arr3[i] << " ";
    }


    // Built-in Logic
    vector<int> v3 = {10, 20, 30, 40, 50};

    v3.push_back(value3);

    cout << "\nAfter Inserting at End (Built-in): ";
    for (int x : v3) {
        cout << x << " ";
    }

    return 0;
}
