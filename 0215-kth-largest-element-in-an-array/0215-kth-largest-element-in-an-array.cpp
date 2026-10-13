class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //if we use sorting 
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
    }
};