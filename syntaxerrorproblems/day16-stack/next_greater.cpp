#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {4, 5, 2, 10};

    int n = arr.size();

    vector<int> ans(n);

    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {

        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();

        st.push(arr[i]);
    }

    cout << "Next Greater: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}