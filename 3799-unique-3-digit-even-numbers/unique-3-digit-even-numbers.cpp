class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        int ans = 0;
        vector<int> combinations;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (digits[i] != 0 && i != j && i != k && j != k) {
                        int nums = digits[i] * 100 + digits[j] * 10 + digits[k];
                        if (find(combinations.begin(), combinations.end(),
                                 nums) == combinations.end()) {
                            combinations.push_back(nums);
                        }
                    }
                }
            }
        }
        for (auto x : combinations) {
            if (x % 2 == 0) {
                ans++;
            }
        }
        return ans;
    }
};