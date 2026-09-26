class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.length();
        string ans;
        unordered_map<string, string> mp;
        for (auto& it : knowledge) {
            mp[it[0]] = it[1];
        }
        for (int i = 0; i < n; i++) {
            if (s[i] != '(') {
                ans += s[i];
            } else {
                int j = i + 1;
                string key;
                while (s[j] != ')') {
                    key += s[j];
                    j++;
                }
                if (mp.find(key) != mp.end()) {
                    ans += mp[key];
                } else {
                    ans += '?';
                }
                    i=j;
            }
        }
        return ans;
    }
};