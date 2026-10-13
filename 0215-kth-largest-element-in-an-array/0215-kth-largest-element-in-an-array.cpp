class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //if we use sorting t.c is O(n log n)
        /*sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];*/

        //then we use nth_element t.c is O(n);
        nth_element(nums.begin(),nums.begin()+(k-1),nums.end(),greater<int>());
        return nums[k-1];

    }
};