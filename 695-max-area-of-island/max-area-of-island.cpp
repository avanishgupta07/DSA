class Solution {
public:
    int dfs(int i, int j, vector<vector<bool>>& vis, vector<vector<int>>& grid,
            int n, int m) {
        if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] ||
            grid[i][j] != 1) {
            return 0;
        }
        vis[i][j] = true;
        int area = 1;
        area += dfs(i + 1, j, vis, grid, n, m);
        area += dfs(i, j + 1, vis, grid, n, m);
        area += dfs(i - 1, j, vis, grid, n, m);
        area += dfs(i, j - 1, vis, grid, n, m);
        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int islands = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && !vis[i][j]) {
                    int area = dfs(i, j, vis, grid, n, m);
                    islands = max(islands, area);
                }
            }
        }
        return islands;
    }
};
