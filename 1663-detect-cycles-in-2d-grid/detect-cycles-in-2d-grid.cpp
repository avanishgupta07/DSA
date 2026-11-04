
class Solution {
public:
    int m, n;
    vector<vector<bool>> visited;
    vector<vector<char>> g;

    bool dfs(int x, int y, int px, int py, char ch) {

        visited[x][y] = true;

        int dirs[4][2] = {
            {1, 0}, {-1, 0}, {0, 1}, {0, -1}
        };

        for (auto& d : dirs) {

            int nx = x + d[0];
            int ny = y + d[1];

            if (nx < 0 || ny < 0 || nx >= m || ny >= n)
                continue;

            if (g[nx][ny] != ch)
                continue;

            if (nx == px && ny == py)
                continue;

            if (visited[nx][ny] || dfs(nx, ny, x, y, ch))
                return true;
        }

        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {

        m = grid.size();
        n = grid[0].size();

        g = grid;
        visited.assign(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (!visited[i][j]) {

                    if (dfs(i, j, -1, -1, g[i][j]))
                        return true;
                }
            }
        }

        return false;
    }
};
