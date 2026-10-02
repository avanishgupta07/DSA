class Solution {
public:
vector<string>ans;
void solve(string s,int start,int close,int n){
    if(s.length()==2*n){
        ans.push_back(s);
        return;
    }
    if(start<n){
        solve(s+"(",start+1,close,n);
    }
    if(close<start){
        solve(s+")",start,close+1,n);
    }


}
    vector<string> generateParenthesis(int n) {
        solve("",0,0,n);
        return ans;
        
    }
};