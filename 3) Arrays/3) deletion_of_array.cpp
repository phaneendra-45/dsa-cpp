#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1. DELETE AT BEGINNING

    // Custom Logic
    int arr1[10] = {10, 20, 30, 40, 50};
    int n1 = 5;

    for (int i = 0; i < n1 - 1; i++) {
        arr1[i] = arr1[i + 1];
    }
    n1--;

    cout << "1. Beginning (Custom): ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }

    // Built-in Method
    vector<int> v1 = {10, 20, 30, 40, 50};

    v1.erase(v1.begin());

    cout << "\n   Beginning (Built-in): ";
    for (int x : v1) cout << x << " ";


    // 2. DELETE AT GIVEN POSITION

    // Custom Logic
    int arr2[10] = {10, 20, 30, 40, 50};
    int n2 = 5;

    int position = 3;  // 1-based position

    for (int i = position - 1; i < n2 - 1; i++) {
        arr2[i] = arr2[i + 1];
    }
    n2--;

    cout << "\n\n2. Given Position (Custom): ";
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }

    // Built-in Method
    vector<int> v2 = {10, 20, 30, 40, 50};

    v2.erase(v2.begin() + position - 1);

    cout << "\n   Given Position (Built-in): ";
    for (int x : v2) cout << x << " ";


    // 3. DELETE FIRST OCCURRENCE

    // Custom Logic
    int arr3[10] = {10, 20, 30, 20, 40, 20};
    int n3 = 6;

    int target = 20;
    int index = -1;

    for (int i = 0; i < n3; i++) {
        if (arr3[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (int i = index; i < n3 - 1; i++) {
            arr3[i] = arr3[i + 1];
        }
        n3--;
    }

    cout << "\n\n3. First Occurrence (Custom): ";
    for (int i = 0; i < n3; i++) {
        cout << arr3[i] << " ";
    }

    // Built-in Method
    vector<int> v3 = {10, 20, 30, 20, 40, 20};

    auto it = find(v3.begin(), v3.end(), target);

    if (it != v3.end()) {
        v3.erase(it);
    }

    cout << "\n   First Occurrence (Built-in): ";
    for (int x : v3) cout << x << " ";


    // 4. DELETE ALL OCCURRENCES

    // Custom Logic
    int arr4[10] = {10, 20, 30, 20, 40, 20};
    int n4 = 6;

    target = 20;
    int j = 0;

    for (int i = 0; i < n4; i++) {
        if (arr4[i] != target) {
            arr4[j] = arr4[i];
            j++;
        }
    }
    n4 = j;

    cout << "\n\n4. All Occurrences (Custom): ";
    for (int i = 0; i < n4; i++) {
        cout << arr4[i] << " ";
    }

    // Built-in Method
    vector<int> v4 = {10, 20, 30, 20, 40, 20};

    v4.erase(remove(v4.begin(), v4.end(), target), v4.end());

    cout << "\n   All Occurrences (Built-in): ";
    for (int x : v4) cout << x << " ";


    // 5. DELETE AT END

    // Custom Logic
    int arr5[10] = {10, 20, 30, 40, 50};
    int n5 = 5;

    n5--;

    cout << "\n\n5. End (Custom): ";
    for (int i = 0; i < n5; i++) {
        cout << arr5[i] << " ";
    }

    // Built-in Method
    vector<int> v5 = {10, 20, 30, 40, 50};

    v5.pop_back();

    cout << "\n   End (Built-in): ";
    for (int x : v5) cout << x << " ";

    return 0;
}
