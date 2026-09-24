class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> new1(n);
        
        for (int i = 0; i < n - 1; i++) {
            int maxi = -1;
            for (int j = i + 1; j < n; j++) {
                maxi = max(maxi, arr[j]);
            }
            new1[i] = maxi;
        }
        new1[n-1]=-1;
        return new1;
    }
};