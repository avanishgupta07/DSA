class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int result=0;
        sort(nums.begin(),nums.end());
        int i=0 ;
         int j=nums.size()-1;
        while(i<j){
            int sum=nums[i]+nums[j];
            result=max(result,sum);
            i++;
            j--;
        }
        return result; 
    }
};