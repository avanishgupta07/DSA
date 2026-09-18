class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;
        int mid = 0;
        int right = nums.size() - 1;
        while (mid <= right) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[start]);
                start++;
                mid++;
            }
            else if (nums[mid] == 2) {
                swap(nums[mid], nums[right]);
                right--;
            }   else {
                mid++;
            }
        }
    }
};