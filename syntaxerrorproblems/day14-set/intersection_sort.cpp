#include <bits/stdc++.h>
using namespace std;

int main() {

    // Input
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> result;

    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size()) {

        if (nums1[i] == nums2[j]) {

            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }

            i++;
            j++;
        }
        else if (nums1[i] < nums2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    cout << "Intersection: ";

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}