class Solution {
public:
    int helper(vector<int>& nums, int index, int sum, int target,
               vector<vector<int>>& dp) {

        if (index == nums.size()) {
            return sum == target;
        }
        if (dp[index][sum + 10000] != -1) {
            return dp[index][sum + 10000];
        }

        int plus = helper(nums, index + 1,
                          sum + nums[index], target, dp);

        int minus = helper(nums, index + 1,
                           sum - nums[index], target, dp);

        return dp[index][sum + 10000] = plus + minus;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();

        vector<vector<int>> dp(n, vector<int>(20001, -1));

        return helper(nums, 0, 0, target, dp);
    }
};