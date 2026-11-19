class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=INT_MAX;

        //if we change first two element 
        ans=min(ans,nums[n-1]-nums[2]);
        //if we change last two element
        ans=min(ans,nums[n-3]-nums[0]);
        //if we change first and last element
        ans=min(ans,nums[n-2]-nums[1]);

        return ans;
    }
};