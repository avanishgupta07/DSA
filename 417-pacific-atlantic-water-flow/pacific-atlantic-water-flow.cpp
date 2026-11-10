
class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& heights,
             vector<vector<bool>>& vis, int prev) {

        int n = heights.size();
        int m = heights[0].size();

        if (i < 0 || j < 0 || i >= n || j >= m ||
            vis[i][j] || heights[i][j] < prev) {
            return;
        }

        vis[i][j] = true;

        dfs(i + 1, j, heights, vis, heights[i][j]);
        dfs(i - 1, j, heights, vis, heights[i][j]);
        dfs(i, j + 1, heights, vis, heights[i][j]);
        dfs(i, j - 1, heights, vis, heights[i][j]);
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<bool>> pacific(n, vector<bool>(m, false));
        vector<vector<bool>> atlantic(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            dfs(i, 0, heights, pacific, 0);
        }

        for (int j = 0; j < m; j++) {
            dfs(0, j, heights, pacific, 0);
        }

        for (int i = 0; i < n; i++) {
            dfs(i, m - 1, heights, atlantic, 0);
        }

        for (int j = 0; j < m; j++) {
            dfs(n - 1, j, heights, atlantic, 0);
        }

        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (pacific[i][j] && atlantic[i][j]) {
                    ans.push_back({i, j});
                }
            }
        }

        return ans;
    }
};
