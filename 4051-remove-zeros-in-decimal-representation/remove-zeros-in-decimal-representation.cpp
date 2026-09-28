class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        string ans;
        for(char ch:s){
            if(ch !='0'){
                ans+=ch;
            }
        }
        
        return stoll(ans);
        
    }
};