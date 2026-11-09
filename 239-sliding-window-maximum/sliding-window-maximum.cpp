
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        multiset<int> ms;

        for (int i = 0; i < nums.size(); i++) {
            ms.insert(nums[i]);

            if (i >= k) {
                ms.erase(ms.find(nums[i - k]));
            }

            if (i >= k - 1) {
                ans.push_back(*ms.rbegin());
            }
        }

        return ans;
    }
};
