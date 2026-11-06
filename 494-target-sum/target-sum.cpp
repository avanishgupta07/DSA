class Solution {
public:
    int count = 0;
    void helper(vector<int>& nums, int index, int sum, int target) {
        if (index == nums.size()) {
            if (sum == target) {
                count++;
            }
            return;
        }
        helper(nums, index + 1, sum + nums[index], target);
        helper(nums, index + 1, sum - nums[index], target);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        helper(nums, 0, 0, target);
        return count;
    }
};