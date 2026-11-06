class Solution {
public:
int solve(int i ,int j,vector<vector<int>>&obstacleGrid,  vector<vector<int>>&dp){
    if(i<0 || j<0){
        return 0;
    }
    if(obstacleGrid[i][j]==1){
        return 0;
    }
    if(i==0 && j==0){
        return 1;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int up=solve(i-1,j,obstacleGrid,dp);
    int down=solve(i,j-1,obstacleGrid,dp);
    return dp[i][j]=up+down;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,obstacleGrid,dp);
    }
};