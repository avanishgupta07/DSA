class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int freq[51] = {};

        for (int x : nums) {
            freq[x]++;
        }

        int ans = 0;

        for (int i = 1; i <= 50; i++) {
            if (freq[i] == 2) {
                ans ^= i;
            }
        }

        return ans;
    }
};