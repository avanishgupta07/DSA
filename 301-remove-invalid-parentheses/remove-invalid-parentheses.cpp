class Solution {
public:
    bool valid(string s) {
        int cnt = 0;

        for (char c : s) {
            if (c == '(') cnt++;
            else if (c == ')') {
                cnt--;
                if (cnt < 0) return false;
            }
        }

        return cnt == 0;
    }

    vector<string> removeInvalidParentheses(string s) {
        set<string> st;
        st.insert(s);

        while (true) {
            vector<string> ans;

            for (string x : st) {
                if (valid(x))
                    ans.push_back(x);
            }

            if (!ans.empty())
                return ans;

            set<string> next;

            for (string x : st) {
                for (int i = 0; i < x.size(); i++) {
                    if (x[i] == '(' || x[i] == ')') {
                        next.insert(x.substr(0, i) + x.substr(i + 1));
                    }
                }
            }

            st = next;
        }
    }
};