#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Bubble Sort: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}


void selectionSort(vector<int> arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        swap(arr[i], arr[maxIndex]);
    }

    cout << "Selection Sort: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}


void insertionSort(vector<int> arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << "Insertion Sort: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}


void countingSort(vector<int> arr) {
    int maxElement = *max_element(arr.begin(), arr.end());

    vector<int> count(maxElement + 1, 0);

    for (int x : arr) {
        count[x]++;
    }

    cout << "Counting Sort: ";

    for (int i = maxElement; i >= 0; i--) {
        while (count[i] > 0) {
            cout << i << " ";
            count[i]--;
        }
    }

    cout << endl;
}


int main() {

    vector<int> arr = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};

    cout << "Original Array: ";
    for (int x : arr)
        cout << x << " ";

    cout << "\n";

    bubbleSort(arr);
    selectionSort(arr);
    insertionSort(arr);
    countingSort(arr);

    return 0;
}