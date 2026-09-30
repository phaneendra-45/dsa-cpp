#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {
    int n = s.length();
    int ans = 0;

    for (int i = 0; i < n; i++) {

        vector<int> freq(26, 0);

        for (int j = i; j < n; j++) {

            freq[s[j] - 'A']++;

            int maxFreq = 0;

            for (int x = 0; x < 26; x++) {
                maxFreq = max(maxFreq, freq[x]);
            }

            int windowLength = j - i + 1;

            int changes = windowLength - maxFreq;

            if (changes <= k) {
                ans = max(ans, windowLength);
            }
        }
    }

    return ans;
}

int main() {
    string s = "AABABBA";
    int k = 1;

    cout << "Longest Substring Length: "
         << characterReplacement(s, k);

    return 0;
}