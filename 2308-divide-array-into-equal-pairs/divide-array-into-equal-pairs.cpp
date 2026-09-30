class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        for (auto it : mp) {
            if (it.second % 2 != 0) {
                return false;
            }
        }
        return true;
    }
};