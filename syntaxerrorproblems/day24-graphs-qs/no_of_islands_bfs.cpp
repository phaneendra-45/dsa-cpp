#include <bits/stdc++.h>
using namespace std;

int numIslands(vector<vector<char>>& grid) {

    int n = grid.size();
    int m = grid[0].size();

    int count = 0;

    int dr[4] = {1, -1, 0, 0};
    int dc[4] = {0, 0, 1, -1};

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            if (grid[i][j] == '1') {

                count++;

                queue<pair<int, int>> q;

                q.push({i, j});

                grid[i][j] = '0';

                while (!q.empty()) {

                    auto [r, c] = q.front();
                    q.pop();

                    for (int k = 0; k < 4; k++) {

                        int nr = r + dr[k];
                        int nc = c + dc[k];

                        if (nr >= 0 && nc >= 0 &&
                            nr < n && nc < m &&
                            grid[nr][nc] == '1') {

                            grid[nr][nc] = '0';

                            q.push({nr, nc});
                        }
                    }
                }
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