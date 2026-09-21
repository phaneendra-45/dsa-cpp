#include <bits/stdc++.h>
using namespace std;

void dfs(int r, int c, vector<vector<char>>& grid) {

    int n = grid.size();
    int m = grid[0].size();

    grid[r][c] = '0';

    int dr[4] = {1, -1, 0, 0};
    int dc[4] = {0, 0, 1, -1};

    for (int k = 0; k < 4; k++) {

        int nr = r + dr[k];
        int nc = c + dc[k];

        if (nr >= 0 && nc >= 0 &&
            nr < n && nc < m &&
            grid[nr][nc] == '1') {

            dfs(nr, nc, grid);
        }
    }
}

int numIslands(vector<vector<char>>& grid) {

    int n = grid.size();
    int m = grid[0].size();

    int count = 0;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            if (grid[i][j] == '1') {

                count++;

                dfs(i, j, grid);
            }
        }
    }

    return count;
}

int main() {

    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    cout << "Number of Islands: "
         << numIslands(grid);

    return 0;
}