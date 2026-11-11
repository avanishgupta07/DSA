
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth,
                          int need1, int need2) {

        long long option1 = 1LL * need1 * cost1 +
                            1LL * need2 * cost2;

        int mini = min(need1, need2);
        int maxi = max(need1, need2);

        long long option2 = 1LL * mini * costBoth +
                            1LL * (need1 - mini) * cost1 +
                            1LL * (need2 - mini) * cost2;

        long long option3 = 1LL * maxi * costBoth;

        return min({option1, option2, option3});
    }
};
