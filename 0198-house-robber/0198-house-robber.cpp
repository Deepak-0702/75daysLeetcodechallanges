class Solution {
public:
int helper(int idx,vector<int>&nums,vector<int>&dp){
    if(idx>=nums.size()) {
        return 0;
    }
    if(dp[idx]!=-1) return dp[idx];
    int rob=nums[idx]+helper(idx+2,nums,dp);
    int skip=helper(idx+1,nums,dp);

    return dp[idx]=max(rob,skip);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        vector<int>dp(n,-1);
        return helper(0,nums,dp);
    }
};