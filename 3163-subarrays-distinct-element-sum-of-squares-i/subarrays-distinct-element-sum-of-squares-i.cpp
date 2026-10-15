class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            unordered_set<int> st;
            for (int j = i; j < n; j++) {
                st.insert(nums[j]);
                int d = st.size();
                ans += d * d;
            }
        }
        return ans;
    }
};