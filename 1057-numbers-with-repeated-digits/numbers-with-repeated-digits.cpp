class Solution {
public:
    int numDupDigitsAtMostN(int n) {
        string s = to_string(n);
        int len = s.size();

        int unique = 0;

        int perm = 9;

        for (int digits = 1; digits < len; digits++) {
            unique += perm;

            perm *= (10 - digits);
        }


        for (int i = 0; i < len; i++) {

            int cur = s[i] - '0';

            int smaller = 0;

            for (int d = (i == 0 ? 1 : 0); d < cur; d++) {

                bool used = false;

                for (int j = 0; j < i; j++) {
                    if (s[j] - '0' == d) {
                        used = true;
                        break;
                    }
                }

                if (!used)
                    smaller++;
            }

            int remaining = len - i - 1;

            int ways = 1;

            for (int k = 0; k < remaining; k++) {
                ways *= (10 - i - 1 - k);
            }

            unique += smaller * ways;

            bool repeated = false;

            for (int j = 0; j < i; j++) {
                if (s[j] == s[i]) {
                    repeated = true;
                    break;
                }
            }

            if (repeated)
                return n - unique;
        }

        unique++;

        return n - unique;
    }
};