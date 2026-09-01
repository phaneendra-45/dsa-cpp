#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value;
    int weight;
};

bool compare(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;

    return r1 > r2;
}

int main() {
    int W = 50;

    Item arr[] = {
        {60, 10},
        {100, 20},
        {120, 30}
    };

    int n = 3;

    sort(arr, arr + n, compare);

    double ans = 0;

    for (int i = 0; i < n; i++) {

        if (W >= arr[i].weight) {

            W -= arr[i].weight;
            ans += arr[i].value;
        }

        else {

            ans += (double)arr[i].value *
                   ((double)W / arr[i].weight);

            break;
        }
    }

    cout << "Maximum Value: " << ans;

    return 0;
}