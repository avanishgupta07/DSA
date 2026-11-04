class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string taken="";
        string result="";
        while(ss>>taken){
            result=taken+" "+result;
        }
        return result.substr(0,result.length()-1);
    }
};