class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            ans ^= num;
        }
        return ans;
    }
};