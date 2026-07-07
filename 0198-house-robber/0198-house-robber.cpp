class Solution {
public:
int helper(int idx,vector<int>&nums,vector<int>&dp){
    if(idx>=nums.size()) return 0;
    if(idx==nums.size()){
        return nums[idx];
    }
    if(dp[idx]!=-1) return dp[idx];
    int rob=nums[idx]+helper(idx+2,nums,dp);
    int skip=helper(idx+1,nums,dp);
    return dp[idx]=max(rob,skip);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return helper(0,nums,dp);
    }
};