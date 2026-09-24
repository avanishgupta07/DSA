class Solution {
public:
    string compressedString(string word) {
       int n=word.size();
       string ans;
       int i=0;
       while(i<n){
        char ch=word[i];
        int count=0;
        while(i<n && word[i]==ch && count<9){
            count++;
            i++;
        }
        ans+=to_string(count);
        ans+=ch;
       }
       return ans;
    }
};