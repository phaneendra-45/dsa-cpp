#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> score = {
        10, 3, 8, 9, 4
    };

    vector<pair<int, int>> arr;

    for (int i = 0; i < score.size(); i++) {
        arr.push_back({score[i], i});
    }

    
    sort(arr.rbegin(), arr.rend());

    vector<string> answer(score.size());

    
    for (int i = 0; i < arr.size(); i++) {

        int originalIndex = arr[i].second;

        if (i == 0) {
            answer[originalIndex] = "Gold Medal";
        }
        else if (i == 1) {
            answer[originalIndex] = "Silver Medal";
        }
        else if (i == 2) {
            answer[originalIndex] = "Bronze Medal";
        }
        else {
            answer[originalIndex] = to_string(i + 1);
        }
    }

    cout << "Relative Ranks:\n";

    for (string rank : answer) {
        cout << rank << endl;
    }

    return 0;
}