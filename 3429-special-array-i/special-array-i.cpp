class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        vector<int> arr;
        for (int i= 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                arr.push_back(0);
            } else {
                arr.push_back(1);
            }
        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                return false;
            }
        }
        return true;
    }
};