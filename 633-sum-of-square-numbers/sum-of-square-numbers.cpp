class Solution {
public:
    bool judgeSquareSum(int c) {
     long long  a=sqrt(c);
        long long i=0;
        while(i<=a){
           long long  sum=i*i+a*a;
           if(sum==c){
            return true;
           }
           if(sum<c){
            i++;
           }
           else{
            a--;
           }
        }
        return false;
    }
};