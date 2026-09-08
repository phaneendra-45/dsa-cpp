#include <bits/stdc++.h>
using namespace std;

int main() {

    // Input
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> result;

    for (int num : nums2) {

        if (set1.count(num)) {
            result.insert(num);
        }
    }

    cout << "Intersection: ";

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}