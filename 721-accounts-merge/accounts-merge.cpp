class Solution {
public:
    vector<vector<string>> accountsMerge(
        vector<vector<string>>& accounts) {

        int n = accounts.size();
        vector<int> vis(n, 0);
        vector<vector<string>> ans;

        for (int i = 0; i < n; i++) {

            if (vis[i]) continue;

            queue<int> q;
            set<string> emails;

            q.push(i);
            vis[i] = 1;

            while (!q.empty()) {

                int curr = q.front();
                q.pop();


                for (int j = 1; j < accounts[curr].size(); j++) {
                    emails.insert(accounts[curr][j]);
                }

                for (int k = 0; k < n; k++) {

                    if (vis[k]) continue;

                    bool found = false;

                    for (int x = 1; x < accounts[curr].size(); x++) {
                        for (int y = 1; y < accounts[k].size(); y++) {

                            if (accounts[curr][x] == accounts[k][y]) {
                                found = true;
                                break;
                            }
                        }

                        if (found) break;
                    }

                    if (found) {
                        vis[k] = 1;
                        q.push(k);
                    }
                }
            }

            vector<string> temp;
            temp.push_back(accounts[i][0]);

            for (auto email : emails) {
                temp.push_back(email);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};