class Solution {
public:
    bool solve(vector<vector<char>>& grid, int i, int j, int balance,
               vector<vector<vector<int>>>& dp) {
        if (grid[i][j] == '(') {
            balance++;
        } else {
            balance--;
        }
        if (balance < 0) {
            return false;
        }
        if (dp[i][j][balance] != -1) {
            return dp[i][j][balance];
        }
        if (i == grid.size() - 1 && j == grid[0].size() - 1) {
            return dp[i][j][balance] = (balance == 0);
        }
        if (j + 1 < grid[0].size()) {
            if (solve(grid, i, j + 1, balance, dp))
                return true;
        }
        if (i + 1 < grid.size()) {
            if (solve(grid, i + 1, j, balance, dp))
                return true;
        }
        return dp[i][j][balance] = false;
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        if ((n + m - 1) % 2 == 1) {
            return false;
        }
        if (grid[0][0] == ')') {
            return false;
        }
        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(m, vector<int>( n + m + 1, -1)));
        return solve(grid, 0, 0, 0, dp);
    }
};