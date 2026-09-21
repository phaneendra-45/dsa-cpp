#include <bits/stdc++.h>
using namespace std;

void dfs(int r, int c,
         vector<vector<int>>& image,
         int oldColor,
         int newColor) {

    int n = image.size();
    int m = image[0].size();

    image[r][c] = newColor;

    int dr[4] = {1, -1, 0, 0};
    int dc[4] = {0, 0, 1, -1};

    for (int k = 0; k < 4; k++) {

        int nr = r + dr[k];
        int nc = c + dc[k];

        if (nr >= 0 && nc >= 0 &&
            nr < n && nc < m &&
            image[nr][nc] == oldColor) {

            dfs(nr, nc, image,
                oldColor, newColor);
        }
    }
}

vector<vector<int>> floodFill(
    vector<vector<int>>& image,
    int sr,
    int sc,
    int newColor) {

    int oldColor = image[sr][sc];

    if (oldColor == newColor)
        return image;

    dfs(sr, sc, image,
        oldColor, newColor);

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