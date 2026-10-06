class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '[') {
                st.push('[');
            } else {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                } else{
                    count++;
                }
            }
        }
        return (count+1) / 2;
    }
};