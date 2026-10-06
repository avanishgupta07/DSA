class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0;
        int close=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                open++;
            }
            else{
                if(open>0){
                    open--;
                }
                else{
                    close++;
                }
            }
        }
        return open+close;
        
    }
};