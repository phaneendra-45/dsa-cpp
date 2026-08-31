#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> h = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int ans = 0;
    int n = h.size();

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            int height = min(h[i], h[j]);
            int width = j - i;

            int area = height * width;

            ans = max(ans, area);
        }
    }

    cout << "Maximum Water: " << ans;
    cout << endl;

    return 0;
}