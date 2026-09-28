class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(1LL*nums[i] * nums[i]);
        }
        sort(ans.begin(), ans.end());
        long long sum = 0;
       long long n = nums.size();
        for (int i = n - 1; i >= n / 2; i--) {
            sum += ans[i];
        }
        for (int i = 0; i < n / 2; i++) {
            sum -= ans[i];
        }
        return sum;
    }
};