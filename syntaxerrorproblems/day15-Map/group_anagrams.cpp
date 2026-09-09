#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> strs = {
        "eat", "tea", "tan", "ate", "nat", "bat"
    };

    unordered_map<string, vector<string>> mp;

    for (string s : strs) {

        string sortedStr = s;

        sort(sortedStr.begin(), sortedStr.end());

        mp[sortedStr].push_back(s);
    }

    cout << "Grouped Anagrams:\n";

    for (auto it : mp) {

        cout << "[ ";

        for (string s : it.second) {
            cout << s << " ";
        }

        cout << "]\n";
    }

    return 0;
}