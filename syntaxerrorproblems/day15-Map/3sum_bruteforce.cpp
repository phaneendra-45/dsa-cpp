#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    int n = nums.size();

    set<vector<int>> st;

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            for (int k = j + 1; k < n; k++) {

                if (nums[i] + nums[j] + nums[k] == 0) {

                    vector<int> temp = {
                        nums[i],
                        nums[j],
                        nums[k]
                    };

                    sort(temp.begin(), temp.end());

                    st.insert(temp);
                }
            }
        }
    }

    cout << "Triplets:\n";

    for (auto triplet : st) {

        cout << "[ ";

        for (int x : triplet) {
            cout << x << " ";
        }

        cout << "]\n";
    }

    return 0;
}