class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        sort(nums.begin(),nums.end());
        int m=nums[n-1];
        for(int i=0;i<n;i++){
            sum+=m-nums[i];
        }
        return sum;
        
    }
};