class Solution {
public:
    long long removeZeros(long long n) {
        long long  ans = 0;
        long long  place=1;
        while (n > 0) {
            long long digit = n % 10;
            n = n / 10;

            if (digit != 0) {
                ans += digit*place;
                place*=10;
            }
        }
        return ans;
    }
};