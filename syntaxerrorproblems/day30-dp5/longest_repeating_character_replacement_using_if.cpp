#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {
    int n = s.length();

    vector<int> freq(26, 0);

    int L = 0;
    int maxFreq = 0;

    for (int R = 0; R < n; R++) {

        freq[s[R] - 'A']++;

        maxFreq = max(maxFreq, freq[s[R] - 'A']);

        if ((R - L + 1) - maxFreq > k) {

            freq[s[L] - 'A']--;

            L++;
        }
    }

    return n - L;
}

int main() {
    string s = "AABABBA";
    int k = 1;

    cout << "Longest Substring Length: "
         << characterReplacement(s, k);

    return 0;
}