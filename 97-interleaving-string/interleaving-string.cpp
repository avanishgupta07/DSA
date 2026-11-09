class Solution {
public:
    int solve(int i, int j, string& s1, string& s2,
              string& s3, vector<vector<int>>& dp) {
        int k = i + j;
        if (k == s3.size()) {
            return 1;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        int take1 = 0;
        int take2 = 0;
        if (i < s1.size() && s1[i] == s3[k]) {
            take1 = solve(i + 1, j, s1, s2, s3, dp);
        }
        if (j < s2.size() && s2[j] == s3[k]) {
            take2 = solve(i, j + 1, s1, s2, s3, dp);
        }

        return dp[i][j] = take1 || take2;
    }
    bool isInterleave(string s1, string s2, string s3) {

        int m = s1.size();
        int n = s2.size();

        if (m + n != s3.size()) {
            return false;
        }
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return solve(0, 0, s1, s2, s3, dp);
    }
};