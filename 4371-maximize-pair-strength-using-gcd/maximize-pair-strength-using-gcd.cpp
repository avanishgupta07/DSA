class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long ans = INT_MIN;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i+1; j < n; j++) {
                long long g = gcd(nums[i], nums[j]);
                long long result = (1LL * nums[i] * nums[j]) / (g * g);
                ans = max(result, ans);
            }
        }
        return ans;
    }
};