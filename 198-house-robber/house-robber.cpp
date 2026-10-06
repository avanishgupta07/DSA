class Solution {
public:
    int rob(vector<int>& nums) {
    int n=nums.size();
    if(n==1) return nums[0];
    if(n==0) return 0;
    int prev2=0;
    int prev1=0;
    for(int i=0;i<n;i++){
        int take=nums[i]+prev2;
        int nottake=prev1;
        int curr=max(take,nottake);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
    }
};