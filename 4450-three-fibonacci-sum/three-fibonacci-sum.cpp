class Solution {
public:
    bool threeFibonacciSum(int n) {

        long long a = 0, b = 1;
        while (true) {
            long long c = a + b;
            if (a + b + c == n) {
                return true;
            }
            if (a + b + c > n) {
                return false;
            }
            a = b;
            b = c;
        }
        return false;
    }
};