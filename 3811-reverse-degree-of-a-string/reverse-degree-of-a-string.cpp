class Solution {
public:
    int reverseDegree(string s) {
     int ans=0;
     for(int i=0;i<s.length();i++){
        int val=26-(s[i]-'a');
        ans+=(i+1)*val;
     }
     return ans;
    }
};