class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans = INT_MIN;
        int best = values[0] + 0;

        for (int j = 1; j < values.size(); j++) {
            ans = max(ans, best + values[j] - j);

            best = max(best, values[j] + j);
        }

        return ans;
    }
};