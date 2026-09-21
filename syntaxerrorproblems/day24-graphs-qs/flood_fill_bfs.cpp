#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> floodFill(
    vector<vector<int>>& image,
    int sr,
    int sc,
    int newColor) {

    int n = image.size();
    int m = image[0].size();

    int oldColor = image[sr][sc];

    // Nothing to change
    if (oldColor == newColor)
        return image;

    queue<pair<int, int>> q;

    q.push({sr, sc});

    // Mark starting cell
    image[sr][sc] = newColor;

    int dr[4] = {1, -1, 0, 0};
    int dc[4] = {0, 0, 1, -1};

    while (!q.empty()) {

        auto [r, c] = q.front();
        q.pop();

        for (int k = 0; k < 4; k++) {

            int nr = r + dr[k];
            int nc = c + dc[k];

            if (nr >= 0 && nc >= 0 &&
                nr < n && nc < m &&
                image[nr][nc] == oldColor) {

                image[nr][nc] = newColor;

                q.push({nr, nc});
            }
        }
    }

    return image;
}

int main() {

    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };

    int sr = 1;
    int sc = 1;
    int newColor = 2;

    image = floodFill(image, sr, sc, newColor);

    cout << "Flood Filled Image:\n";

    for (auto row : image) {

        for (int value : row) {
            cout << value << " ";
        }

        cout << endl;
    }

    return 0;
}