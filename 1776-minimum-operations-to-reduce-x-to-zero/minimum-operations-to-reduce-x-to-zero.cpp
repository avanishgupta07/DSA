class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int target=total-x;
        if(target==0){
            return n;
        }
        if(target<0){
            return -1;
        }
        int left=0;
        int sum=0;
        int max_len=-1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>target && i-left+1){
                sum-=nums[left];
                left++;

            }
            if(sum==target){
                max_len=max(max_len,i-left+1);
            }
        }
        if(max_len==-1){
            return -1;
        }
        return n-max_len;
        
    }
};